# $NetBSD$
#


# TODO: handle etc files? is etc.xdg okay?
# Default menu file should be put into /etc/xdg/menus according to the spec.
# If you put it into /usr/etc/xdg/menus, nothing will work.
# So, please make sure that lxde-applications.menu is installed in /etc/xdg/menus.


DISTNAME=	lxmenu-data-0.1.2
CATEGORIES=	x11
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=lxde/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://lxde.sourceforge.net/
COMMENT=	LXDE menu data

GNU_CONFIGURE=	yes
#USE_LANGUAGES=	# none
USE_TOOLS+=	gmake intltool

.include "../../mk/bsd.pkg.mk"
