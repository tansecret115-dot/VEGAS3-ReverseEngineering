/* Module: rmto3260.dll
   Function: FUN_662ff1a0
   Address: 662ff1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_662ff1a0(void *this,int param_1,undefined2 param_2,int param_3,undefined2 *param_4,
            undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint local_8;
  
  puVar5 = param_5;
  puVar6 = *(undefined4 **)((int)this + 0x28);
  for (uVar1 = *(uint *)((int)this + 0x20) & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  puVar5 = param_5;
  for (uVar1 = *(uint *)((int)this + 0x20) & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar5 = 0xffffffff;
    puVar5 = puVar5 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar5 = 0xff;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  local_8 = 0;
  if (*(int *)((int)this + 0x1c) != 0) {
    do {
      uVar1 = (uint)*(ushort *)(*(int *)((int)this + 0x18) + local_8 * 2);
      uVar4 = (uint)*(ushort *)((int)this + 0x16);
      puVar5 = (undefined4 *)(uVar1 * uVar4 + param_1);
      puVar6 = (undefined4 *)(local_8 * uVar4 + param_3);
      for (uVar3 = (uint)(*(ushort *)((int)this + 0x16) >> 2); uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      if (*(int *)(*(int *)((int)this + 0x28) +
                  (uint)*(ushort *)(*(int *)((int)this + 0x2c) + uVar1 * 2) * 4) == 0) {
        param_5[*(ushort *)(*(int *)((int)this + 0x2c) + local_8 * 2)] =
             param_5[*(ushort *)(*(int *)((int)this + 0x2c) + local_8 * 2)] ^
             1 << (*(byte *)(*(int *)((int)this + 0x30) + local_8 * 2) & 0x1f);
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)((int)this + 0x1c));
  }
  *param_4 = param_2;
  return 0;
}


