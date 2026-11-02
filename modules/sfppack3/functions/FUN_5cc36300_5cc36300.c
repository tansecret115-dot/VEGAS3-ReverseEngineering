/* Module: sfppack3.dll
   Function: FUN_5cc36300
   Address: 5cc36300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cc36300(void *this,double *param_1,uint param_2,int param_3)

{
  if (param_3 == 0) {
    return 0;
  }
  do {
    FUN_5cc34f70(this,param_1,param_2);
    param_1 = param_1 + param_2;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return 0;
}


