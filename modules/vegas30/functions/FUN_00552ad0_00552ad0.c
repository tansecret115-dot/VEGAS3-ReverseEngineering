/* Module: vegas30.exe
   Function: FUN_00552ad0
   Address: 00552ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00552ad0(HWND param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  HWND pHVar1;
  LRESULT LVar2;
  LRESULT LVar3;
  undefined4 uVar4;
  UINT UVar5;
  WPARAM WVar6;
  LPARAM LVar7;
  
  uVar4 = 0;
  switch(param_3) {
  default:
    uVar4 = 1;
    break;
  case 0x46e:
    if (param_5 == 1) {
      uVar4 = FUN_00552820(param_1,param_2);
      return uVar4;
    }
    break;
  case 0x48b:
    FUN_00552840(param_1,param_2);
    return 0;
  case 0x48c:
    FUN_00552a20(param_1,param_2);
  case 1099:
    LVar7 = 0;
    WVar6 = 0;
    UVar5 = 0x188;
    pHVar1 = GetDlgItem(param_1,0x46e);
    WVar6 = SendMessageA(pHVar1,UVar5,WVar6,LVar7);
    if (WVar6 != 0xffffffff) {
      LVar7 = 0;
      UVar5 = 0x199;
      pHVar1 = GetDlgItem(param_1,0x46e);
      LVar2 = SendMessageA(pHVar1,UVar5,WVar6,LVar7);
      if (LVar2 != 0) {
        LVar7 = 0;
        WVar6 = 0;
        UVar5 = 0xf0;
        pHVar1 = GetDlgItem(param_1,1099);
        LVar3 = SendMessageA(pHVar1,UVar5,WVar6,LVar7);
        LVar7 = 0;
        UVar5 = 0x468;
        *(uint *)(LVar2 + 0x2c) = (uint)(LVar3 == 1);
        pHVar1 = GetParent(param_1);
        SendMessageA(pHVar1,UVar5,(WPARAM)param_1,LVar7);
        *(undefined4 *)(param_2 + 8) = 1;
        return 1;
      }
    }
    return 0;
  }
  return uVar4;
}


