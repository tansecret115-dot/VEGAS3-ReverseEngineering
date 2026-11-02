/* Module: sftrans1.dll
   Function: FUN_004c0700
   Address: 004c0700
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c0700(uint *param_1,int param_2)

{
  FUN_004c0750((int)(((longlong)(int)(param_2 - param_1[8]) * (longlong)(int)param_1[9]) /
                    (longlong)(int)(param_1[5] - param_1[4])),*param_1 & 0x40);
  return;
}


