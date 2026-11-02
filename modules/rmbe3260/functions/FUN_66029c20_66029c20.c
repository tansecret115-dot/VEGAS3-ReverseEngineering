/* Module: rmbe3260.dll
   Function: FUN_66029c20
   Address: 66029c20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66029c20(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int local_8;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_66063e30;
  param_1[3] = param_1;
  param_1[4] = &PTR_LAB_66067700;
  param_1[5] = &PTR_LAB_660676e8;
  FUN_6605b650(param_1 + 7);
  *param_1 = &PTR_FUN_660676c0;
  param_1[4] = &PTR_LAB_66067690;
  param_1[5] = &PTR_LAB_66067678;
  param_1[0xe] = 0;
  uVar2 = FUN_66004760();
  puVar1 = param_1 + 0x1c;
  param_1[0xd] = uVar2;
  iVar3 = FUN_660130d0(puVar1);
  if (iVar3 < 0) {
    *puVar1 = 0;
  }
  puVar4 = operator_new(0x58);
  if (puVar4 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = FUN_6602a9f0(puVar4);
  }
  param_1[0xf] = piVar5;
  (**(code **)(*piVar5 + 4))(piVar5);
  FUN_6602a8c0((void *)(param_1[0xf] + 0x2c),(int *)*puVar1);
  piVar5 = param_1 + 0x10;
  local_8 = 0xc;
  do {
    puVar4 = operator_new(0x3c);
    if (puVar4 == (undefined4 *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = FUN_6602add0(puVar4);
    }
    *piVar5 = (int)piVar6;
    (**(code **)(*piVar6 + 4))(piVar6);
    FUN_6602a8c0((void *)(*piVar5 + 0x14),(int *)*puVar1);
    piVar5 = piVar5 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return param_1;
}


