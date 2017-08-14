#ifndef __PERFECT_GSLAPI__
#define __PERFECT_GSLAPI__
#ifdef __APPLE__
#include "/usr/local/Cellar/gsl/2.4/include/gsl_blas.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_blas_types.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_block.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_block_char.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_block_complex_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_block_complex_float.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_block_complex_long_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_block_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_block_float.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_block_int.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_block_long.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_block_long_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_block_short.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_block_uchar.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_block_uint.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_block_ulong.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_block_ushort.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_bspline.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_cblas.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_cdf.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_chebyshev.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_check_range.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_combination.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_complex.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_complex_math.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_const.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_const_cgs.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_const_cgsm.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_const_mks.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_const_mksa.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_const_num.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_deriv.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_dft_complex.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_dft_complex_float.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_dht.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_diff.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_eigen.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_errno.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_fft.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_fft_complex.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_fft_complex_float.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_fft_halfcomplex.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_fft_halfcomplex_float.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_fft_real.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_fft_real_float.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_fit.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_heapsort.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_histogram.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_histogram2d.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_ieee_utils.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_inline.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_integration.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_interp.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_interp2d.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_linalg.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_machine.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_math.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_matrix.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_matrix_char.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_matrix_complex_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_matrix_complex_float.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_matrix_complex_long_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_matrix_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_matrix_float.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_matrix_int.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_matrix_long.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_matrix_long_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_matrix_short.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_matrix_uchar.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_matrix_uint.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_matrix_ulong.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_matrix_ushort.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_message.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_min.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_minmax.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_mode.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_monte.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_monte_miser.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_monte_plain.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_monte_vegas.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_multifit.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_multifit_nlin.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_multifit_nlinear.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_multilarge.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_multilarge_nlinear.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_multimin.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_multiroots.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_multiset.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_nan.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_ntuple.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_odeiv.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_odeiv2.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permutation.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_char.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_complex_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_complex_float.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_complex_long_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_float.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_int.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_long.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_long_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_matrix.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_matrix_char.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_matrix_complex_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_matrix_complex_float.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_matrix_complex_long_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_matrix_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_matrix_float.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_matrix_int.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_matrix_long.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_matrix_long_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_matrix_short.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_matrix_uchar.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_matrix_uint.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_matrix_ulong.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_matrix_ushort.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_short.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_uchar.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_uint.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_ulong.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_ushort.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_vector.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_vector_char.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_vector_complex_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_vector_complex_float.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_vector_complex_long_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_vector_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_vector_float.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_vector_int.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_vector_long.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_vector_long_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_vector_short.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_vector_uchar.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_vector_uint.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_vector_ulong.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_permute_vector_ushort.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_poly.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_pow_int.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_precision.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_qrng.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_randist.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_rng.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_roots.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_rstat.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_airy.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_bessel.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_clausen.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_coulomb.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_coupling.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_dawson.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_debye.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_dilog.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_elementary.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_ellint.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_elljac.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_erf.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_exp.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_expint.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_fermi_dirac.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_gamma.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_gegenbauer.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_hermite.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_hyperg.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_laguerre.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_lambert.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_legendre.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_log.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_mathieu.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_pow_int.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_psi.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_result.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_synchrotron.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_transport.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_trig.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sf_zeta.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_siman.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sort.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sort_char.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sort_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sort_float.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sort_int.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sort_long.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sort_long_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sort_short.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sort_uchar.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sort_uint.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sort_ulong.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sort_ushort.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sort_vector.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sort_vector_char.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sort_vector_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sort_vector_float.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sort_vector_int.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sort_vector_long.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sort_vector_long_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sort_vector_short.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sort_vector_uchar.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sort_vector_uint.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sort_vector_ulong.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sort_vector_ushort.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_spblas.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_specfunc.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_splinalg.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_spline.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_spline2d.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_spmatrix.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_statistics.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_statistics_char.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_statistics_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_statistics_float.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_statistics_int.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_statistics_long.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_statistics_long_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_statistics_short.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_statistics_uchar.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_statistics_uint.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_statistics_ulong.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_statistics_ushort.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sum.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_sys.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_test.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_types.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_vector.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_vector_char.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_vector_complex.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_vector_complex_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_vector_complex_float.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_vector_complex_long_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_vector_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_vector_float.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_vector_int.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_vector_long.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_vector_long_double.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_vector_short.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_vector_uchar.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_vector_uint.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_vector_ulong.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_vector_ushort.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_version.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_wavelet.h"
#include "/usr/local/Cellar/gsl/2.4/include/gsl_wavelet2d.h"
#else
#include "/usr/include/gsl/gsl_blas.h"
#include "/usr/include/gsl/gsl_blas_types.h"
#include "/usr/include/gsl/gsl_block.h"
#include "/usr/include/gsl/gsl_block_char.h"
#include "/usr/include/gsl/gsl_block_complex_double.h"
#include "/usr/include/gsl/gsl_block_complex_float.h"
#include "/usr/include/gsl/gsl_block_complex_long_double.h"
#include "/usr/include/gsl/gsl_block_double.h"
#include "/usr/include/gsl/gsl_block_float.h"
#include "/usr/include/gsl/gsl_block_int.h"
#include "/usr/include/gsl/gsl_block_long.h"
#include "/usr/include/gsl/gsl_block_long_double.h"
#include "/usr/include/gsl/gsl_block_short.h"
#include "/usr/include/gsl/gsl_block_uchar.h"
#include "/usr/include/gsl/gsl_block_uint.h"
#include "/usr/include/gsl/gsl_block_ulong.h"
#include "/usr/include/gsl/gsl_block_ushort.h"
#include "/usr/include/gsl/gsl_bspline.h"
#include "/usr/include/gsl/gsl_cblas.h"
#include "/usr/include/gsl/gsl_cdf.h"
#include "/usr/include/gsl/gsl_chebyshev.h"
#include "/usr/include/gsl/gsl_check_range.h"
#include "/usr/include/gsl/gsl_combination.h"
#include "/usr/include/gsl/gsl_complex.h"
#include "/usr/include/gsl/gsl_complex_math.h"
#include "/usr/include/gsl/gsl_const.h"
#include "/usr/include/gsl/gsl_const_cgs.h"
#include "/usr/include/gsl/gsl_const_cgsm.h"
#include "/usr/include/gsl/gsl_const_mks.h"
#include "/usr/include/gsl/gsl_const_mksa.h"
#include "/usr/include/gsl/gsl_const_num.h"
#include "/usr/include/gsl/gsl_deriv.h"
#include "/usr/include/gsl/gsl_dft_complex.h"
#include "/usr/include/gsl/gsl_dft_complex_float.h"
#include "/usr/include/gsl/gsl_dht.h"
#include "/usr/include/gsl/gsl_diff.h"
#include "/usr/include/gsl/gsl_eigen.h"
#include "/usr/include/gsl/gsl_errno.h"
#include "/usr/include/gsl/gsl_fft.h"
#include "/usr/include/gsl/gsl_fft_complex.h"
#include "/usr/include/gsl/gsl_fft_complex_float.h"
#include "/usr/include/gsl/gsl_fft_halfcomplex.h"
#include "/usr/include/gsl/gsl_fft_halfcomplex_float.h"
#include "/usr/include/gsl/gsl_fft_real.h"
#include "/usr/include/gsl/gsl_fft_real_float.h"
#include "/usr/include/gsl/gsl_fit.h"
#include "/usr/include/gsl/gsl_heapsort.h"
#include "/usr/include/gsl/gsl_histogram.h"
#include "/usr/include/gsl/gsl_histogram2d.h"
#include "/usr/include/gsl/gsl_ieee_utils.h"
#include "/usr/include/gsl/gsl_inline.h"
#include "/usr/include/gsl/gsl_integration.h"
#include "/usr/include/gsl/gsl_interp.h"
#include "/usr/include/gsl/gsl_interp2d.h"
#include "/usr/include/gsl/gsl_linalg.h"
#include "/usr/include/gsl/gsl_machine.h"
#include "/usr/include/gsl/gsl_math.h"
#include "/usr/include/gsl/gsl_matrix.h"
#include "/usr/include/gsl/gsl_matrix_char.h"
#include "/usr/include/gsl/gsl_matrix_complex_double.h"
#include "/usr/include/gsl/gsl_matrix_complex_float.h"
#include "/usr/include/gsl/gsl_matrix_complex_long_double.h"
#include "/usr/include/gsl/gsl_matrix_double.h"
#include "/usr/include/gsl/gsl_matrix_float.h"
#include "/usr/include/gsl/gsl_matrix_int.h"
#include "/usr/include/gsl/gsl_matrix_long.h"
#include "/usr/include/gsl/gsl_matrix_long_double.h"
#include "/usr/include/gsl/gsl_matrix_short.h"
#include "/usr/include/gsl/gsl_matrix_uchar.h"
#include "/usr/include/gsl/gsl_matrix_uint.h"
#include "/usr/include/gsl/gsl_matrix_ulong.h"
#include "/usr/include/gsl/gsl_matrix_ushort.h"
#include "/usr/include/gsl/gsl_message.h"
#include "/usr/include/gsl/gsl_min.h"
#include "/usr/include/gsl/gsl_minmax.h"
#include "/usr/include/gsl/gsl_mode.h"
#include "/usr/include/gsl/gsl_monte.h"
#include "/usr/include/gsl/gsl_monte_miser.h"
#include "/usr/include/gsl/gsl_monte_plain.h"
#include "/usr/include/gsl/gsl_monte_vegas.h"
#include "/usr/include/gsl/gsl_multifit.h"
#include "/usr/include/gsl/gsl_multifit_nlin.h"
#include "/usr/include/gsl/gsl_multifit_nlinear.h"
#include "/usr/include/gsl/gsl_multilarge.h"
#include "/usr/include/gsl/gsl_multilarge_nlinear.h"
#include "/usr/include/gsl/gsl_multimin.h"
#include "/usr/include/gsl/gsl_multiroots.h"
#include "/usr/include/gsl/gsl_multiset.h"
#include "/usr/include/gsl/gsl_nan.h"
#include "/usr/include/gsl/gsl_ntuple.h"
#include "/usr/include/gsl/gsl_odeiv.h"
#include "/usr/include/gsl/gsl_odeiv2.h"
#include "/usr/include/gsl/gsl_permutation.h"
#include "/usr/include/gsl/gsl_permute.h"
#include "/usr/include/gsl/gsl_permute_char.h"
#include "/usr/include/gsl/gsl_permute_complex_double.h"
#include "/usr/include/gsl/gsl_permute_complex_float.h"
#include "/usr/include/gsl/gsl_permute_complex_long_double.h"
#include "/usr/include/gsl/gsl_permute_double.h"
#include "/usr/include/gsl/gsl_permute_float.h"
#include "/usr/include/gsl/gsl_permute_int.h"
#include "/usr/include/gsl/gsl_permute_long.h"
#include "/usr/include/gsl/gsl_permute_long_double.h"
#include "/usr/include/gsl/gsl_permute_matrix.h"
#include "/usr/include/gsl/gsl_permute_matrix_char.h"
#include "/usr/include/gsl/gsl_permute_matrix_complex_double.h"
#include "/usr/include/gsl/gsl_permute_matrix_complex_float.h"
#include "/usr/include/gsl/gsl_permute_matrix_complex_long_double.h"
#include "/usr/include/gsl/gsl_permute_matrix_double.h"
#include "/usr/include/gsl/gsl_permute_matrix_float.h"
#include "/usr/include/gsl/gsl_permute_matrix_int.h"
#include "/usr/include/gsl/gsl_permute_matrix_long.h"
#include "/usr/include/gsl/gsl_permute_matrix_long_double.h"
#include "/usr/include/gsl/gsl_permute_matrix_short.h"
#include "/usr/include/gsl/gsl_permute_matrix_uchar.h"
#include "/usr/include/gsl/gsl_permute_matrix_uint.h"
#include "/usr/include/gsl/gsl_permute_matrix_ulong.h"
#include "/usr/include/gsl/gsl_permute_matrix_ushort.h"
#include "/usr/include/gsl/gsl_permute_short.h"
#include "/usr/include/gsl/gsl_permute_uchar.h"
#include "/usr/include/gsl/gsl_permute_uint.h"
#include "/usr/include/gsl/gsl_permute_ulong.h"
#include "/usr/include/gsl/gsl_permute_ushort.h"
#include "/usr/include/gsl/gsl_permute_vector.h"
#include "/usr/include/gsl/gsl_permute_vector_char.h"
#include "/usr/include/gsl/gsl_permute_vector_complex_double.h"
#include "/usr/include/gsl/gsl_permute_vector_complex_float.h"
#include "/usr/include/gsl/gsl_permute_vector_complex_long_double.h"
#include "/usr/include/gsl/gsl_permute_vector_double.h"
#include "/usr/include/gsl/gsl_permute_vector_float.h"
#include "/usr/include/gsl/gsl_permute_vector_int.h"
#include "/usr/include/gsl/gsl_permute_vector_long.h"
#include "/usr/include/gsl/gsl_permute_vector_long_double.h"
#include "/usr/include/gsl/gsl_permute_vector_short.h"
#include "/usr/include/gsl/gsl_permute_vector_uchar.h"
#include "/usr/include/gsl/gsl_permute_vector_uint.h"
#include "/usr/include/gsl/gsl_permute_vector_ulong.h"
#include "/usr/include/gsl/gsl_permute_vector_ushort.h"
#include "/usr/include/gsl/gsl_poly.h"
#include "/usr/include/gsl/gsl_pow_int.h"
#include "/usr/include/gsl/gsl_precision.h"
#include "/usr/include/gsl/gsl_qrng.h"
#include "/usr/include/gsl/gsl_randist.h"
#include "/usr/include/gsl/gsl_rng.h"
#include "/usr/include/gsl/gsl_roots.h"
#include "/usr/include/gsl/gsl_rstat.h"
#include "/usr/include/gsl/gsl_sf.h"
#include "/usr/include/gsl/gsl_sf_airy.h"
#include "/usr/include/gsl/gsl_sf_bessel.h"
#include "/usr/include/gsl/gsl_sf_clausen.h"
#include "/usr/include/gsl/gsl_sf_coulomb.h"
#include "/usr/include/gsl/gsl_sf_coupling.h"
#include "/usr/include/gsl/gsl_sf_dawson.h"
#include "/usr/include/gsl/gsl_sf_debye.h"
#include "/usr/include/gsl/gsl_sf_dilog.h"
#include "/usr/include/gsl/gsl_sf_elementary.h"
#include "/usr/include/gsl/gsl_sf_ellint.h"
#include "/usr/include/gsl/gsl_sf_elljac.h"
#include "/usr/include/gsl/gsl_sf_erf.h"
#include "/usr/include/gsl/gsl_sf_exp.h"
#include "/usr/include/gsl/gsl_sf_expint.h"
#include "/usr/include/gsl/gsl_sf_fermi_dirac.h"
#include "/usr/include/gsl/gsl_sf_gamma.h"
#include "/usr/include/gsl/gsl_sf_gegenbauer.h"
#include "/usr/include/gsl/gsl_sf_hermite.h"
#include "/usr/include/gsl/gsl_sf_hyperg.h"
#include "/usr/include/gsl/gsl_sf_laguerre.h"
#include "/usr/include/gsl/gsl_sf_lambert.h"
#include "/usr/include/gsl/gsl_sf_legendre.h"
#include "/usr/include/gsl/gsl_sf_log.h"
#include "/usr/include/gsl/gsl_sf_mathieu.h"
#include "/usr/include/gsl/gsl_sf_pow_int.h"
#include "/usr/include/gsl/gsl_sf_psi.h"
#include "/usr/include/gsl/gsl_sf_result.h"
#include "/usr/include/gsl/gsl_sf_synchrotron.h"
#include "/usr/include/gsl/gsl_sf_transport.h"
#include "/usr/include/gsl/gsl_sf_trig.h"
#include "/usr/include/gsl/gsl_sf_zeta.h"
#include "/usr/include/gsl/gsl_siman.h"
#include "/usr/include/gsl/gsl_sort.h"
#include "/usr/include/gsl/gsl_sort_char.h"
#include "/usr/include/gsl/gsl_sort_double.h"
#include "/usr/include/gsl/gsl_sort_float.h"
#include "/usr/include/gsl/gsl_sort_int.h"
#include "/usr/include/gsl/gsl_sort_long.h"
#include "/usr/include/gsl/gsl_sort_long_double.h"
#include "/usr/include/gsl/gsl_sort_short.h"
#include "/usr/include/gsl/gsl_sort_uchar.h"
#include "/usr/include/gsl/gsl_sort_uint.h"
#include "/usr/include/gsl/gsl_sort_ulong.h"
#include "/usr/include/gsl/gsl_sort_ushort.h"
#include "/usr/include/gsl/gsl_sort_vector.h"
#include "/usr/include/gsl/gsl_sort_vector_char.h"
#include "/usr/include/gsl/gsl_sort_vector_double.h"
#include "/usr/include/gsl/gsl_sort_vector_float.h"
#include "/usr/include/gsl/gsl_sort_vector_int.h"
#include "/usr/include/gsl/gsl_sort_vector_long.h"
#include "/usr/include/gsl/gsl_sort_vector_long_double.h"
#include "/usr/include/gsl/gsl_sort_vector_short.h"
#include "/usr/include/gsl/gsl_sort_vector_uchar.h"
#include "/usr/include/gsl/gsl_sort_vector_uint.h"
#include "/usr/include/gsl/gsl_sort_vector_ulong.h"
#include "/usr/include/gsl/gsl_sort_vector_ushort.h"
#include "/usr/include/gsl/gsl_spblas.h"
#include "/usr/include/gsl/gsl_specfunc.h"
#include "/usr/include/gsl/gsl_splinalg.h"
#include "/usr/include/gsl/gsl_spline.h"
#include "/usr/include/gsl/gsl_spline2d.h"
#include "/usr/include/gsl/gsl_spmatrix.h"
#include "/usr/include/gsl/gsl_statistics.h"
#include "/usr/include/gsl/gsl_statistics_char.h"
#include "/usr/include/gsl/gsl_statistics_double.h"
#include "/usr/include/gsl/gsl_statistics_float.h"
#include "/usr/include/gsl/gsl_statistics_int.h"
#include "/usr/include/gsl/gsl_statistics_long.h"
#include "/usr/include/gsl/gsl_statistics_long_double.h"
#include "/usr/include/gsl/gsl_statistics_short.h"
#include "/usr/include/gsl/gsl_statistics_uchar.h"
#include "/usr/include/gsl/gsl_statistics_uint.h"
#include "/usr/include/gsl/gsl_statistics_ulong.h"
#include "/usr/include/gsl/gsl_statistics_ushort.h"
#include "/usr/include/gsl/gsl_sum.h"
#include "/usr/include/gsl/gsl_sys.h"
#include "/usr/include/gsl/gsl_test.h"
#include "/usr/include/gsl/gsl_types.h"
#include "/usr/include/gsl/gsl_vector.h"
#include "/usr/include/gsl/gsl_vector_char.h"
#include "/usr/include/gsl/gsl_vector_complex.h"
#include "/usr/include/gsl/gsl_vector_complex_double.h"
#include "/usr/include/gsl/gsl_vector_complex_float.h"
#include "/usr/include/gsl/gsl_vector_complex_long_double.h"
#include "/usr/include/gsl/gsl_vector_double.h"
#include "/usr/include/gsl/gsl_vector_float.h"
#include "/usr/include/gsl/gsl_vector_int.h"
#include "/usr/include/gsl/gsl_vector_long.h"
#include "/usr/include/gsl/gsl_vector_long_double.h"
#include "/usr/include/gsl/gsl_vector_short.h"
#include "/usr/include/gsl/gsl_vector_uchar.h"
#include "/usr/include/gsl/gsl_vector_uint.h"
#include "/usr/include/gsl/gsl_vector_ulong.h"
#include "/usr/include/gsl/gsl_vector_ushort.h"
#include "/usr/include/gsl/gsl_version.h"
#include "/usr/include/gsl/gsl_wavelet.h"
#include "/usr/include/gsl/gsl_wavelet2d.h"
#endif
#endif
