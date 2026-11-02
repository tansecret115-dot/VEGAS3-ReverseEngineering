/* Module: erv23260.dll
   Function: FUN_637fcc20
   Address: 637fcc20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637fcc20(void *this,uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  if (*(int *)((int)this + 0x60) != 0) {
    uVar1 = FUN_637ffea0((void *)((int)this + 0x18),param_1);
    return uVar1;
  }
  if (*(int *)((int)this + 0xb4) == 0) {
    return 1;
  }
  if ((uint)(*(int *)(*(int *)((int)this + 0xb8) + 4) << 3) <= param_1) {
    iVar2 = FUN_637fd280((int)this);
    if (param_1 < (uint)(iVar2 << 3)) {
      uVar3 = 1;
      if (1 < *(uint *)((int)this + 0xb4)) {
        piVar4 = (int *)(*(int *)((int)this + 0xb8) + 0xc);
        do {
          if (param_1 < (uint)(*piVar4 << 3)) break;
          uVar3 = uVar3 + 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 < *(uint *)((int)this + 0xb4));
      }
      return *(undefined4 *)(*(int *)((int)this + 0xb8) + -8 + uVar3 * 8);
    }
  }
  return 0;
}


