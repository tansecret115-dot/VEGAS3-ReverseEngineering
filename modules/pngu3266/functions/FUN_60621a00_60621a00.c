/* Module: pngu3266.dll
   Function: FUN_60621a00
   Address: 60621a00
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_60621a00(void *this,int *param_1)

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


