/* Module: mp3rw.dll
   Function: FUN_004759a0
   Address: 004759a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_004759a0(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  if (4 < param_2) {
    piVar1 = FUN_00475950(param_1,param_2,0,0,param_3,param_4);
    return piVar1;
  }
  iVar2 = 0;
  *param_1 = param_2;
  piVar1 = param_1;
  if (0 < param_2) {
    do {
      piVar1[1] = iVar2;
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < param_2);
  }
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = param_3;
  param_1[8] = param_4;
  return param_1 + 9;
}


