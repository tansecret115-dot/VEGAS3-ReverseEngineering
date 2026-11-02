/* Module: encn3260.dll
   Function: FUN_664aa6d0
   Address: 664aa6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664aa6d0(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    if (*(int *)((int)this + 0x100) != 0) {
      return;
    }
    *(undefined4 *)((int)this + 0x100) = 1;
  }
  else if (param_1 == 1) {
    if (*(int *)((int)this + 0xf0) != 0) {
      return;
    }
    *(undefined4 *)((int)this + 0xf0) = 1;
  }
  else if ((param_1 == 2) && (*(int *)((int)this + 0x16c) != 0)) {
    return;
  }
  piVar1 = *(int **)((int)this + 0x170);
  if (piVar1 != (int *)0x0) {
    if (*(int *)((int)this + 0x16c) != 0) {
      (**(code **)(*piVar1 + 0x14))(piVar1,*(int *)((int)this + 0x16c));
      *(undefined4 *)((int)this + 0x16c) = 0;
    }
    uVar2 = (**(code **)(**(int **)((int)this + 0x170) + 0xc))
                      (*(int **)((int)this + 0x170),*(undefined4 *)((int)this + 0x80),param_2);
    *(undefined4 *)((int)this + 0x16c) = uVar2;
  }
  return;
}


