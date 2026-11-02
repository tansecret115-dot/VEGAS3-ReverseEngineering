/* Module: vegas30.exe
   Function: FUN_005e4e20
   Address: 005e4e20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005e4e20(int *param_1,HWND param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  HWND pHVar2;
  UINT UVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  
  iVar1 = 0;
  piVar6 = param_1 + 0xc;
  if (param_3 < 0x111) {
    if (param_3 == 0x110) {
      param_1[4] = (int)param_2;
      FUN_005e5290();
      (**(code **)(*param_1 + 0x3c))(param_1);
      return 1;
    }
    if (param_3 == 2) {
      param_1[4] = 0;
      return iVar1;
    }
    if (param_3 == 0x53) {
      iVar1 = _SfHelp_ContextPopupHelp_24(0,param_2,0,*(undefined4 *)(param_5 + 8),&DAT_0062abb0,0);
      return iVar1;
    }
  }
  else {
    if (param_3 == 0x111) {
      uVar4 = param_4 >> 0x10;
      switch(param_4 & 0xffff) {
      case 0x434:
        iVar1 = FUN_005e5140(param_2,param_5,piVar6,uVar4);
        break;
      case 0x43c:
        iVar1 = FUN_005e5260(param_5,piVar6,uVar4);
        break;
      case 0x4b2:
        iVar1 = FUN_005e51c0(param_5,piVar6,uVar4);
        break;
      case 0x4b4:
        UVar3 = IsDlgButtonChecked((HWND)param_1[4],param_4 & 0xffff);
        param_1[0x17] = UVar3;
        iVar1 = 1;
      }
      iVar5 = param_1[9];
    }
    else {
      if (param_3 != 0x115) {
        return 0;
      }
      pHVar2 = GetDlgItem(param_2,0x4b2);
      iVar1 = FUN_005e5000(pHVar2,piVar6,param_4,param_5);
      iVar5 = param_1[9];
    }
    if ((iVar5 == 0) && (iVar1 == 0)) {
      param_1[9] = 0;
      return 0;
    }
    param_1[9] = 1;
  }
  return iVar1;
}


