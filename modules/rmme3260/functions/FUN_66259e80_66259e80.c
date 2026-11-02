/* Module: rmme3260.dll
   Function: FUN_66259e80
   Address: 66259e80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66259e80(void *this,int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)this + 0x12);
  if ((puVar1 != (undefined4 *)0x0) && (*(int *)((int)this + 100) == 6)) {
    if (param_1 == 2) {
      (**(code **)*puVar1)(1,1,0);
      return;
    }
    if (param_1 == 1) {
      (**(code **)*puVar1)(0,1,0);
    }
  }
  return;
}


