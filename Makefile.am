bin_PROGRAMS = heart2d heart3d
heart2d_SOURCES = source/heart.cc
heart3d_SOURCES = source/heart.cc

heart2d_CPPFLAGS = $(LH_IBAMR_CPPFLAGS) -DNDIM=2
heart2d_CXXFLAGS = $(LH_IBAMR_CXXFLAGS)
heart2d_LDFLAGS = $(LH_IBAMR_LDFLAGS) $(LH_IBAMR_LIB_2D) $(LH_IBAMR_LIBS)

heart3d_CPPFLAGS = $(LH_IBAMR_CPPFLAGS) -DNDIM=3
heart3d_CXXFLAGS = $(LH_IBAMR_CXXFLAGS)
heart3d_LDFLAGS = $(LH_IBAMR_LDFLAGS) $(LH_IBAMR_LIB_3D) $(LH_IBAMR_LIBS)
