/* Module: tokr3260.dll
   Function: FUN_68053c70
   Address: 68053c70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_68053c70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  iVar2 = 0;
  do {
    iVar1 = FUN_68053c50(iVar2);
    if (iVar1 == -999999) {
      return -999999;
    }
    iVar1 = FUN_68053c50(iVar2);
    if (param_1 == iVar1) {
      iVar3 = iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  iVar2 = -999999;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  return iVar2;
}


