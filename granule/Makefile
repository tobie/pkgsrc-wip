# $NetBSD$
#

DISTNAME=		granule-1.4.0-7
PKGNAME=		${DISTNAME:S/-7$//}
PKGREVISION=		2
CATEGORIES=		misc
MASTER_SITES=		${MASTER_SITE_SOURCEFORGE:=granule/}

MAINTAINER=		bartosz.kuzma@gmail.com
HOMEPAGE=		http://granule.sourceforge.net/
COMMENT=		Program for Leitner methodology for learning new words

BUILD_DEPENDS+=		p5-XML-Parser-[0-9]*:../../textproc/p5-XML-Parser

PKG_DESTDIR_SUPPORT=	none

USE_LANGUAGES=		c c++
USE_LIBTOOL=		yes
USE_PKGLOCALEDIR=	yes

USE_TOOLS+=		gmake intltool msgfmt perl pkg-config xgettext

GNU_CONFIGURE=		yes

.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../converters/libiconv/buildlink3.mk"
.include "../../devel/gettext-lib/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../textproc/libxml2/buildlink3.mk"
.include "../../wip/libassa/buildlink3.mk"
.include "../../x11/gtkmm/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
