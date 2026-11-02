/* Module: rmbe3260.dll
   Function: FUN_660014e0
   Address: 660014e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_660014e0(void *this,int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x18) == 0x41b) && (*(int *)(param_1 + 0xc) == 2)) {
    iVar1 = (**(code **)(**(int **)((int)this + 0x108) + 0x134))();
    (**(code **)(*(int *)this + 0x180))(*(undefined4 *)((int)this + iVar1 * 4 + 0x12a));
  }
  return;
}


