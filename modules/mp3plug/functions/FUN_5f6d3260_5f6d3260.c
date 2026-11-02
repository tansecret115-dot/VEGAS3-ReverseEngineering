/* Module: mp3plug.dll
   Function: FUN_5f6d3260
   Address: 5f6d3260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6d3260(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = *(undefined4 *)(param_1 + 0x10);
    param_2[1] = *(undefined4 *)(param_1 + 0x6c);
    param_2[2] = *(undefined4 *)(param_1 + 0x68);
    uVar1 = FUN_5f6e4b00(*(int *)(param_1 + 0x50));
    param_2[3] = uVar1;
    uVar1 = FUN_5f6e4af0(*(int *)(param_1 + 0x50));
    param_2[4] = uVar1;
  }
  return 0;
}


