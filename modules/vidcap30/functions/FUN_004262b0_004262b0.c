/* Module: vidcap30.exe
   Function: FUN_004262b0
   Address: 004262b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004262b0(int *param_1)

{
  if ((*param_1 == 8) && (param_1[0xff] != 0)) {
    param_1[0x52] = param_1[0x52] | 0x1000000;
    param_1[0x53] = param_1[0x53];
  }
  return 0;
}


