/* Module: pngu3266.dll
   Function: FUN_6060fcb7
   Address: 6060fcb7
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6060fcb7(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)((int)this + 0x28) + 0x13c))();
  *(int *)((int)this + 0x2c) = iVar1;
  *(int *)((int)this + 0x30) = iVar1 - param_1;
  return;
}


