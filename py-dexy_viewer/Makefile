# $NetBSD$

DISTNAME=	dexy_viewer-0.0.4
PKGNAME=        ${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	textproc
MASTER_SITES=	https://pypi.python.org/packages/source/d/dexy_viewer/

MAINTAINER=	jihbed.research@gmail.com
HOMEPAGE=	http://dexy.it/
COMMENT=	Document Automation viewer
LICENSE=	mit

DEPENDS+=    ${PYPKGPREFIX}-yaml>=3.10:../../textproc/py-yaml
DEPENDS+=    ${PYPKGPREFIX}-inflection>=0.2.0:../../wip/py-inflection

WRKSRC=		${WRKDIR}/dexy_viewer-0.0.4
USE_LANGUAGES=	# none

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
