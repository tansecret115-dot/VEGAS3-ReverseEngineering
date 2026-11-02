/* Module: rmme3260.dll
   Function: FUN_662555b0
   Address: 662555b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662555b0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  void *pvVar6;
  uint uVar7;
  
  pvVar6 = (void *)0x0;
  if ((*(int *)(param_1 + 0x14) != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    pvVar6 = operator_new(*(int *)(param_1 + 0x1c) << 2);
    uVar7 = 0;
    if (*(int *)(param_1 + 0x1c) != 0) {
      do {
        piVar1 = *(int **)(*(int *)(param_1 + 0x14) + uVar7 * 4);
        *(int **)((int)pvVar6 + uVar7 * 4) = piVar1;
        (**(code **)(*piVar1 + 4))(piVar1);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_1 + 0x1c));
    }
  }
  puVar5 = (undefined4 *)FUN_66255700();
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  if (puVar5[5] != 0) {
    puVar5[6] = 0;
    if (puVar5[7] != 0) {
      do {
        piVar1 = *(int **)(puVar5[5] + puVar5[6] * 4);
        (**(code **)(*piVar1 + 8))(piVar1);
        iVar4 = puVar5[6];
        puVar5[6] = iVar4 + 1U;
      } while (iVar4 + 1U < (uint)puVar5[7]);
    }
    operator_delete((void *)puVar5[5]);
    puVar5[6] = 0;
  }
  puVar5[5] = pvVar6;
  puVar5[7] = uVar3;
  puVar5[6] = uVar2;
  (**(code **)*puVar5)(puVar5,&DAT_6626b028,param_2);
  return;
}


