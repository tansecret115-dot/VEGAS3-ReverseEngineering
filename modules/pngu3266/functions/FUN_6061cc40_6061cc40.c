/* Module: pngu3266.dll
   Function: FUN_6061cc40
   Address: 6061cc40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6061cc40(int param_1,int *param_2,undefined4 *param_3)

{
  *param_2 = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c);
  *param_3 = *(undefined4 *)(param_1 + 0x18);
  return 0;
}


