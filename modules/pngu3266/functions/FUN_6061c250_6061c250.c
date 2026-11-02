/* Module: pngu3266.dll
   Function: FUN_6061c250
   Address: 6061c250
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_6061c250(void *this,void *param_1,int param_2,uint param_3)

{
  if (param_3 == 0xffffffff) {
    param_3 = *(int *)(*(int *)this + -8) - param_2;
  }
  FUN_60619390(this,param_1,param_2,param_3);
  return param_1;
}


