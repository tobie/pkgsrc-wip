# $NetBSD$
#

DISTNAME=	pyse-0.3.1
PKGNAME=	${PYPKGPREFIX}-${DISTNAME:S/^py//}
PKGREVISION=	1
CATEGORIES=	math python
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=pyfdm/}

MAINTAINER=	jihbed.research@gmail.com
HOMEPAGE=	http://pyfdm.sourceforge.net/
COMMENT=	Framework for solving PDEs with FDM using Python
LICENSE=	gnu-gpl-v3

DEPENDS+=	${PYPKGPREFIX}-Pmw>=1.3.2:../../x11/py-Pmw

USE_LANGUAGES=	c c++

PYDISTUTILSPKG=	yes

.include "../../lang/python/extension.mk"
.include "../../math/py-Numeric/buildlink3.mk"
.include "../../math/py-numarray/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
