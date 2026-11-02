/* Module: sfppack2.dll
   Function: FUN_5cd3adb0
   Address: 5cd3adb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd3adb0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  
  puVar5 = &DAT_5cd63dba;
  do {
    uVar4 = (uint)*puVar5;
    uVar3 = (uint)puVar5[-1];
    puVar5 = puVar5 + 2;
    uVar1 = *(undefined4 *)(param_1 + uVar3 * 8);
    uVar2 = *(undefined4 *)(param_1 + 4 + uVar3 * 8);
    *(undefined4 *)(param_1 + uVar3 * 8) = *(undefined4 *)(param_1 + uVar4 * 8);
    *(undefined4 *)(param_1 + 4 + uVar3 * 8) = *(undefined4 *)(param_1 + 4 + uVar4 * 8);
    *(undefined4 *)(param_1 + uVar4 * 8) = uVar1;
    *(undefined4 *)(param_1 + 4 + uVar4 * 8) = uVar2;
  } while ((int)puVar5 < 0x5cd6457a);
  return;
}


