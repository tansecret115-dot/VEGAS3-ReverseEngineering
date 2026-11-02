/* Module: sftrans1.dll
   Function: FUN_00529190
   Address: 00529190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00529190(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x68) = param_2;
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_005291b0();
  }
  return 1;
}


