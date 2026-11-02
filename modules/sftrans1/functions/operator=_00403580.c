/* Module: sftrans1.dll
   Function: operator=
   Address: 00403580
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CSfHermiteCubicEval_AbNormal & __thiscall
   CSfHermiteCubicEval_AbNormal::operator=(class CSfHermiteCubicEval_AbNormal const &) */

CSfHermiteCubicEval_AbNormal * __thiscall
CSfHermiteCubicEval_AbNormal::operator=
          (CSfHermiteCubicEval_AbNormal *this,CSfHermiteCubicEval_AbNormal *param_1)

{
                    /* 0x3580  12  ??4CSfHermiteCubicEval_AbNormal@@QAEAAV0@ABV0@@Z */
  *this = *param_1;
  return this;
}


