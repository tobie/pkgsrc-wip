# $NetBSD$
#

DISTNAME=		commoncpp2-1.8.1
PKGREVISION=		1
CATEGORIES=		devel
MASTER_SITES=		${MASTER_SITE_GNU:=commonc++/}

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://cplusplus.sourceforge.net/
COMMENT=		Portable and highly optimized class framework for C++
LICENSE=		gnu-gpl-v2

GNU_CONFIGURE=		yes
INFO_FILES=		yes
USE_LANGUAGES=		c c++
USE_LIBTOOL=		yes
USE_PKGLOCALEDIR=	yes

PKGCONFIG_OVERRIDE+=	${WRKSRC}/src/libccgnu2.pc.in
PKGCONFIG_OVERRIDE+=	${WRKSRC}/src/libccext2.pc.in

CONFIGURE_ARGS+=	--with-openssl
CONFIGURE_ENV+=		ac_cv_lib_rt_clock_gettime=no
CONFIGURE_ENV+=		ac_cv_func_clock_gettime=no

.include "../../devel/zlib/buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"
.include "../../textproc/libxml2/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
