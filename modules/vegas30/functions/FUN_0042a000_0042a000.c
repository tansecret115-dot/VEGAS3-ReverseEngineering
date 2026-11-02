/* Module: vegas30.exe
   Function: FUN_0042a000
   Address: 0042a000
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042a000(HWND param_1,undefined4 *param_2)

{
  HWND pHVar1;
  UINT UVar2;
  undefined4 uVar3;
  WPARAM WVar4;
  undefined4 uVar5;
  LPARAM LVar6;
  undefined4 uVar7;
  
  FUN_0043df40(param_1);
  FUN_00429ef0(param_1,*param_2);
  LVar6 = 0;
  WVar4 = 0;
  UVar2 = 0x60e;
  pHVar1 = GetDlgItem(param_1,0xe1a);
  SendMessageA(pHVar1,UVar2,WVar4,LVar6);
  LVar6 = 3;
  WVar4 = 0;
  UVar2 = 0x60f;
  pHVar1 = GetDlgItem(param_1,0xe1a);
  SendMessageA(pHVar1,UVar2,WVar4,LVar6);
  if (param_2[4] != 0) {
    uVar7 = 0x8001;
    uVar5 = 0;
    uVar3 = 0;
    pHVar1 = GetParent(param_1);
    _SfWndCenter_16(pHVar1,uVar3,uVar5,uVar7);
    param_2[4] = 0;
  }
  return;
}


