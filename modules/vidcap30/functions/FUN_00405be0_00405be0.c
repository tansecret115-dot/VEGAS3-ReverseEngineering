/* Module: vidcap30.exe
   Function: FUN_00405be0
   Address: 00405be0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00405be0(HMENU param_1,int param_2)

{
  int iVar1;
  UINT uIDEnableItem;
  
  iVar1 = GetMenuItemCount(param_1);
  uIDEnableItem = 0;
  if (0 < iVar1) {
    do {
      EnableMenuItem(param_1,uIDEnableItem,param_2 == 0 | 0x400);
      uIDEnableItem = uIDEnableItem + 1;
    } while ((int)uIDEnableItem < iVar1);
  }
  DrawMenuBar(DAT_005ba4bc);
  return;
}


