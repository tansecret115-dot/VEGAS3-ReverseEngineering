/* Module: vegas30k.dll
   Function: FUN_011312d0
   Address: 011312d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011312d0(HWND param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  LRESULT lParam;
  int iVar2;
  WPARAM wParam;
  LPARAM lParam_00;
  undefined1 local_208 [520];
  
  bVar1 = true;
  if (param_2 == -0x10000) {
    wParam = 0;
    lParam_00 = 0;
  }
  else {
    wParam = 4;
    lParam_00 = param_2;
  }
  lParam = SendMessageA(param_1,0x110a,wParam,lParam_00);
  do {
    iVar2 = FUN_0112f6d0(param_1,lParam);
    if (iVar2 != 0) {
      bVar1 = false;
      FUN_011312d0(param_1,lParam,param_3);
    }
    lParam = SendMessageA(param_1,0x110a,1,lParam);
  } while (lParam != 0);
  if ((bVar1) && (param_2 != -0x10000)) {
    iVar2 = FUN_0112f6d0(param_1,param_2);
    if (iVar2 != 0) {
      iVar2 = FUN_0112fff0(param_1,param_2,local_208);
      _SfList_AllocAndInsertItem_20(param_3,local_208,iVar2 + 1,0xffffffff,0);
    }
  }
  return;
}


