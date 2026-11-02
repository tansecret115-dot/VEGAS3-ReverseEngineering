/* Module: vidcap30.exe
   Function: FUN_00444400
   Address: 00444400
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00444400(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  FUN_0042f4b0(*(undefined4 *)(*(int *)(param_1 + 4) + 4),0);
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x58);
  }
  FUN_0042f5d0(*(undefined4 *)(*(int *)(param_1 + 4) + 4),0);
  return uVar1;
}


