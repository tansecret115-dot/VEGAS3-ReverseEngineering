/* Module: vegas30.exe
   Function: FUN_005a6090
   Address: 005a6090
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005a6090(float *param_1,float param_2,float param_3)

{
  int iVar1;
  
  iVar1 = 5;
  do {
    iVar1 = iVar1 + -1;
    *param_1 = param_2 + *param_1;
    param_1[1] = param_3 + param_1[1];
    param_1 = param_1 + 4;
  } while (iVar1 != 0);
  return;
}


