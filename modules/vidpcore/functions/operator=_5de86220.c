/* Module: vidpcore.dll
   Function: operator=
   Address: 5de86220
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CSfLinearEval & __thiscall CSfLinearEval::operator=(class CSfLinearEval const &) */

CSfLinearEval * __thiscall CSfLinearEval::operator=(CSfLinearEval *this,CSfLinearEval *param_1)

{
                    /* 0x86220  7  ??4CSfLinearEval@@QAEAAV0@ABV0@@Z */
  *this = *param_1;
  return this;
}


