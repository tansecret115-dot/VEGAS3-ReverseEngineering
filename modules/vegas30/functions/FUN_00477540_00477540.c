/* Module: vegas30.exe
   Function: FUN_00477540
   Address: 00477540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_00477540(int param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x218) + 0x28) - *(int *)(*(int *)(param_1 + 0x218) + 0x20) < 1) {
    return 0;
  }
  uVar1 = ftol();
  return uVar1;
}


