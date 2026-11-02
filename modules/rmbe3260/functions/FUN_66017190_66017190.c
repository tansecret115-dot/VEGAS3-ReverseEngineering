/* Module: rmbe3260.dll
   Function: FUN_66017190
   Address: 66017190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66017190(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (*(int *)(param_1 + 0x26) == 0) {
    return 0x80040007;
  }
  uVar2 = FUN_66017180(param_1);
  if (*(uint *)(param_1 + 0x2e) < uVar2) {
    if (*(int *)(param_1 + 0x32) == 0) {
      return 0x8004000d;
    }
    if (*(void **)(param_1 + 0x2a) != (void *)0x0) {
      operator_delete(*(void **)(param_1 + 0x2a));
      *(undefined4 *)(param_1 + 0x2a) = 0;
      *(undefined4 *)(param_1 + 0x2e) = 0;
    }
    pvVar3 = operator_new(uVar2);
    *(void **)(param_1 + 0x2a) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      return 0x8007000e;
    }
    *(uint *)(param_1 + 0x2e) = uVar2;
  }
  puVar1 = *(undefined1 **)(param_1 + 0x2a);
  *puVar1 = *(undefined1 *)(param_1 + 0x19);
  puVar1[1] = *(undefined1 *)(param_1 + 0x18);
  puVar1[2] = (char)((uint)*(undefined4 *)(param_1 + 0x1a) >> 0x18);
  puVar1[3] = (char)((uint)*(undefined4 *)(param_1 + 0x1a) >> 0x10);
  puVar1[4] = (char)((uint)*(undefined4 *)(param_1 + 0x1a) >> 8);
  puVar1[5] = *(undefined1 *)(param_1 + 0x1a);
  puVar1[6] = (char)((uint)*(undefined4 *)(param_1 + 0x1e) >> 0x18);
  puVar1[7] = (char)((uint)*(undefined4 *)(param_1 + 0x1e) >> 0x10);
  puVar1[8] = (char)((uint)*(undefined4 *)(param_1 + 0x1e) >> 8);
  puVar1[9] = *(undefined1 *)(param_1 + 0x1e);
  puVar1[10] = *(undefined1 *)(param_1 + 0x23);
  puVar1[0xb] = *(undefined1 *)(param_1 + 0x22);
  puVar1[0xc] = *(undefined1 *)(param_1 + 0x25);
  puVar1[0xd] = *(undefined1 *)(param_1 + 0x24);
  uVar4 = *(ushort *)(param_1 + 0x22) - 2;
  puVar5 = *(undefined4 **)(param_1 + 0x26);
  puVar6 = (undefined4 *)(puVar1 + 0xe);
  for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  return 0;
}


