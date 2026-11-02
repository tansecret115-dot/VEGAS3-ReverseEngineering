/* Module: vegas30.exe
   Function: FUN_00582340
   Address: 00582340
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00582340(HMENU param_1)

{
  int iVar1;
  BOOL BVar2;
  HMENU pHVar3;
  int iVar4;
  UINT item;
  tagMENUITEMINFOA *ptVar5;
  bool bVar6;
  tagMENUITEMINFOA local_130 [6];
  
  iVar1 = GetMenuItemCount(param_1);
  item = 0;
  if (0 < iVar1) {
    do {
      ptVar5 = local_130;
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        ptVar5->cbSize = 0;
        ptVar5 = (tagMENUITEMINFOA *)&ptVar5->fMask;
      }
      local_130[0].dwTypeData = (LPSTR)&local_130[0].hbmpItem;
      local_130[0].cbSize = 0x2c;
      local_130[0].fMask = 0x16;
      local_130[0].cch = 0x104;
      BVar2 = GetMenuItemInfoA(param_1,item,1,local_130);
      if (BVar2 != 0) {
        bVar6 = local_130[0].hSubMenu != (HMENU)0x0;
        if (local_130[0].fType == 0) {
          pHVar3 = local_130[0].hSubMenu;
          if (!bVar6) {
            pHVar3 = (HMENU)local_130[0].wID;
          }
          ModifyMenuA(param_1,item,(uint)CONCAT11(4,-bVar6 & 0x10),(UINT_PTR)pHVar3,
                      local_130[0].dwTypeData);
        }
        else if ((local_130[0].fType & 0x800) != 0) {
          pHVar3 = local_130[0].hSubMenu;
          if (!bVar6) {
            pHVar3 = (HMENU)local_130[0].wID;
          }
          ModifyMenuA(param_1,item,(uint)CONCAT11(4,(char)(-(uint)bVar6 & 0x10)),(UINT_PTR)pHVar3,
                      "SF");
          pHVar3 = local_130[0].hSubMenu;
          if (!bVar6) {
            pHVar3 = (HMENU)local_130[0].wID;
          }
          ModifyMenuA(param_1,item,-(uint)bVar6 & 0x10 | 0xc00,(UINT_PTR)pHVar3,(LPCSTR)0x0);
        }
        if (bVar6) {
          FUN_00582340(local_130[0].hSubMenu);
        }
      }
      item = item + 1;
    } while ((int)item < iVar1);
  }
  return;
}


