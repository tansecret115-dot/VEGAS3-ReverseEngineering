/* Module: wmfdist2.exe
   Function: FUN_010074af
   Address: 010074af
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010074af(int *param_1)

{
  if (*param_1 != 0) {
    (*(code *)param_1[0xbb9])(*param_1);
    *param_1 = 0;
  }
  return;
}


