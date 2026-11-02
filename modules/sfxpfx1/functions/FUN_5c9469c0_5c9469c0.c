/* Module: sfxpfx1.dll
   Function: FUN_5c9469c0
   Address: 5c9469c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5c9469c0(void *this,double *param_1,uint param_2,int param_3)

{
  if (param_3 == 0) {
    return 0;
  }
  do {
    FUN_5c945630(this,param_1,param_2);
    param_1 = param_1 + param_2;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return 0;
}


