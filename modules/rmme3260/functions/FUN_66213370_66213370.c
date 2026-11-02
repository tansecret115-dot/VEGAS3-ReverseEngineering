/* Module: rmme3260.dll
   Function: FUN_66213370
   Address: 66213370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66213370(void *this,uint param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (*(uint *)((int)this + 0x10c) == 0) {
    return 0;
  }
  piVar2 = *(int **)((int)this + 0x110);
  do {
    if (*(ushort *)(*piVar2 + 2) == param_1) {
      return 1;
    }
    uVar1 = uVar1 + 1;
    piVar2 = (int *)((int)piVar2 + 0x2a);
  } while (uVar1 < *(uint *)((int)this + 0x10c));
  return 0;
}


