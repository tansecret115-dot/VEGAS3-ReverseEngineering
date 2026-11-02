/* Module: Setup.exe
   Function: FUN_004046e0
   Address: 004046e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004046e0(HMENU param_1)

{
  uint uVar1;
  HMENU pHVar2;
  int iVar3;
  UINT uIDNewItem;
  UINT uIDItem;
  CHAR local_104 [260];
  
  uVar1 = GetMenuItemCount(param_1);
  if (uVar1 != 0) {
    uIDItem = 0;
    do {
      pHVar2 = GetSubMenu(param_1,uIDItem);
      if (pHVar2 == (HMENU)0x0) {
        iVar3 = GetMenuStringA(param_1,uIDItem,local_104,0x104,0x400);
        if ((iVar3 != 0) && (iVar3 = FUN_004045f0(local_104,0x104,"^*",3), iVar3 != 0)) {
          uIDNewItem = GetMenuItemID(param_1,uIDItem);
          ModifyMenuA(param_1,uIDItem,0x400,uIDNewItem,local_104);
        }
      }
      else {
        FUN_004046e0(pHVar2);
      }
      uIDItem = uIDItem + 1;
    } while (uIDItem < uVar1);
  }
  return;
}


