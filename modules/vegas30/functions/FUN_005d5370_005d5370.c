/* Module: vegas30.exe
   Function: FUN_005d5370
   Address: 005d5370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d5370(HWND param_1,undefined4 param_2,uint param_3,HWND param_4)

{
  LONG LVar1;
  HWND pHVar2;
  uint nResult;
  undefined4 uVar3;
  
  uVar3 = 0;
  LVar1 = GetWindowLongA(param_1,8);
  switch(param_2) {
  case 0x53:
    _SfHelp_ContextPopupHelp_24(0,param_1,0,param_4[2].unused,&DAT_006468c8,0);
    uVar3 = 1;
    break;
  case 0x110:
    SetWindowLongA(param_1,8,(LONG)param_4);
    _SfWndCenter_16(param_1,0,0,0x8001);
    param_4[1].unused = 1;
    FUN_005d5850(param_1,param_4);
    param_4[1].unused = 0;
    return 0;
  case 0x111:
    nResult = param_3 & 0xffff;
    param_3 = param_3 >> 0x10;
    if (nResult < 0x4b2) {
      if (nResult == 0x4b1) {
        uVar3 = FUN_005d55a0(param_1,param_4,LVar1,param_3);
        return uVar3;
      }
      if (nResult != 0) {
        if (nResult < 3) {
          EndDialog(param_1,nResult);
          return 1;
        }
        if (nResult == 0x434) {
          uVar3 = FUN_005d5680(param_1,param_4,LVar1,param_3);
          return uVar3;
        }
      }
    }
    else if (nResult == 0x4b2) {
      uVar3 = FUN_005d55d0(param_1,param_4,LVar1,param_3);
      return uVar3;
    }
    break;
  case 0x115:
    pHVar2 = GetDlgItem(param_1,0x503);
    if (param_4 == pHVar2) {
      pHVar2 = GetDlgItem(param_1,0x4b2);
      uVar3 = FUN_005d5710(LVar1,pHVar2,param_3,param_4);
      return uVar3;
    }
  }
  return uVar3;
}


