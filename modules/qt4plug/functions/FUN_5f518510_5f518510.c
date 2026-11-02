/* Module: qt4plug.dll
   Function: FUN_5f518510
   Address: 5f518510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5f518510(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x424) != 0)) &&
      (iVar1 = *(int *)(*(int *)(param_1 + 0x424) + 0x3e), iVar1 != 0)) &&
     ((*(int *)(iVar1 + 0xc) != 0 &&
      (puVar2 = (undefined4 *)FUN_5f57af10(), puVar2 != (undefined4 *)0x0)))) {
    FUN_5f5781f0();
    uVar4 = *(uint *)(iVar1 + 0x10);
    puVar5 = (undefined4 *)(iVar1 + 0x14);
    puVar6 = (undefined4 *)*puVar2;
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    FUN_5f578230();
    return puVar2;
  }
  return (undefined4 *)0x0;
}


