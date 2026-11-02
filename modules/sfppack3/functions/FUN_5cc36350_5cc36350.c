/* Module: sfppack3.dll
   Function: FUN_5cc36350
   Address: 5cc36350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cc36350(void *this,double *param_1,int param_2,int param_3,int param_4)

{
  float10 fVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    fVar1 = FUN_5cc35160((int)this,*param_1,param_4);
    *param_1 = (double)fVar1;
    param_1 = param_1 + param_2;
  }
  return 0;
}


