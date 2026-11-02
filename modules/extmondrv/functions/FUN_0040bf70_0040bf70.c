/* Module: extmondrv.dll
   Function: FUN_0040bf70
   Address: 0040bf70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040bf70(uint *param_1,int param_2)

{
  FUN_0040bfc0((int)(((longlong)(int)(param_2 - param_1[8]) * (longlong)(int)param_1[9]) /
                    (longlong)(int)(param_1[5] - param_1[4])),*param_1 & 0x40);
  return;
}


