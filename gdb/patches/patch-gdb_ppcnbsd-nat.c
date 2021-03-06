$NetBSD$

Absorb membername difference.

--- ./work/gdb-7.5.1/gdb/ppcnbsd-nat.c.orig	2013-06-01 22:55:47.000000000 +0900
+++ ./gdb/ppcnbsd-nat.c	2013-06-01 22:58:09.000000000 +0900
@@ -161,20 +161,20 @@ ppcnbsd_supply_pcb (struct regcache *reg
     return 0;
 
   read_memory (pcb->pcb_sp, (gdb_byte *)&sf, sizeof sf);
-  regcache_raw_supply (regcache, tdep->ppc_cr_regnum, &sf.cr);
-  regcache_raw_supply (regcache, tdep->ppc_gp0_regnum + 2, &sf.fixreg2);
+  regcache_raw_supply (regcache, tdep->ppc_cr_regnum, &sf.sf_cr);
+  regcache_raw_supply (regcache, tdep->ppc_gp0_regnum + 2, &sf.sf_fixreg2);
   for (i = 0 ; i < 19 ; i++)
     regcache_raw_supply (regcache, tdep->ppc_gp0_regnum + 13 + i,
-			 &sf.fixreg[i]);
+			 &sf.sf_fixreg[i]);
 
-  read_memory(sf.sp, (gdb_byte *)&cf, sizeof(cf));
-  regcache_raw_supply (regcache, tdep->ppc_gp0_regnum + 30, &cf.r30);
-  regcache_raw_supply (regcache, tdep->ppc_gp0_regnum + 31, &cf.r31);
-  regcache_raw_supply (regcache, tdep->ppc_gp0_regnum + 1, &cf.sp);
-
-  read_memory(cf.sp, (gdb_byte *)&cf, sizeof(cf));
-  regcache_raw_supply (regcache, tdep->ppc_lr_regnum, &cf.lr);
-  regcache_raw_supply (regcache, gdbarch_pc_regnum (gdbarch), &cf.lr);
+  read_memory(sf.sf_sp, (gdb_byte *)&cf, sizeof(cf));
+  regcache_raw_supply (regcache, tdep->ppc_gp0_regnum + 30, &cf.cf_r30);
+  regcache_raw_supply (regcache, tdep->ppc_gp0_regnum + 31, &cf.cf_r31);
+  regcache_raw_supply (regcache, tdep->ppc_gp0_regnum + 1, &cf.cf_sp);
+
+  read_memory(cf.cf_sp, (gdb_byte *)&cf, sizeof(cf));
+  regcache_raw_supply (regcache, tdep->ppc_lr_regnum, &cf.cf_lr);
+  regcache_raw_supply (regcache, gdbarch_pc_regnum (gdbarch), &cf.cf_lr);
 
   return 1;
 }
