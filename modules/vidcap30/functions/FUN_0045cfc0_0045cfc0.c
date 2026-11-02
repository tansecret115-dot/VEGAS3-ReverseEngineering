/* Module: vidcap30.exe
   Function: FUN_0045cfc0
   Address: 0045cfc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0045cfc0(HWND param_1,uint param_2,uint param_3,LPARAM param_4)

{
  LONG LVar1;
  undefined4 uVar2;
  
  LVar1 = GetWindowLongA(param_1,8);
  uVar2 = 0;
  if (param_2 < 0x111) {
    if (param_2 == 0x110) {
      uVar2 = FUN_0041d230(param_1,param_4);
      FUN_0045d2a0(uVar2,param_1);
      FUN_0045d0e0(uVar2,param_1);
      return 1;
    }
    if (param_2 == 2) {
      if (*(HWND *)(LVar1 + 0x70) != (HWND)0x0) {
        DestroyWindow(*(HWND *)(LVar1 + 0x70));
        return 0;
      }
    }
    else {
      if (param_2 == 0x4e) {
        uVar2 = FUN_0045de10(param_1,param_3,param_4,LVar1);
        return uVar2;
      }
      if (param_2 == 0x53) {
        FUN_0045cf80(param_1,param_4,LVar1);
        return 1;
      }
    }
  }
  else if (param_2 == 0x111) {
    FUN_0045d600(param_1,param_4,param_3 & 0xffff,param_3 >> 0x10,LVar1);
    uVar2 = 1;
  }
  else {
    if (param_2 == 0x115) {
      FUN_0045ee10(param_1,param_3,param_4,LVar1);
      return 0;
    }
    if (param_2 == 0x11f) {
      SendMessageA(DAT_005ba4bc,0x11f,param_3,param_4);
      return 1;
    }
  }
  return uVar2;
}


