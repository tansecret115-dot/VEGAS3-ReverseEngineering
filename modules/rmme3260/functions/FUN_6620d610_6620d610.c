/* Module: rmme3260.dll
   Function: FUN_6620d610
   Address: 6620d610
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6620d610(void *this,int param_1)

{
  void *pvVar1;
  
  *(int *)((int)this + 0x10) = param_1;
  pvVar1 = operator_new(param_1 << 2);
  *(void **)((int)this + 0x14) = pvVar1;
  return;
}


