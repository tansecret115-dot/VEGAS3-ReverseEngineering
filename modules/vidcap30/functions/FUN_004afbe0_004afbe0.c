/* Module: vidcap30.exe
   Function: FUN_004afbe0
   Address: 004afbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004afbe0(uint *param_1,int param_2)

{
  FUN_004afc30((int)(((longlong)(int)(param_2 - param_1[8]) * (longlong)(int)param_1[9]) /
                    (longlong)(int)(param_1[5] - param_1[4])),*param_1 & 0x40);
  return;
}


