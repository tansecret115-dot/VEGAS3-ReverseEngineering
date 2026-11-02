/* Module: vidcap30.exe
   Function: FUN_00417cb0
   Address: 00417cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00417cb0(HWND param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  HMENU pHVar2;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  UINT_PTR uIDNewItem;
  tagMENUITEMINFOA *ptVar8;
  uint local_144;
  HMENU local_140;
  tagMENUITEMINFOA local_13c [6];
  
  if (DAT_005ba990 == 0) {
    return 0;
  }
  if (*param_3 != 0) {
    iVar1 = FUN_00417c60(param_2,&local_144,param_3);
    if (-1 < iVar1) {
      iVar1 = FUN_00417ab0(param_1);
      pHVar2 = GetMenu(param_1);
      local_140 = GetSubMenu(pHVar2,iVar1);
      uVar5 = local_144;
      if (local_144 < *param_3 - 1) {
        iVar1 = local_144 * 0x108;
        do {
          puVar6 = (undefined4 *)(iVar1 + 0x108 + param_3[1]);
          puVar7 = (undefined4 *)(iVar1 + param_3[1]);
          for (iVar4 = 0x42; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          DeleteMenu(local_140,uVar5 + 0x41c,0);
          uVar5 = uVar5 + 1;
          iVar1 = iVar1 + 0x108;
        } while (uVar5 < *param_3 - 1);
      }
      pHVar2 = local_140;
      DeleteMenu(local_140,uVar5 + 0x41c,0);
      uVar5 = *param_3;
      *param_3 = uVar5 - 1;
      if (local_144 < uVar5 - 1) {
        iVar1 = local_144 * 0x108;
        uIDNewItem = local_144 + 0x41c;
        do {
          FUN_00417a10(uIDNewItem - 0x41b,param_3[1] + 4 + iVar1,&local_13c[0].hbmpItem,0x10e);
          AppendMenuA(pHVar2,0,uIDNewItem,(LPCSTR)&local_13c[0].hbmpItem);
          iVar1 = iVar1 + 0x108;
          uVar5 = uIDNewItem - 0x41b;
          uIDNewItem = uIDNewItem + 1;
        } while (uVar5 < *param_3);
      }
      ptVar8 = local_13c;
      for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
        ptVar8->cbSize = 0;
        ptVar8 = (tagMENUITEMINFOA *)&ptVar8->fMask;
      }
      local_13c[0].cbSize = 0x2c;
      local_13c[0].fMask = 0x10;
      iVar1 = GetMenuItemCount(pHVar2);
      BVar3 = GetMenuItemInfoA(pHVar2,iVar1 - 1U,1,local_13c);
      if ((BVar3 != 0) && (local_13c[0].fType == 0x800)) {
        DeleteMenu(pHVar2,iVar1 - 1U,0x400);
      }
      iVar1 = 0;
    }
    return iVar1;
  }
  return 0;
}


