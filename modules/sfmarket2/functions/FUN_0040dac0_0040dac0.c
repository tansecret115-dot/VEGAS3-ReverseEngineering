/* Module: sfmarket2.dll
   Function: FUN_0040dac0
   Address: 0040dac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0040dac0(void *this,int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0x80004005;
  if (*(int *)((int)this + 0x48) == 0) {
    piVar1 = *(int **)((int)this + 0x4c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)this + 0x4c) = 0;
    }
    *(int **)((int)this + 0x4c) = param_1;
    (**(code **)(*param_1 + 4))(param_1);
    uVar2 = 0;
  }
  return uVar2;
}


