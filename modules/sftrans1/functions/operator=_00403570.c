/* Module: sftrans1.dll
   Function: operator=
   Address: 00403570
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CSfLinearEval & __thiscall CSfLinearEval::operator=(class CSfLinearEval const &) */

CSfLinearEval * __thiscall CSfLinearEval::operator=(CSfLinearEval *this,CSfLinearEval *param_1)

{
                    /* 0x3570  13  ??4CSfLinearEval@@QAEAAV0@ABV0@@Z */
  *this = *param_1;
  return this;
}


