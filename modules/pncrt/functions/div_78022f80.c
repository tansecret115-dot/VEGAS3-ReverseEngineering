/* Module: pncrt.dll
   Function: div
   Address: 78022f80
   Source: Ghidra pseudocode (Stage 10 batch) */


div_t __cdecl div(int _Numerator,int _Denominator)

{
  int iVar1;
  int iVar2;
  div_t dVar3;
  
                    /* 0x22f80  594  div
                       0x22f80  661  ldiv */
  iVar1 = _Numerator / _Denominator;
  iVar2 = _Numerator % _Denominator;
  if ((_Numerator < 0) && (0 < iVar2)) {
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 - _Denominator;
  }
  dVar3.rem = iVar2;
  dVar3.quot = iVar1;
  return dVar3;
}


