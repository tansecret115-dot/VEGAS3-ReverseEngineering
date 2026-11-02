/* Module: vegas30.exe
   Function: FUN_0055c740
   Address: 0055c740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0055c740(HWND param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  BOOL BVar3;
  int iVar4;
  HWND pHVar5;
  UINT UVar6;
  undefined4 uVar7;
  WPARAM WVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined *lParam;
  undefined4 uVar12;
  int iVar13;
  undefined1 local_208 [260];
  CHAR local_104 [260];
  
  piVar1 = (int *)GetWindowLongA(param_1,8);
  switch(*(undefined4 *)(param_2 + 8)) {
  case 0xfffffda1:
    FUN_0055c200(param_1,piVar1);
    return 0;
  case 0xfffffda2:
    SetWindowLongA(param_1,0,1);
    puVar11 = local_208;
    WVar8 = 0x104;
    UVar6 = 0x466;
    pHVar5 = GetParent(param_1);
    uVar2 = SendMessageA(pHVar5,UVar6,WVar8,(LPARAM)puVar11);
    if ((-1 < (int)uVar2) && (uVar2 < 0x104)) {
      puVar11 = local_208;
      pcVar9 = s_MRU_Folders_00645458;
      pHVar5 = GetDlgItem(param_1,1000);
      FUN_0055dc10(pHVar5,pcVar9,puVar11);
    }
    if (*(int *)(*piVar1 + 0x30) != 0) {
      pHVar5 = GetDlgItem(param_1,0x470);
      BVar3 = IsWindowEnabled(pHVar5);
      if (BVar3 != 0) {
        pHVar5 = GetDlgItem(param_1,0x438);
        GetWindowTextA(pHVar5,local_104,0x104);
        iVar13 = *piVar1;
        iVar4 = _SfTextToLongToken_8(local_104,0);
        *(int *)(iVar13 + 0x3c) = iVar4 + (1 - *(int *)(iVar13 + 0x34));
        return 0;
      }
    }
    *(undefined4 *)(*piVar1 + 0x3c) = 0;
    return 0;
  case 0xfffffda5:
    puVar11 = local_208;
    WVar8 = 0x104;
    UVar6 = 0x466;
    pHVar5 = GetParent(param_1);
    uVar2 = SendMessageA(pHVar5,UVar6,WVar8,(LPARAM)puVar11);
    if ((-1 < (int)uVar2) && (uVar2 < 0x104)) {
      pHVar5 = GetDlgItem(param_1,1000);
      WVar8 = SendMessageA(pHVar5,0x158,0,(LPARAM)local_208);
      SendMessageA(pHVar5,0x14e,WVar8,0);
    }
    if (DAT_00659520 != 0) {
      lParam = &DAT_0065941c;
      WVar8 = 0x480;
      UVar6 = 0x468;
      pHVar5 = GetParent(param_1);
      SendMessageA(pHVar5,UVar6,WVar8,(LPARAM)lParam);
      DAT_00659520 = 0;
      return 0;
    }
    break;
  case 0xfffffda6:
    FUN_0055c310(param_1);
    puVar11 = local_208;
    WVar8 = 0x104;
    UVar6 = 0x464;
    pHVar5 = GetParent(param_1);
    uVar2 = SendMessageA(pHVar5,UVar6,WVar8,(LPARAM)puVar11);
    if ((0 < (int)uVar2) && (uVar2 < 0x104)) {
      FUN_0055c9d0(param_1,local_208);
      return 0;
    }
    break;
  case 0xfffffda7:
    uVar12 = 0x8001;
    uVar10 = 0;
    uVar7 = 0;
    pHVar5 = GetParent(param_1);
    _SfWndCenter_16(pHVar5,uVar7,uVar10,uVar12);
    pHVar5 = GetDlgItem(param_1,0x46f);
    if (((piVar1 == (int *)0x0) || (*piVar1 == 0)) || (*(int *)(*piVar1 + 0x28) == 0)) {
      iVar13 = 0;
    }
    else {
      iVar13 = 1;
    }
    ShowWindow(pHVar5,iVar13);
    SendMessageA(pHVar5,0xf1,0,0);
    if (piVar1 != (int *)0x0) {
      piVar1[0xcb] = 1;
    }
  }
  return 0;
}


