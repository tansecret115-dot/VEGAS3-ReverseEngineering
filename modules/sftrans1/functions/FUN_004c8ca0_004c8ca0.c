/* Module: sftrans1.dll
   Function: FUN_004c8ca0
   Address: 004c8ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


HMENU FUN_004c8ca0(HMENU param_1)

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
      FUN_004c8bf0(pHVar2,param_1,nPos);
    }
    nPos = nPos + 1;
  } while (nPos < uVar1);
  return param_1;
}


