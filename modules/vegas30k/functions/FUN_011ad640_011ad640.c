/* Module: vegas30k.dll
   Function: FUN_011ad640
   Address: 011ad640
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_011ad640(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  
  uVar5 = param_3;
  piVar3 = param_1;
  piVar6 = param_1;
  for (puVar1 = (undefined4 *)param_1[0x19d]; puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[6]) {
    if (((int)piVar6 < 0) ||
       ((((puVar1[3] & 0x10) != 0 && ((puVar1[3] & 1) != 0)) &&
        (piVar6 = (int *)(**(code **)(*(int *)*puVar1 + 0xe4))((int *)*puVar1,param_2,uVar5),
        (int)piVar6 < 0)))) goto LAB_011ad775;
  }
  if ((int)piVar6 < 0) {
LAB_011ad775:
    for (puVar1 = (undefined4 *)piVar3[0x19d]; puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[6]) {
      if ((*(byte *)(puVar1 + 3) & 0x20) != 0) {
        (**(code **)(*(int *)*puVar1 + 0xe0))((int *)*puVar1);
      }
    }
  }
  else {
    if (((piVar3[0x186] != 0) && ((piVar3[2] & 0x4000U) == 0)) &&
       (piVar2 = *(int **)(piVar3[0x186] + 0x28), (*(byte *)(piVar2 + 8) & 0x20) == 0)) {
      (**(code **)(*piVar2 + 0xe4))(piVar2,param_2,uVar5);
    }
    piVar3[2] = piVar3[2] | 8;
    if (piVar3[0xa1] != 0) {
      piVar3[0xa1] = 0;
    }
    FUN_011a89d0(param_2,uVar5);
    uVar4 = param_2;
    for (puVar1 = (undefined4 *)piVar3[0x1a3]; param_2 = uVar4, puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[6]) {
      (*(code *)**(undefined4 **)*puVar1)((undefined4 *)*puVar1,&DAT_011d9ca0,&param_1);
      if (param_1 != (int *)0x0) {
        if ((*(byte *)(puVar1 + 3) & 0x10) != 0) {
          piVar6 = (int *)(**(code **)(*param_1 + 0x68))(param_1,param_2,uVar5);
        }
        (**(code **)(*param_1 + 8))(param_1);
      }
      uVar4 = param_2;
    }
    if (-1 < (int)piVar6) {
      piVar6 = (int *)FUN_011bbba0(piVar3,uVar4,uVar5);
      if ((int)piVar6 < 0) {
        (**(code **)(*piVar3 + 0x130))(piVar3);
      }
      else {
        piVar3 = (int *)piVar3[0x19b];
        if (piVar3 != (int *)0x0) {
          piVar6 = (int *)(**(code **)(*piVar3 + 0x58))(piVar3,uVar4,uVar5);
          return piVar6;
        }
      }
      return piVar6;
    }
  }
  return piVar6;
}


