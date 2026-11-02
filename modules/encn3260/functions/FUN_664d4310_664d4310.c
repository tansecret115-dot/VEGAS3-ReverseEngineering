/* Module: encn3260.dll
   Function: FUN_664d4310
   Address: 664d4310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d4310(void *this,int *param_1,int param_2)

{
  int *piVar1;
  
  if (*(int *)((int)this + 0x14) != 0) {
    return 0x80004005;
  }
  if (*(int *)((int)this + 8) != param_2) {
    return 0x80004005;
  }
  piVar1 = *(int **)((int)this + 0x18);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  if (param_1 != (int *)0x0) {
    *(int **)((int)this + 0x18) = param_1;
    (**(code **)(*param_1 + 4))(param_1);
  }
  return 0;
}


