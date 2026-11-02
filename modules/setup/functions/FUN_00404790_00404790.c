/* Module: Setup.exe
   Function: FUN_00404790
   Address: 00404790
   Source: Ghidra pseudocode (Stage 10 batch) */


HMENU FUN_00404790(HMENU param_1)

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
      FUN_004046e0(pHVar2);
    }
    nPos = nPos + 1;
  } while (nPos < uVar1);
  return param_1;
}


