/* Module: encn3260.dll
   Function: FUN_664ae780
   Address: 664ae780
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664ae780(void *this,undefined4 param_1,uint *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = param_3;
  param_3 = (int *)0x0;
  *piVar1 = 0;
  if (*param_2 != 0) {
    FUN_664c3eb0((void *)((int)this + 0x21),*param_2,(int *)&param_3);
  }
  *piVar1 = (int)param_3;
  return;
}


