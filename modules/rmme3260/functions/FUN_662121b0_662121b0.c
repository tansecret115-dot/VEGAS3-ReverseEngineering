/* Module: rmme3260.dll
   Function: FUN_662121b0
   Address: 662121b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662121b0(void *this,int *param_1)

{
  int *piVar1;
  
  if (param_1 == (int *)0x0) {
    return 0x80004003;
  }
  piVar1 = *(int **)((int)this + 0x2da);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x2da) = 0;
  }
  *(int **)((int)this + 0x2da) = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  return 0;
}


