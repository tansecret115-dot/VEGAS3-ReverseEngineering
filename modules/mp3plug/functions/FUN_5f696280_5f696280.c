/* Module: mp3plug.dll
   Function: FUN_5f696280
   Address: 5f696280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f696280(void *this,HWND param_1,uint param_2,uint param_3,HWND param_4)

{
  HWND pHVar1;
  int iVar2;
  LRESULT LVar3;
  UINT UVar4;
  HWND pHVar5;
  uint uVar6;
  WPARAM wParam;
  LPARAM lParam;
  CHAR local_20 [32];
  
  pHVar5 = param_4;
  pHVar1 = param_1;
  iVar2 = *(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e);
  if (param_2 < 0x54) {
    if (param_2 == 0x53) {
      FUN_5f688010(param_1,(int)param_4,(int *)&DAT_5f72d148);
      return 1;
    }
    if (param_2 != 2) {
      if (param_2 == 0x18) {
        if (param_3 != 0) {
          FUN_5f696140(this,param_1);
          return 0;
        }
      }
      else if ((param_2 == 0x2b) && (param_3 == 0x424)) {
        FUN_5f685a00(param_1,(int)param_4);
        return 1;
      }
      return 0;
    }
    FUN_5f697160();
    pHVar1 = GetDlgItem(param_1,0x408);
    FUN_5f695f80(pHVar1);
    *(undefined4 *)((int)this + 0x10) = 0;
    return 0;
  }
  if (param_2 == 0x110) {
    FUN_5f685280(param_1);
    return 1;
  }
  if (param_2 == 0x111) {
    if (iVar2 == 0) {
      return 0;
    }
    switch(param_3 & 0xffff) {
    case 0x408:
    case 0x411:
    case 0x412:
    case 0x413:
      goto switchD_5f6964a8_caseD_408;
    default:
      return 0;
    case 0x425:
      if ((DAT_5f74d324 == 0) && (DAT_5f74d328 == 0)) {
        return 0;
      }
      FUN_5f68d0f0(&param_4,param_1,(int *)&param_3,(int *)&param_1);
      FUN_5f685280(pHVar1);
      return 0;
    case 0x426:
      FUN_5f696140(this,param_1);
      FUN_5f695a60(this,pHVar1);
      *(undefined4 *)((int)this + 0x24) = 1;
      return 0;
    case 0x444:
      UVar4 = IsDlgButtonChecked(param_1,0x444);
      uVar6 = (uint)(UVar4 == 0);
      pHVar5 = GetDlgItem(pHVar1,0x408);
      EnableWindow(pHVar5,uVar6);
      UVar4 = IsDlgButtonChecked(pHVar1,0x444);
      pHVar5 = GetDlgItem(pHVar1,0x429);
      EnableWindow(pHVar5,UVar4);
      UVar4 = IsDlgButtonChecked(pHVar1,0x444);
      pHVar5 = GetDlgItem(pHVar1,0x447);
      EnableWindow(pHVar5,UVar4);
      if ((*(int *)(iVar2 + 0x34) == 0) && (UVar4 = IsDlgButtonChecked(pHVar1,0x444), UVar4 != 0)) {
        lParam = 0x32;
        wParam = 1;
        UVar4 = 0x405;
        *(undefined4 *)(iVar2 + 0x34) = 0x32;
        pHVar5 = GetDlgItem(pHVar1,0x429);
        SendMessageA(pHVar5,UVar4,wParam,lParam);
        wsprintfA(local_20,"%d",*(undefined4 *)(iVar2 + 0x34));
        SetDlgItemTextA(pHVar1,0x447,local_20);
      }
      *(undefined4 *)((int)this + 0x24) = 1;
      return 0;
    }
  }
  if (param_2 != 0x114) {
    return 0;
  }
  uVar6 = param_3 & 0xffff;
  iVar2 = GetDlgCtrlID(param_4);
  if (iVar2 != 0x428) {
    if (iVar2 != 0x429) {
      return 0;
    }
    if (5 < uVar6) {
      return 0;
    }
    LVar3 = SendMessageA(pHVar5,0x400,0,0);
    wsprintfA(local_20,"%d",LVar3);
    SetDlgItemTextA(param_1,0x447,local_20);
switchD_5f6964a8_caseD_408:
    *(undefined4 *)((int)this + 0x24) = 1;
    return 0;
  }
  if (5 < uVar6) {
    return 0;
  }
  LVar3 = SendMessageA(pHVar5,0x400,0,0);
  if (LVar3 == 0) {
    uVar6 = 0xab;
  }
  else if (LVar3 == 1) {
    uVar6 = 0xac;
  }
  else {
    if (LVar3 != 2) goto LAB_5f696458;
    uVar6 = 0xad;
  }
  FUN_5f69dd80(DAT_5f74d2f4,uVar6,local_20,0x20);
LAB_5f696458:
  SetDlgItemTextA(param_1,0x446,local_20);
  *(undefined4 *)((int)this + 0x24) = 1;
  return 0;
}


