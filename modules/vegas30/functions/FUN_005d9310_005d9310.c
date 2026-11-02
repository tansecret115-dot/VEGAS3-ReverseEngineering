/* Module: vegas30.exe
   Function: FUN_005d9310
   Address: 005d9310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d9310(HWND param_1,uint param_2,uint param_3,int param_4)

{
  LONG LVar1;
  HWND pHVar2;
  int iVar3;
  uint uVar4;
  LRESULT LVar5;
  undefined4 uVar6;
  UINT UVar7;
  WPARAM WVar8;
  LPARAM LVar9;
  
  uVar6 = 0;
  LVar1 = GetWindowLongA(param_1,8);
  if (param_2 < 0x111) {
    if (param_2 == 0x110) {
      iVar3 = FUN_005d4870(param_1,param_4);
      *(undefined4 *)(iVar3 + 0xd58) = 1;
      FUN_005d88c0(param_1,param_4);
      *(undefined4 *)(iVar3 + 0xd58) = 0;
      return 1;
    }
    if (param_2 != 2) {
      if (param_2 == 0x4e) {
        iVar3 = *(int *)(param_4 + 8);
        if (iVar3 == -0xcb) {
          *(undefined4 *)(LVar1 + 0xd4c) = 0;
          return 0;
        }
        if (iVar3 != -0xca) {
          if (iVar3 != -200) {
            return 0;
          }
          WVar8 = *(WPARAM *)(LVar1 + 0xd5c);
          LVar9 = 0;
          UVar7 = 0xf1;
          pHVar2 = GetDlgItem(param_1,1000);
          SendMessageA(pHVar2,UVar7,WVar8,LVar9);
          return 0;
        }
        *(undefined4 *)(LVar1 + 0xd40) = 1;
        FUN_005d9110(param_1,LVar1);
        (**(code **)(LVar1 + 0x22c))(LVar1);
        SetWindowLongA(param_1,0,0);
        return 1;
      }
      if (param_2 != 0x53) {
        return 0;
      }
      _SfHelp_ContextPopupHelp_24(0,param_1,0,*(undefined4 *)(param_4 + 8),&DAT_00646808,0);
    }
switchD_005d9473_caseD_3e9:
    uVar6 = 1;
  }
  else {
    if (param_2 != 0x111) {
      if (param_2 != 0x115) {
        return 0;
      }
      FUN_005d9290(param_3,param_4,param_1,LVar1);
      return 0;
    }
    uVar4 = param_3 >> 0x10;
    switch(param_3 & 0xffff) {
    case 1000:
      LVar9 = 0;
      WVar8 = 0;
      UVar7 = 0xf0;
      pHVar2 = GetDlgItem(param_1,1000);
      LVar5 = SendMessageA(pHVar2,UVar7,WVar8,LVar9);
      *(LRESULT *)(LVar1 + 0xd5c) = LVar5;
      if (*(int *)(LVar1 + 0xd30) == 0) {
        LVar9 = 0;
        UVar7 = 0x468;
        pHVar2 = GetParent(param_1);
        SendMessageA(pHVar2,UVar7,(WPARAM)param_1,LVar9);
      }
      *(undefined4 *)(LVar1 + 0xd4c) = 1;
      return 0;
    default:
      goto switchD_005d9473_caseD_3e9;
    case 0x434:
      if (uVar4 == 1) {
        FUN_005d8d80(param_1,LVar1);
        return 0;
      }
      break;
    case 0x435:
      if (uVar4 == 1) {
        FUN_005d9080(param_1,LVar1);
        FUN_005d8840(param_1,LVar1);
        return 0;
      }
      break;
    case 0x438:
      uVar6 = FUN_005d8c80(param_1,LVar1,uVar4);
      FUN_005d8840(param_1,LVar1);
      return uVar6;
    case 0x471:
      uVar6 = FUN_005d8e10(param_1,LVar1,uVar4);
      return uVar6;
    case 0x47a:
      FUN_005d8f60(param_1,LVar1,uVar4);
      return 0;
    }
  }
  return uVar6;
}


