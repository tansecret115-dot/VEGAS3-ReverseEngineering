/* Module: rmme3260.dll
   Function: FUN_66243c20
   Address: 66243c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66243c20(void *this,undefined4 param_1,uint *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = param_3;
  param_3 = (int *)0x0;
  *piVar1 = 0;
  if (*param_2 != 0) {
    FUN_66251030((void *)((int)this + 0x21),*param_2,(int *)&param_3);
  }
  *piVar1 = (int)param_3;
  return;
}


