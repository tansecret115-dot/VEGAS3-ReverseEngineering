/* Module: vidcap30.exe
   Function: FUN_00460480
   Address: 00460480
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00460480(HWND param_1,int param_2,uint param_3,int param_4)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,8);
  if (param_2 == 0x53) {
    FUN_0041f690(0,param_1,0,*(undefined4 *)(param_4 + 8),&DAT_005b6260,0);
    return 1;
  }
  if (param_2 != 0x110) {
    if (param_2 == 0x111) {
      FUN_00460590(param_1,param_3 & 0xffff,param_3 >> 0x10,LVar1);
      return 1;
    }
    return 0;
  }
  FUN_00460510(param_1,param_4);
  return 1;
}


