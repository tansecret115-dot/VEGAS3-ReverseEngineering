/* Module: vidcap30.exe
   Function: FUN_00424fa0
   Address: 00424fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00424fa0(int *param_1,int param_2,int param_3)

{
  if ((*param_1 == 7) && ((param_1[0x52] & 4U) != 0)) {
    param_1[0xe2] = param_2;
    param_1[0xe3] = param_3;
  }
  return 0;
}


