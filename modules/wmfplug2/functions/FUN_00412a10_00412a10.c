/* Module: wmfplug2.dll
   Function: FUN_00412a10
   Address: 00412a10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00412a10(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 *puVar6;
  
  puVar2 = *(undefined4 **)(param_1 + 0x3e);
  if (puVar2 == (undefined4 *)0x0) {
    return 0x80070057;
  }
  if (puVar2[0x1e] == 0) {
    iVar5 = *(int *)(param_1 + 0x3a) + 0x28;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x3a) + 0x20;
  }
  puVar1 = (undefined4 *)
           (**(code **)(**(int **)((int)this + 0x30) + 0x20))
                     (*(int **)((int)this + 0x30),0x42,iVar5);
  if (puVar1 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  puVar6 = puVar1;
  for (iVar5 = 0x1f; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar4 = *(uint *)(unaff_ESI + 0x78);
  if (uVar4 != 0) {
    *(undefined4 **)(unaff_ESI + 0x74) = (undefined4 *)(unaff_ESI + 0x7c);
    puVar2 = (undefined4 *)(unaff_ESI + 0x7c);
    puVar6 = puVar1 + 0x1f;
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar2;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  (**(code **)(**(int **)(unaff_EBP + 0x30) + 0x24))
            (*(int **)(unaff_EBP + 0x30),*(undefined4 *)(param_1 + 0x3e));
  *(undefined4 **)(param_1 + 0x3e) = puVar1;
  *(int *)(param_1 + 0x3a) = unaff_EBP;
  puVar2 = puVar1 + 0x1f;
  puVar1[0x1d] = puVar2;
  puVar1[0x20] = puVar1[0x20] + 1;
  if (puVar1[0x1e] == 0) {
    *puVar2 = 8;
  }
  if (puVar1[0x1e] == 0) {
    puVar2 = puVar1 + 0x21;
    puVar1[0x1e] = 8;
  }
  else {
    puVar2 = (undefined4 *)((int)puVar2 + puVar1[0x1e]);
  }
  *puVar2 = 0xc;
  puVar2[1] = 2;
  puVar2[2] = 0x14;
  puVar1[0x1e] = puVar1[0x1e] + 0x20;
  return 0;
}


