/* Module: vidcap30.exe
   Function: FUN_00458da0
   Address: 00458da0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00458da0(HWND param_1,undefined4 param_2,uint param_3,int param_4)

{
  LONG LVar1;
  char *pcVar2;
  long lVar3;
  HWND pHVar4;
  LRESULT LVar5;
  int iVar6;
  undefined4 uVar7;
  UINT UVar8;
  char *pcVar9;
  WPARAM wParam;
  undefined *puVar10;
  uint uVar11;
  LPARAM LVar12;
  
  uVar7 = 0;
  LVar1 = GetWindowLongA(param_1,8);
  switch(param_2) {
  case 0x4e:
    if (*(int *)(param_4 + 8) == -0xcb) {
      *(undefined4 *)(LVar1 + 0x4a4) = 0;
      return 0;
    }
    if (*(int *)(param_4 + 8) == -0xca) {
      *(undefined4 *)(LVar1 + 0x49c) = 1;
      FUN_00459270(param_1,LVar1);
      iVar6 = (**(code **)(LVar1 + 0x24))(LVar1);
      SetWindowLongA(param_1,0,(uint)(iVar6 == 0));
      return 1;
    }
    break;
  case 0x53:
    uVar7 = 0;
    puVar10 = &DAT_005b60a0;
    iVar6 = GetDlgCtrlID(*(HWND *)(param_4 + 0xc));
    FUN_0041f690(0,param_1,0,iVar6,puVar10,uVar7);
    uVar7 = 1;
    break;
  case 0x110:
    iVar6 = FUN_00459030(param_1,param_4);
    *(undefined4 *)(iVar6 + 0x4b0) = 1;
    FUN_00459080(param_1,iVar6);
    *(undefined4 *)(iVar6 + 0x4b0) = 0;
    return 0;
  case 0x111:
    if ((param_3 & 0xffff) == 0x9c57) {
      LVar12 = 0;
      wParam = 0;
      UVar8 = 0xf0;
      pHVar4 = GetDlgItem(param_1,0x9c57);
      LVar5 = SendMessageA(pHVar4,UVar8,wParam,LVar12);
      *(LRESULT *)(LVar1 + 0x4b4) = LVar5;
      return 0;
    }
    if ((param_3 & 0xffff) == 0x9c6f) {
      pcVar9 = (char *)(LVar1 + 0x388);
      uVar11 = 0x104;
      pcVar2 = (char *)_SfGetString_8(DAT_005ba2a0,0xc525);
      lVar3 = SfSelectDirectoryDlg(param_1,pcVar2,pcVar9,uVar11);
      if (lVar3 < 0) goto LAB_00458e65;
      FUN_00459080(param_1,LVar1);
    }
    else {
      param_3 = param_3 >> 0x10;
      if ((param_3 != 1) && (param_3 != 5)) {
        if (param_3 != 0x300) {
          return 0;
        }
        if (*(int *)(LVar1 + 0x4b0) != 0) {
          return 0;
        }
      }
      if (*(int *)(LVar1 + 0x498) != 0) goto LAB_00458e65;
    }
    LVar12 = 0;
    UVar8 = 0x468;
    pHVar4 = GetParent(param_1);
    SendMessageA(pHVar4,UVar8,(WPARAM)param_1,LVar12);
LAB_00458e65:
    *(undefined4 *)(LVar1 + 0x4a4) = 1;
    return 0;
  }
  return uVar7;
}


