/* Module: sftrans1.dll
   Function: FUN_004a2790
   Address: 004a2790
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004a2790(LPCSTR param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = false;
  iVar3 = 0;
  iVar2 = lstrlenA(param_1);
  while( true ) {
    while( true ) {
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) {
        return -1;
      }
      if ((param_1[iVar2] != '0') || (bVar1)) break;
      iVar3 = iVar3 + 1;
      bVar1 = false;
    }
    if (param_1[iVar2] == '.') break;
    bVar1 = true;
  }
  return iVar3;
}


