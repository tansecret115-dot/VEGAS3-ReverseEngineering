/* Module: vegas30.exe
   Function: FUN_0042d240
   Address: 0042d240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042d240(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  InterlockedIncrement(&DAT_0065e144);
  *(undefined1 **)(param_3 + 0xa28) = &LAB_0042d090;
  *(undefined4 *)(param_3 + 0xa2c) = param_1;
  uVar1 = FUN_00535ff0(param_2,param_3);
  FUN_0052e040(param_3);
  InterlockedDecrement(&DAT_0065e144);
  return uVar1;
}


