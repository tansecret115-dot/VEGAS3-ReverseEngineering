/* Module: vegas30.exe
   Function: FUN_0041e280
   Address: 0041e280
   Source: Ghidra pseudocode (Stage 10 batch) */


HMENU FUN_0041e280(int param_1,int param_2,int param_3)

{
  HMENU hMenu;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *unaff_EBX;
  MENUITEMINFOA *pMVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  bool bVar8;
  bool bVar9;
  int unaff_retaddr;
  int *piVar10;
  HBITMAP *ppHVar11;
  HBITMAP *ppHVar12;
  HBITMAP local_148 [2];
  MENUITEMINFOA local_140 [6];
  
  hMenu = (HMENU)FUN_004047d0();
  if (hMenu == (HMENU)0x0) {
    return (HMENU)0x0;
  }
  ppHVar11 = *(HBITMAP **)(param_1 + 0x90);
  CheckMenuItem(hMenu,0xa1c1,-(uint)(param_3 != 0) & 8);
  iVar1 = FUN_00418e90();
  EnableMenuItem(hMenu,0xa1c2,(uint)(param_2 < 1));
  EnableMenuItem(hMenu,0xa1c3,(uint)(iVar1 + -1 <= param_2));
  iVar1 = 0;
  pMVar5 = local_140;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    pMVar5->cbSize = 0;
    pMVar5 = (MENUITEMINFOA *)&pMVar5->fMask;
  }
  local_140[0].cbSize = 0x2c;
  local_140[0].fMask = 0x13;
  local_140[0].fType = 0x800;
  local_140[0].dwTypeData = (LPSTR)0x0;
  local_140[0].wID = 0;
  local_140[0].fState = 0;
  InsertMenuItemA(hMenu,0xffffffff,1,local_140);
  ppHVar12 = local_148;
  local_148[0] = (HBITMAP)0x0;
  iVar3 = (*(code *)(*ppHVar11)[0x2e].unused)();
  if ((-1 < iVar3) && (unaff_EBX != (int *)0x0)) {
    piVar10 = (int *)&stack0xfffffeac;
    (**(code **)(*unaff_EBX + 0xc))(unaff_EBX);
    while (ppHVar11 != (HBITMAP *)0x0) {
      (*(code *)(*ppHVar11)[5].unused)(ppHVar11,&local_140[0].hSubMenu);
      iVar3 = _SfPlugIn_FindNode_8(DAT_0064b468,&local_140[0].fState);
      if (iVar3 != 0) {
        ppHVar11 = &local_140[0].hbmpUnchecked;
        _mbscpy((uchar *)&local_140[0].hbmpUnchecked,(uchar *)(iVar3 + 0x20));
        uVar2 = lstrlenA((LPCSTR)&local_140[0].hbmpUnchecked);
        if (0xe < uVar2) {
          iVar4 = 0xe;
          bVar8 = false;
          iVar3 = 0;
          bVar9 = true;
          ppHVar12 = &local_140[0].hbmpUnchecked;
          pbVar6 = (byte *)"Sonic Foundry ";
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            bVar8 = *(byte *)ppHVar12 < *pbVar6;
            bVar9 = *(byte *)ppHVar12 == *pbVar6;
            ppHVar12 = (HBITMAP *)((int)ppHVar12 + 1);
            pbVar6 = pbVar6 + 1;
          } while (bVar9);
          if (!bVar9) {
            iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          }
          if (iVar3 == 0) {
            ppHVar11 = (HBITMAP *)((int)&local_140[0].cch + 2);
          }
        }
        puVar7 = (undefined4 *)&stack0xfffffea0;
        for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        ppHVar12 = (HBITMAP *)0x2c;
        local_140[0].fType = 0x40;
        local_140[0].fMask = (UINT)ppHVar11;
        InsertMenuItemA(hMenu,0xffffffff,1,(LPCMENUITEMINFOA)&stack0xfffffea0);
        iVar1 = iVar1 + 1;
      }
      (**(code **)(*piVar10 + 8))(piVar10);
      (**(code **)(*piVar10 + 0xc))(piVar10,1,&stack0xfffffe90,0);
    }
    (*(code *)(*ppHVar12)[2].unused)(ppHVar12);
  }
  CheckMenuRadioItem(hMenu,1,iVar1 + 0x206b,unaff_retaddr + 0x206c,0);
  return hMenu;
}


