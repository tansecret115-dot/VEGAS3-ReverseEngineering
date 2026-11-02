/* Module: sftrans1.dll
   Function: FUN_004beb60
   Address: 004beb60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004beb60(uint *param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5)

{
  HWND pHVar1;
  HWND pHVar2;
  uint wParam;
  UINT UVar3;
  uint lParam;
  LPARAM lParam_00;
  
  if ((param_4 != 5) && (param_4 != 4)) {
    param_5 = 0;
  }
  pHVar1 = (HWND)param_1[1];
  if (param_1[7] == 0) {
    if (pHVar1 == (HWND)0x0) {
      pHVar1 = GetParent((HWND)param_1[0xe]);
    }
    lParam = param_1[0xe];
    wParam = param_5 << 0x10 | param_4 & 0xffff;
    UVar3 = 0x114;
  }
  else {
    if (pHVar1 == (HWND)0x0) {
      pHVar1 = GetParent((HWND)param_1[0xe]);
    }
    lParam = param_1[0xe];
    wParam = param_5 << 0x10 | param_4 & 0xffff;
    UVar3 = 0x115;
  }
  SendMessageA(pHVar1,UVar3,wParam,lParam);
  if (((param_4 == 9) && (param_1[2] != 0)) && ((*param_1 & 0x4000) != 0)) {
    pHVar1 = (HWND)param_1[2];
    pHVar2 = GetFocus();
    if (pHVar2 != pHVar1) {
      lParam_00 = 1;
      UVar3 = 0x28;
      pHVar2 = GetParent(pHVar1);
      SendMessageA(pHVar2,UVar3,(WPARAM)pHVar1,lParam_00);
    }
  }
  return;
}


