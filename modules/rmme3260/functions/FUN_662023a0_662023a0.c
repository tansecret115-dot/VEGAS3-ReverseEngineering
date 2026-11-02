/* Module: rmme3260.dll
   Function: FUN_662023a0
   Address: 662023a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662023a0(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int local_8;
  
  iVar2 = 0;
  puVar1 = (undefined4 *)0x0;
  local_8 = 0;
  if (param_1[6] == 0) {
    return -0x7ffbfff9;
  }
  if (0 < param_1[8]) {
    do {
      FUN_66212200((void *)param_1[6],*(int **)(param_1[7] + iVar2 * 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[8]);
  }
  if (param_1[0xb] != 0) {
    puVar1 = operator_new(0x73);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_66212230(puVar1);
    }
    if (puVar1 == (undefined4 *)0x0) {
      local_8 = -0x7ff8fff2;
    }
    if (local_8 < 0) goto LAB_66202448;
    local_8 = (**(code **)*puVar1)(puVar1,param_1[0xb]);
    if (local_8 < 0) goto LAB_66202448;
    local_8 = FUN_6620afd0((void *)param_1[6],puVar1);
  }
  if (-1 < local_8) {
    local_8 = (**(code **)(*(int *)param_1[6] + 0x50))(param_2);
  }
LAB_66202448:
  if (puVar1 != (undefined4 *)0x0) {
    FUN_66212250(puVar1);
    operator_delete(puVar1);
  }
  (**(code **)(*param_1 + 0x30))(param_1);
  return local_8;
}


