/* Module: vegas30.exe
   Function: operator=
   Address: 0057ecb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CSfXSpline & __thiscall CSfXSpline::operator=(class CSfXSpline const &) */

CSfXSpline * __thiscall CSfXSpline::operator=(CSfXSpline *this,CSfXSpline *param_1)

{
  int iVar1;
  CSfXSpline *pCVar2;
  
                    /* 0x17ecb0  6  ??4CSfXSpline@@QAEAAV0@ABV0@@Z */
  pCVar2 = this;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pCVar2 = pCVar2 + 4;
  }
  return this;
}


