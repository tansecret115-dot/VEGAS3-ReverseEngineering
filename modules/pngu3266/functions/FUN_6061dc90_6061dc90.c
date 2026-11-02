/* Module: pngu3266.dll
   Function: FUN_6061dc90
   Address: 6061dc90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6061dc90(void *this,undefined4 param_1)

{
  uint *puVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined ***)this = &PTR_FUN_6062d278;
  puVar1 = operator_new(0x14);
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    *puVar1 = 100;
    puVar1[1] = 0x33;
    puVar1[2] = 0;
    puVar1[3] = 99;
    pvVar2 = operator_new(400);
    puVar1[4] = (uint)pvVar2;
    uVar3 = 0;
    if (*puVar1 != 0) {
      do {
        uVar3 = uVar3 + 1;
        *(undefined4 *)((puVar1[4] - 4) + uVar3 * 4) = 0;
      } while (uVar3 < *puVar1);
    }
  }
  *(uint **)((int)this + 0x14) = puVar1;
  pvVar2 = operator_new(0x834);
  if (pvVar2 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_6061e690(pvVar2,*(int *)((int)this + 0x14));
  }
  *(undefined4 **)((int)this + 8) = puVar4;
  pvVar2 = operator_new(0x834);
  if (pvVar2 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_6061e690(pvVar2,*(int *)((int)this + 0x14));
  }
  *(undefined4 **)((int)this + 0x10) = puVar4;
  FUN_60623310((undefined4 *)((int)this + 0x20));
  DVar5 = GetTickCount();
  *(DWORD *)((int)this + 0x28) = DVar5;
  return this;
}


