# $NetBSD$
#

DISTNAME=	paegan-0.9.0
PKGNAME=        ${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	math
MASTER_SITES=	http://pypi.python.org/packages/source/p/paegan/

MAINTAINER=	jihbed.research@gmail.com
HOMEPAGE=	https://github.com/asascience-open/paegan
COMMENT=	Processing and Analysis for Numerical Data
LICENSE=	gnu-gpl-v3

USE_LANGUAGES=	# none

do-test:
	${RUN} cd ${WRKSRC}; ${SETENV} ${TEST_ENV} ${PYTHONBIN} runtests.py

.include "../../math/py-numpy/buildlink3.mk"
.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
