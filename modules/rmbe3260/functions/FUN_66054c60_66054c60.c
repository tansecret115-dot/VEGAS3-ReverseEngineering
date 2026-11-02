/* Module: rmbe3260.dll
   Function: FUN_66054c60
   Address: 66054c60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66054c60(void *this,int param_1)

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


