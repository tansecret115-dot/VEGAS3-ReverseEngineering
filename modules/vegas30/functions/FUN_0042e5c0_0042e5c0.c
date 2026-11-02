/* Module: vegas30.exe
   Function: FUN_0042e5c0
   Address: 0042e5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042e5c0(HMENU param_1)

{
  int iVar1;
  uint *puVar2;
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
  puVar2 = &DAT_0063dbb0;
  do {
    if (UVar3 == *puVar2) {
      return iVar1;
    }
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + 1;
  } while (puVar2 < &DAT_0063dc10);
  if (UVar3 < 0xa783) {
    if (0xa780 < UVar3) {
      return 0x14;
    }
    if (UVar3 == 0xa0a4) {
      return 4;
    }
  }
  return -1;
}


