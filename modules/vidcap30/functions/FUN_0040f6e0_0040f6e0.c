/* Module: vidcap30.exe
   Function: FUN_0040f6e0
   Address: 0040f6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040f6e0(HMENU param_1)

{
  int iVar1;
  UINT *pUVar2;
  UINT UVar3;
  int nPos;
  
  UVar3 = 0xfffffffe;
  iVar1 = GetMenuItemCount(param_1);
  nPos = 0;
  if (0 < iVar1) {
    do {
      UVar3 = GetMenuItemID(param_1,nPos);
      if ((UVar3 != 0) && (UVar3 < 0xfffffffe)) break;
      nPos = nPos + 1;
    } while (nPos < iVar1);
  }
  iVar1 = 0;
  pUVar2 = &DAT_005b2700;
  do {
    if (UVar3 == *pUVar2) {
      return iVar1;
    }
    pUVar2 = pUVar2 + 1;
    iVar1 = iVar1 + 1;
  } while (pUVar2 < &DAT_005b2744);
  return -1;
}


