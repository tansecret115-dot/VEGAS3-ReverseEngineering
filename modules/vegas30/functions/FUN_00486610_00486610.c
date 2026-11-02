/* Module: vegas30.exe
   Function: FUN_00486610
   Address: 00486610
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00486610(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  InterlockedIncrement(&DAT_0065e144);
  *(undefined1 **)(param_4 + 0xa28) = &LAB_00480f60;
  *(undefined4 *)(param_4 + 0xa2c) = param_1;
  uVar1 = FUN_00535ff0(param_2,param_4);
  FUN_0052e040(param_4);
  InterlockedDecrement(&DAT_0065e144);
  return uVar1;
}


