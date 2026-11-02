/* Module: sfcdi.dll
   Function: FUN_5bf1d8d0
   Address: 5bf1d8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf1d8d0(HWND param_1,int param_2)

{
  int iVar1;
  HWND pHVar2;
  UINT UVar3;
  HWND pHVar4;
  WPARAM WVar5;
  char *pcVar6;
  int *piVar7;
  CHAR *pCVar8;
  uint uVar9;
  int iVar10;
  char local_21c [20];
  CHAR local_208 [260];
  CHAR local_104 [260];
  
  iVar1 = *(int *)(*(int *)(param_2 + 0xc) + 0x40);
  switch(*(undefined4 *)(param_2 + 8)) {
  case 0xfffffda1:
    iVar1 = 0x470;
    pHVar2 = GetParent(param_1);
    pHVar2 = GetDlgItem(pHVar2,iVar1);
    SfOpenFile_GetExtensionFromComboBoxType(local_21c,pHVar2);
    pCVar8 = local_104;
    iVar10 = 0x104;
    iVar1 = 0x480;
    pHVar2 = GetParent(param_1);
    GetDlgItemTextA(pHVar2,iVar1,pCVar8,iVar10);
    SfChangeOutputName(local_104,local_21c);
    pCVar8 = local_104;
    iVar1 = 0x480;
    pHVar2 = GetParent(param_1);
    SetDlgItemTextA(pHVar2,iVar1,pCVar8);
    break;
  case 0xfffffda2:
    iVar1 = FUN_5bf2fcb0();
    if (iVar1 == 0) {
      pCVar8 = local_208;
      WVar5 = 0x104;
      UVar3 = 0x466;
      pHVar2 = GetParent(param_1);
      uVar9 = SendMessageA(pHVar2,UVar3,WVar5,(LPARAM)pCVar8);
      if ((-1 < (int)uVar9) && (uVar9 < 0x104)) {
        pCVar8 = local_208;
        pcVar6 = s_MRU_Folders_5bf64f08;
        pHVar2 = GetDlgItem(param_1,0x161);
        FUN_5bf1d530(pHVar2,pcVar6,pCVar8);
      }
      SetWindowLongA(param_1,0,1);
      return 0;
    }
    SetWindowLongA(param_1,0,1);
  case 0xfffffda3:
    return 1;
  case 0xfffffda5:
    pCVar8 = local_208;
    WVar5 = 0x104;
    UVar3 = 0x466;
    pHVar2 = GetParent(param_1);
    uVar9 = SendMessageA(pHVar2,UVar3,WVar5,(LPARAM)pCVar8);
    if ((-1 < (int)uVar9) && (uVar9 < 0x104)) {
      pHVar2 = GetDlgItem(param_1,0x161);
      WVar5 = SendMessageA(pHVar2,0x158,0,(LPARAM)local_208);
      SendMessageA(pHVar2,0x14e,WVar5,0);
    }
    if (*(int *)(iVar1 + 4) != 0) {
      iVar10 = iVar1 + 8;
      WVar5 = 0x480;
      UVar3 = 0x468;
      pHVar2 = GetParent(param_1);
      SendMessageA(pHVar2,UVar3,WVar5,iVar10);
      *(undefined4 *)(iVar1 + 4) = 0;
      return 0;
    }
    break;
  case 0xfffffda7:
    uVar9 = 0x8001;
    piVar7 = (int *)0x0;
    pHVar4 = (HWND)0x0;
    pHVar2 = GetParent(param_1);
    FUN_5bf2fd50(pHVar2,pHVar4,piVar7,uVar9);
    return 0;
  }
  return 0;
}


