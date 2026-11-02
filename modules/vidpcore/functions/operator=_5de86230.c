/* Module: vidpcore.dll
   Function: operator=
   Address: 5de86230
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CSfHermiteCubicEval & __thiscall CSfHermiteCubicEval::operator=(class
   CSfHermiteCubicEval const &) */

CSfHermiteCubicEval * __thiscall
CSfHermiteCubicEval::operator=(CSfHermiteCubicEval *this,CSfHermiteCubicEval *param_1)

{
                    /* 0x86230  6  ??4CSfHermiteCubicEval@@QAEAAV0@ABV0@@Z */
  *this = *param_1;
  return this;
}


