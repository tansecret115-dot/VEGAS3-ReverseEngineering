/* Module: sfcdi.dll
   Function: FUN_5bf1d630
   Address: 5bf1d630
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf1d630(HWND param_1,int param_2)

{
  int iVar1;
  HWND pHVar2;
  UINT UVar3;
  HWND pHVar4;
  WPARAM WVar5;
  char *pcVar6;
  int *piVar7;
  CHAR *pCVar8;
  int lParam;
  uint uVar9;
  CHAR local_104 [260];
  
  iVar1 = *(int *)(*(int *)(param_2 + 0xc) + 0x40);
  switch(*(undefined4 *)(param_2 + 8)) {
  case 0xfffffda2:
    SetWindowLongA(param_1,0,1);
    pCVar8 = local_104;
    WVar5 = 0x104;
    UVar3 = 0x466;
    pHVar2 = GetParent(param_1);
    uVar9 = SendMessageA(pHVar2,UVar3,WVar5,(LPARAM)pCVar8);
    if ((-1 < (int)uVar9) && (uVar9 < 0x104)) {
      pCVar8 = local_104;
      pcVar6 = s_MRU_Folders_5bf64f08;
      pHVar2 = GetDlgItem(param_1,0x161);
      FUN_5bf1d530(pHVar2,pcVar6,pCVar8);
      return 0;
    }
    break;
  case 0xfffffda3:
    return 1;
  case 0xfffffda5:
    pCVar8 = local_104;
    WVar5 = 0x104;
    UVar3 = 0x466;
    pHVar2 = GetParent(param_1);
    uVar9 = SendMessageA(pHVar2,UVar3,WVar5,(LPARAM)pCVar8);
    if ((uVar9 < 0x105) && (-1 < (int)uVar9)) {
      pHVar2 = GetDlgItem(param_1,0x161);
      WVar5 = SendMessageA(pHVar2,0x158,0,(LPARAM)local_104);
      SendMessageA(pHVar2,0x14e,WVar5,0);
    }
    if (*(int *)(iVar1 + 4) != 0) {
      lParam = iVar1 + 8;
      WVar5 = 0x480;
      UVar3 = 0x468;
      pHVar2 = GetParent(param_1);
      SendMessageA(pHVar2,UVar3,WVar5,lParam);
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
  }
  return 0;
}


