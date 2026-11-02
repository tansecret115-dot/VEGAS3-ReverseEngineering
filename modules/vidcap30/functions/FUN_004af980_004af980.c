/* Module: vidcap30.exe
   Function: FUN_004af980
   Address: 004af980
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004af980(uint *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_004af9d0(param_2,*param_1 & 0x40);
  return param_1[8] +
         (int)(((longlong)iVar1 * (longlong)(int)(param_1[5] - param_1[4])) /
              (longlong)(int)param_1[9]);
}


