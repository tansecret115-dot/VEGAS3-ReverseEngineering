/* Module: vegas30.exe
   Function: FUN_0041e020
   Address: 0041e020
   Source: Ghidra pseudocode (Stage 10 batch) */


HMENU FUN_0041e020(int param_1,int param_2,int param_3)

{
  int iVar1;
  HMENU hMenu;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  HBITMAP *ppHVar7;
  int *piVar8;
  byte *pbVar9;
  MENUITEMINFOA *pMVar10;
  bool bVar11;
  bool bVar12;
  HBITMAP *local_148;
  int local_140 [4];
  MENUITEMINFOA local_130;
  HBITMAP local_f6 [61];
  
  hMenu = (HMENU)FUN_004047d0(0x2f8,0);
  if (hMenu == (HMENU)0x0) {
    return (HMENU)0x0;
  }
  iVar1 = *(int *)(param_1 + 0x94);
  CheckMenuItem(hMenu,0xa1c1,-(uint)(param_3 != 0) & 8);
  iVar2 = FUN_005d1700(iVar1,param_2,1);
  EnableMenuItem(hMenu,0xa1c2,(uint)(iVar2 == 0));
  iVar2 = FUN_005d1700(iVar1,param_2,0);
  EnableMenuItem(hMenu,0xa1c3,(uint)(iVar2 == 0));
  iVar6 = 0;
  pMVar10 = &local_130;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    pMVar10->cbSize = 0;
    pMVar10 = (MENUITEMINFOA *)&pMVar10->fMask;
  }
  local_130.cbSize = 0x2c;
  local_130.fMask = 0x13;
  local_130.fType = 0x800;
  local_130.dwTypeData = (LPSTR)0x0;
  local_130.wID = 0;
  local_130.fState = 0;
  InsertMenuItemA(hMenu,0xffffffff,1,&local_130);
  do {
    if (DAT_0064a52c == 0) {
      piVar3 = *(int **)(iVar1 + 0x234);
      if (piVar3 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar3;
      }
      if ((iVar6 < 0) || (iVar2 + -1 < iVar6)) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(piVar3[2] + iVar6 * 4);
      }
      if (iVar2 == 0) {
LAB_0041e243:
        CheckMenuRadioItem(hMenu,1,iVar6 + 0x206b,param_2 + 0x206c,0);
        return hMenu;
      }
      piVar3 = (int *)(iVar2 + 0xc);
    }
    else {
      local_140[0] = DAT_0061a2b0;
      local_140[2] = DAT_0061a2b8;
      local_140[1] = DAT_0061a2b4;
      local_140[3] = DAT_0061a2bc;
      FUN_005d17f0(*(undefined4 *)(param_1 + 0x94),iVar6,local_140);
      iVar2 = 4;
      bVar11 = true;
      piVar3 = &DAT_0061a2b0;
      piVar8 = local_140;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar11 = *piVar3 == *piVar8;
        piVar3 = piVar3 + 1;
        piVar8 = piVar8 + 1;
      } while (bVar11);
      if (bVar11) goto LAB_0041e243;
      piVar3 = local_140;
    }
    iVar2 = _SfPlugIn_FindNode_8(DAT_0064b468,piVar3);
    if (iVar2 != 0) {
      local_148 = &local_130.hbmpItem;
      _mbscpy((uchar *)&local_130.hbmpItem,(uchar *)(iVar2 + 0x20));
      uVar4 = lstrlenA((LPCSTR)&local_130.hbmpItem);
      if (0xe < uVar4) {
        iVar5 = 0xe;
        bVar11 = false;
        iVar2 = 0;
        bVar12 = true;
        ppHVar7 = &local_130.hbmpItem;
        pbVar9 = (byte *)"Sonic Foundry ";
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar11 = *(byte *)ppHVar7 < *pbVar9;
          bVar12 = *(byte *)ppHVar7 == *pbVar9;
          ppHVar7 = (HBITMAP *)((int)ppHVar7 + 1);
          pbVar9 = pbVar9 + 1;
        } while (bVar12);
        if (!bVar12) {
          iVar2 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        }
        if (iVar2 == 0) {
          local_148 = local_f6;
        }
      }
      pMVar10 = &local_130;
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        pMVar10->cbSize = 0;
        pMVar10 = (MENUITEMINFOA *)&pMVar10->fMask;
      }
      local_130.wID = iVar6 + 0x206c;
      local_130.cbSize = 0x2c;
      local_130.fMask = 0x13;
      local_130.fType = 0x4000;
      local_130.dwTypeData = (LPSTR)local_148;
      local_130.cch = 0x40;
      local_130.fState = 0;
      InsertMenuItemA(hMenu,0xffffffff,1,&local_130);
    }
    iVar6 = iVar6 + 1;
  } while( true );
}


