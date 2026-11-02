/* Module: vidcap30.exe
   Function: FUN_00464200
   Address: 00464200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00464200(HWND param_1,uint param_2,uint param_3,int param_4)

{
  LONG LVar1;
  undefined4 uVar2;
  
  LVar1 = GetWindowLongA(param_1,-0x15);
  if (param_2 < 0x54) {
    if (param_2 == 0x53) {
      FUN_0041f690(0,param_1,0,*(undefined4 *)(param_4 + 8),&DAT_0058c6c0,0);
      return 1;
    }
    if (param_2 != 2) {
      if (param_2 == 0x2e) {
        uVar2 = FUN_00464130(param_1,param_4,param_3);
        return uVar2;
      }
      if (param_2 != 0x4e) {
        return 0;
      }
      FUN_004641e0(param_1,param_3,param_4);
    }
    return 1;
  }
  if (param_2 == 0x110) {
    _SfWndCenter_16(param_1,0,0,0x8001);
    SetWindowLongA(param_1,-0x15,param_4);
    uVar2 = FUN_00463940(param_1,param_4);
    return uVar2;
  }
  if (param_2 != 0x111) {
    return 0;
  }
  uVar2 = FUN_00463e90(param_1,LVar1,param_3 & 0xffff,param_4,param_3 >> 0x10);
  return uVar2;
}


