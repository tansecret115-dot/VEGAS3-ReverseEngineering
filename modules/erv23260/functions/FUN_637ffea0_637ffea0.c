/* Module: erv23260.dll
   Function: FUN_637ffea0
   Address: 637ffea0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637ffea0(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  iVar1 = *(int *)((int)this + 0x18);
  uVar2 = *(int *)((int)this + 0x34) << 3;
  if (*(int *)((int)this + 0x30) == 0x50333632) {
    if ((*(uint *)(iVar1 + 4) <= param_1) && (param_1 < uVar2)) {
      uVar2 = 1;
      if (1 < *(uint *)((int)this + 0x20)) {
        puVar3 = (uint *)(iVar1 + 0xc);
        do {
          if (param_1 < *puVar3) break;
          uVar2 = uVar2 + 1;
          puVar3 = puVar3 + 2;
        } while (uVar2 < *(uint *)((int)this + 0x20));
      }
      if ((*(byte *)(iVar1 + -8 + uVar2 * 8) & 1) == 0) {
        return 1;
      }
      return 0;
    }
  }
  else if ((*(uint *)(iVar1 + 4) <= param_1) && (param_1 < uVar2)) {
    uVar2 = 1;
    if (1 < *(uint *)((int)this + 0x20)) {
      puVar3 = (uint *)(iVar1 + 0x14);
      do {
        if (param_1 < *puVar3) break;
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 4;
      } while (uVar2 < *(uint *)((int)this + 0x20));
    }
    if ((*(byte *)(uVar2 * 0x10 + -0x10 + iVar1) & 1) == 0) {
      return 1;
    }
  }
  return 0;
}


