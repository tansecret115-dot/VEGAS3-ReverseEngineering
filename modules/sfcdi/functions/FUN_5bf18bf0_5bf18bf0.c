/* Module: sfcdi.dll
   Function: FUN_5bf18bf0
   Address: 5bf18bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf18bf0(int param_1,undefined4 *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  piVar1 = (int *)(param_1 + 0x4c + *(int *)(param_1 + 0x40) * 0x28);
  FUN_5bf18ab0(param_1);
  puVar4 = (undefined4 *)(piVar1[4] + *piVar1);
  for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_2 = *puVar4;
    puVar4 = puVar4 + 1;
    param_2 = param_2 + 1;
  }
  for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)param_2 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  iVar2 = piVar1[4];
  piVar1[4] = iVar2 + param_3;
  if (iVar2 + param_3 == piVar1[2]) {
    piVar1[4] = 0;
    piVar1[3] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
    uVar3 = FUN_5bf18b30(*(int *)(param_1 + 0x40));
    *(uint *)(param_1 + 0x40) = uVar3;
  }
  return 0;
}


