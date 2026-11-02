/* Module: encn3260.dll
   Function: FUN_664c2be0
   Address: 664c2be0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664c2be0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *local_8;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = 0;
  local_8 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0x20) != 0) {
    local_8 = operator_new(*(int *)(param_1 + 0x20) << 2);
    puVar5 = local_8;
    for (puVar4 = *(undefined4 **)(param_1 + 0x18); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[2]) {
      piVar1 = (int *)*puVar4;
      *puVar5 = piVar1;
      (**(code **)(*piVar1 + 4))(piVar1);
      puVar5 = puVar5 + 1;
    }
  }
  puVar4 = (undefined4 *)FUN_664c23e0();
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  if (puVar4[5] != 0) {
    puVar4[6] = 0;
    if (puVar4[7] != 0) {
      do {
        piVar1 = *(int **)(puVar4[5] + puVar4[6] * 4);
        (**(code **)(*piVar1 + 8))(piVar1);
        iVar3 = puVar4[6];
        puVar4[6] = iVar3 + 1U;
      } while (iVar3 + 1U < (uint)puVar4[7]);
    }
    operator_delete((void *)puVar4[5]);
    puVar4[6] = 0;
  }
  puVar4[5] = local_8;
  puVar4[7] = uVar2;
  puVar4[6] = 0;
  (**(code **)*puVar4)(puVar4,&DAT_664dd1c0,param_2);
  return 0;
}


