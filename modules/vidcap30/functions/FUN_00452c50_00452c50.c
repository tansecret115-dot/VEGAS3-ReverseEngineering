/* Module: vidcap30.exe
   Function: FUN_00452c50
   Address: 00452c50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00452c50(HWND param_1,int param_2)

{
  int dwNewLong;
  HWND pHVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  dwNewLong = *(int *)(param_2 + 0x1c);
  SetWindowLongA(param_1,8,dwNewLong);
  _SfSetEditCtrlFont_8(param_1,0);
  if (*(int *)(dwNewLong + 0xfc) != 0) {
    uVar4 = 0x8001;
    uVar3 = 0;
    uVar2 = 0;
    pHVar1 = GetParent(param_1);
    _SfWndCenter_16(pHVar1,uVar2,uVar3,uVar4);
    *(undefined4 *)(dwNewLong + 0xfc) = 0;
  }
  return dwNewLong;
}


