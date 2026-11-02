/* Module: vidcap30.exe
   Function: FUN_00568a90
   Address: 00568a90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00568a90(int param_1,char *param_2,int param_3)

{
  if (*(char *)(param_1 + 0xc) == '\0') {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      FUN_00568810(param_1,(int)*param_2,1);
      param_2 = param_2 + 1;
    }
  }
  return;
}


