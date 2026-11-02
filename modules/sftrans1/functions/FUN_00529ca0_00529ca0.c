/* Module: sftrans1.dll
   Function: FUN_00529ca0
   Address: 00529ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00529ca0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x4a0);
  param_2[1] = *(undefined4 *)(param_1 + 0x4a4);
  param_2[2] = *(undefined4 *)(param_1 + 0x4a8);
  return 1;
}


