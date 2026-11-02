/* Module: rmbe3260.dll
   Function: FUN_66054b70
   Address: 66054b70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66054b70(void *this,undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  *param_1 = 0;
  if (*(int *)((int)this + 8) != param_2) {
    return 0x80004005;
  }
  piVar1 = *(int **)((int)this + 0x18);
  if (piVar1 == (int *)0x0) {
    return 0x80004005;
  }
  (**(code **)(*piVar1 + 4))(piVar1);
  *param_1 = *(undefined4 *)((int)this + 0x18);
  return 0;
}


