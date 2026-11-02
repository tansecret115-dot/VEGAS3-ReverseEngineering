/* Module: rmme3260.dll
   Function: FUN_662567a0
   Address: 662567a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_662567a0(void *this,int *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)this = 0;
  }
  *(int **)this = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  return this;
}


