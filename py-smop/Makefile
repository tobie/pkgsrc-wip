# $NetBSD$
#

DISTNAME=	smop-0.1.5
CATEGORIES=	math
MASTER_SITES=	http://pypi.python.org/packages/source/s/smop/

MAINTAINER=	jihbed.research@gmail.com
HOMEPAGE=	http://chiselapp.com/user/victorlei/repository/smop-dev/index
COMMENT=	Matlab/Octave to Python compiler
#LICENSE=	# TODO: (see mk/license.mk)

DEPENDS+=	${PYPKGPREFIX}-networkx>=1.2:../../math/py-networkx

WRKSRC=		${WRKDIR}/smop-0.1.5

USE_LANGUAGES=	# none

.include "../../lang/python/egg.mk"
.include "../../math/py-numpy/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
