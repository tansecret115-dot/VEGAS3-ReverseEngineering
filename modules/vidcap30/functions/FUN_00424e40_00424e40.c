/* Module: vidcap30.exe
   Function: FUN_00424e40
   Address: 00424e40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00424e40(int *param_1,int *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  if ((*param_1 == 7) && ((param_1[0x52] & 4U) != 0)) {
    *param_2 = param_1[0xe6];
    param_2[1] = param_1[0xe7];
  }
  return 0;
}


