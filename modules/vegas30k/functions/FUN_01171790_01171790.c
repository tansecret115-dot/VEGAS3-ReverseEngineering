/* Module: vegas30k.dll
   Function: FUN_01171790
   Address: 01171790
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01171790(int param_1,char *param_2,int param_3)

{
  if (*(char *)(param_1 + 0xc) == '\0') {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      FUN_01171510(param_1,(int)*param_2,1);
      param_2 = param_2 + 1;
    }
  }
  return;
}


