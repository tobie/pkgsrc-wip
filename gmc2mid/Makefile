# $NetBSD$
#

DISTNAME=		gmc-0-6
PKGNAME=		gmc2mid-0.6
CATEGORIES=		audio
MASTER_SITES=		http://www.geocities.com/SiliconValley/Software/8918/linux/
EXTRACT_SUFX=		.tgz

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		${MASTER_SITES}
COMMENT=		Guenthers Midi Compiler, a tool to convert text to midi

PKG_INSTALLATION_TYPES=	overwrite pkgviews

WRKSRC=			${WRKDIR}/gmc

USE_TOOLS+=		pax

do-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/gmc2mid/
	cd ${WRKSRC} && pax -rw lections samples \
		${PREFIX}/share/examples/gmc2mid
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/gmc2mid
	${INSTALL_DATA} ${WRKSRC}/README ${PREFIX}/share/doc/gmc2mid/README
	${INSTALL_PROGRAM} ${WRKSRC}/gmc ${PREFIX}/bin/gmc2mid

.include "../../mk/bsd.pkg.mk"
