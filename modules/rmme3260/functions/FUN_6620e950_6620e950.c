/* Module: rmme3260.dll
   Function: FUN_6620e950
   Address: 6620e950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6620e950(void *this,uint param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (*(uint *)((int)this + 0x104) == 0) {
    return 0;
  }
  piVar2 = *(int **)((int)this + 0x108);
  do {
    if (*(ushort *)(*piVar2 + 2) == param_1) {
      return 1;
    }
    uVar1 = uVar1 + 1;
    piVar2 = (int *)((int)piVar2 + 0x26);
  } while (uVar1 < *(uint *)((int)this + 0x104));
  return 0;
}


