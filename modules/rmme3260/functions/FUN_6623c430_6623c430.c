/* Module: rmme3260.dll
   Function: FUN_6623c430
   Address: 6623c430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6623c430(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0xcc);
  param_2[1] = *(undefined4 *)(param_1 + 0xd0);
  return 0;
}


