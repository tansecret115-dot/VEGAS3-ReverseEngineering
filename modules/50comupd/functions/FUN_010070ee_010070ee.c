/* Module: 50comupd.exe
   Function: FUN_010070ee
   Address: 010070ee
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010070ee(int *param_1)

{
  if (*param_1 != 0) {
    (*(code *)param_1[0xbb9])(*param_1);
    *param_1 = 0;
  }
  return;
}


