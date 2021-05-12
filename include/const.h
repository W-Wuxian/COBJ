/**
 *
 * @file const.h
 * COBJ API enums parameters
 *
**/
#ifndef _cobj_const_h_
#define _cobj_const_h_

/**
 * @brief Arithmetic types.
 *
 * This describes the different arithmetic that can be stored in a cobj.
 */
typedef enum cobj_coeftype_e {
    CobjFloat     = 1,  /**< Single precision real  */
    CobjDouble    = 2,  /**< Double precision real  */
    CobjComplex32 = 3,  /**< Single precision complex */
    CobjComplex64 = 4   /**< Double precision complex */
} cobj_coeftype_t;

/**
 * @brief COBJ format
 */
typedef enum cobj_fmttype_e {
    Cobjvectdense, /**< dense vector */
    Cobjmatdense,  /**< dense matrice */
    CobjspmCSC,    /**< Compressed sparse column */
    CobjspmCSR,    /**< Compressed sparse row    */
    CobjspmIJV     /**< Coordinates              */
} cobj_fmttype_t;


/**
 * @brief Direction of the matrix storage
 */
typedef enum cobj_layout_e {
    CobjRowMajor  = 1, /**< Storage in row major order    */
    CobjColMajor  = 2  /**< Storage in column major order */
} cobj_layout_t;

/**
 * @brief Transpostion
 */
typedef enum cobj_trans_e {
    CobjNoTrans   = 1, /**< Use A         */
    CobjTrans     = 2, /**< Use A^t       */
    CobjConjTrans = 3  /**< Use conj(A^t) */
} cobj_trans_t;


#endif /* _cobj_const_h_ */
