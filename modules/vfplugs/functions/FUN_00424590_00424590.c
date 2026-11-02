/* Module: vfplugs.dll
   Function: FUN_00424590
   Address: 00424590
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00424590(uint *param_1,int param_2)

{
  FUN_004245e0((int)(((longlong)(int)(param_2 - param_1[8]) * (longlong)(int)param_1[9]) /
                    (longlong)(int)(param_1[5] - param_1[4])),*param_1 & 0x40);
  return;
}


