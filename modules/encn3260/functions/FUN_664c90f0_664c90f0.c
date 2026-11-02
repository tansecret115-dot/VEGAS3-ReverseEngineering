/* Module: encn3260.dll
   Function: FUN_664c90f0
   Address: 664c90f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664c90f0(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar2 = 0x80040009;
  if (*(int *)((int)this + 0x36) != 0) {
    (**(code **)(**(int **)((int)this + 0x44) + 4))();
    uVar2 = (**(code **)(**(int **)((int)this + 0x36) + 0x60))(param_1);
    if (*(int *)((int)this + 0x68) != 0) {
      do {
        piVar3 = (int *)FUN_664ba9f0((int *)((int)this + 0x58));
        piVar1 = (int *)*piVar3;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          *piVar3 = 0;
        }
        if (piVar3 != (int *)0x0) {
          operator_delete(piVar3);
        }
      } while (*(int *)((int)this + 0x68) != 0);
    }
    (**(code **)(**(int **)((int)this + 0x44) + 8))();
  }
  return uVar2;
}


