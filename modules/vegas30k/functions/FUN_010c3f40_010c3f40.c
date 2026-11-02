/* Module: vegas30k.dll
   Function: FUN_010c3f40
   Address: 010c3f40
   Source: Ghidra pseudocode (Stage 10 batch) */


HMENU FUN_010c3f40(HMENU param_1)

{
  uint uVar1;
  HMENU pHVar2;
  uint nPos;
  
  uVar1 = GetMenuItemCount(param_1);
  nPos = 0;
  if (uVar1 == 0) {
    return param_1;
  }
  do {
    pHVar2 = GetSubMenu(param_1,nPos);
    if (pHVar2 != (HMENU)0x0) {
      FUN_010c3e90(pHVar2,param_1,nPos);
    }
    nPos = nPos + 1;
  } while (nPos < uVar1);
  return param_1;
}


