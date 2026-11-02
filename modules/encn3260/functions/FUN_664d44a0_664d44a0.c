/* Module: encn3260.dll
   Function: FUN_664d44a0
   Address: 664d44a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d44a0(void *this,int param_1)

{
  int *piVar1;
  
  if (*(int *)((int)this + 8) != param_1) {
    return 0;
  }
  piVar1 = *(int **)((int)this + 0x18);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  (**(code **)(*piVar1 + 4))(piVar1);
  return *(undefined4 *)((int)this + 0x18);
}


