/* Module: vidcap30.exe
   Function: FUN_00424de0
   Address: 00424de0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00424de0(int *param_1,int *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 == 7) {
    *param_2 = param_1[0xdc];
    param_2[1] = param_1[0xdd];
  }
  return 0;
}


