/* Module: rmbe3260.dll
   Function: FUN_66024780
   Address: 66024780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66024780(int param_1,int *param_2)

{
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  *param_2 = param_1 + -0x10;
  return 0;
}


