/* Module: sftrkfx1.dll
   Function: FUN_5cbb5af0
   Address: 5cbb5af0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbb5af0(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar4 = (undefined4 *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x68) * 2 + -2;
  iVar5 = iVar1;
  iVar6 = 0;
  if (0 < iVar1) {
    do {
      *puVar4 = puVar4[4];
      puVar4[1] = puVar4[5];
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
      iVar6 = iVar1;
    } while (iVar5 != 0);
  }
  *(undefined8 *)(param_1 + 0x20 + iVar6 * 8) = uVar2;
  *(undefined8 *)(param_1 + 0x28 + iVar6 * 8) = uVar3;
  return;
}


