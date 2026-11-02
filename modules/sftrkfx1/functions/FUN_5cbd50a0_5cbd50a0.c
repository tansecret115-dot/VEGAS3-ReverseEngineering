/* Module: sftrkfx1.dll
   Function: FUN_5cbd50a0
   Address: 5cbd50a0
   Source: Ghidra pseudocode (Stage 10 batch) */


HMENU FUN_5cbd50a0(HMENU param_1)

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
      FUN_5cbd4ff0(pHVar2);
    }
    nPos = nPos + 1;
  } while (nPos < uVar1);
  return param_1;
}


