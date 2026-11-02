/* Module: sftrans1.dll
   Function: FUN_00544690
   Address: 00544690
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00544690(int param_1)

{
  ushort uVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = (uint)(*(ushort *)(param_1 + 6) >> 1);
  puVar2 = (undefined2 *)FUN_00544630(param_1);
  iVar3 = FUN_00544650(param_1);
  iVar4 = FUN_00544670(param_1);
  iVar5 = FUN_00544620(param_1);
  if (uVar7 != 0) {
    iVar5 = iVar5 - (int)puVar2;
    iVar3 = iVar3 - (int)puVar2;
    iVar8 = iVar4 - (int)puVar2;
    uVar6 = uVar7;
    do {
      *(ushort *)(iVar5 + (int)puVar2) =
           CONCAT11(*(undefined1 *)(iVar5 + (int)puVar2),*(undefined1 *)(iVar5 + 1 + (int)puVar2));
      *puVar2 = CONCAT11(*(undefined1 *)puVar2,*(undefined1 *)((int)puVar2 + 1));
      *(ushort *)(iVar3 + (int)puVar2) =
           CONCAT11(*(undefined1 *)(iVar3 + (int)puVar2),*(undefined1 *)(iVar3 + 1 + (int)puVar2));
      *(ushort *)(iVar8 + (int)puVar2) =
           CONCAT11(*(undefined1 *)(iVar8 + (int)puVar2),*(undefined1 *)(iVar8 + 1 + (int)puVar2));
      puVar2 = puVar2 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar1 = *(ushort *)(param_1 + 2);
  for (puVar2 = (undefined2 *)(iVar4 + uVar7 * 2); puVar2 < (undefined2 *)((uint)uVar1 + param_1);
      puVar2 = puVar2 + 1) {
    *puVar2 = CONCAT11(*(undefined1 *)puVar2,*(undefined1 *)((int)puVar2 + 1));
  }
  return;
}


