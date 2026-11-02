/* Module: vidcap30.exe
   Function: FUN_004260a0
   Address: 004260a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004260a0(int *param_1,int param_2)

{
  if (*param_1 == 8) {
    if (param_1[0x145] == param_2) {
      return 1;
    }
    param_1[0x145] = param_2;
  }
  return 0;
}


