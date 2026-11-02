/* Module: vegas30.exe
   Function: FUN_004ecbb0
   Address: 004ecbb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ecbb0(HWND param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  HMENU pHVar2;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  UINT_PTR uIDNewItem;
  tagMENUITEMINFOA *ptVar6;
  uint local_144;
  int local_140;
  tagMENUITEMINFOA local_13c [6];
  
  iVar1 = 0;
  if ((DAT_00647afc != 0) && (*param_3 != 0)) {
    local_144 = 0;
    iVar1 = FUN_004ecb50(param_2,&local_144,param_3);
    if (-1 < iVar1) {
      local_140 = iVar1;
      iVar1 = FUN_004ec9b0();
      pHVar2 = GetMenu(param_1);
      pHVar2 = GetSubMenu(pHVar2,iVar1);
      memmove((void *)(param_3[1] + local_144 * 0x108),
              (void *)((local_144 + 1) * 0x108 + param_3[1]),
              *param_3 * 0x108 + (local_144 + 1) * -0x108);
      uVar5 = local_144;
      if (local_144 < *param_3) {
        do {
          DeleteMenu(pHVar2,uVar5 + 0x9cb6,0);
          uVar5 = uVar5 + 1;
        } while (uVar5 < *param_3);
      }
      uVar5 = *param_3;
      *param_3 = uVar5 - 1;
      if (local_144 < uVar5 - 1) {
        iVar1 = local_144 * 0x108;
        uIDNewItem = local_144 + 0x9cb6;
        do {
          FUN_004ec910(uIDNewItem - 0x9cb5,iVar1 + 4 + param_3[1],&local_13c[0].hbmpItem,0x10e);
          AppendMenuA(pHVar2,0,uIDNewItem,(LPCSTR)&local_13c[0].hbmpItem);
          iVar1 = iVar1 + 0x108;
          uVar5 = uIDNewItem - 0x9cb5;
          uIDNewItem = uIDNewItem + 1;
        } while (uVar5 < *param_3);
      }
      iVar1 = local_140;
      ptVar6 = local_13c;
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        ptVar6->cbSize = 0;
        ptVar6 = (tagMENUITEMINFOA *)&ptVar6->fMask;
      }
      local_13c[0].cbSize = 0x2c;
      local_13c[0].fMask = 0x10;
      iVar4 = GetMenuItemCount(pHVar2);
      BVar3 = GetMenuItemInfoA(pHVar2,iVar4 - 1U,1,local_13c);
      if ((BVar3 != 0) && (local_13c[0].fType == 0x800)) {
        DeleteMenu(pHVar2,iVar4 - 1U,0x400);
      }
    }
  }
  return iVar1;
}


