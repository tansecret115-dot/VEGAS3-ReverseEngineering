/* Module: vfplugs.dll
   Function: FUN_00424330
   Address: 00424330
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00424330(uint *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00424380(param_2,*param_1 & 0x40);
  return param_1[8] +
         (int)(((longlong)iVar1 * (longlong)(int)(param_1[5] - param_1[4])) /
              (longlong)(int)param_1[9]);
}


