# $NetBSD$
#

DISTNAME=		mpq-tools-0.3.0
CATEGORIES=		archivers
MASTER_SITES=		https://babelize.org/download/
EXTRACT_SUFX=		.tar.bz2

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		https://babelize.org/
COMMENT=		Tools for manipulating MPQ (MoPaQ) archives

PKG_INSTALLATION_TYPES=	overwrite pkgviews

USE_LIBTOOL=		yes
GNU_CONFIGURE=		yes

INSTALLATION_DIRS=	bin include lib share

.include "../../devel/zlib/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
