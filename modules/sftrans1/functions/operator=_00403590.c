/* Module: sftrans1.dll
   Function: operator=
   Address: 00403590
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CSfHermiteCubicEval & __thiscall CSfHermiteCubicEval::operator=(class
   CSfHermiteCubicEval const &) */

CSfHermiteCubicEval * __thiscall
CSfHermiteCubicEval::operator=(CSfHermiteCubicEval *this,CSfHermiteCubicEval *param_1)

{
                    /* 0x3590  11  ??4CSfHermiteCubicEval@@QAEAAV0@ABV0@@Z */
  *this = *param_1;
  return this;
}


