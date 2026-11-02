/* Module: encn3260.dll
   Function: FUN_664932c0
   Address: 664932c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664932c0(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  *(int **)((int)this + 0x2c) = piVar1;
  *piVar1 = *piVar1 + 1;
  *(undefined4 *)((int)this + 0x5c) = 1;
  return;
}


