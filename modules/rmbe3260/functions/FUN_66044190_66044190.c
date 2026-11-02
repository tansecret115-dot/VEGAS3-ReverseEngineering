/* Module: rmbe3260.dll
   Function: FUN_66044190
   Address: 66044190
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_66044190(int param_1)

{
  int *piVar1;
  double dVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined2 extraout_var;
  uint uVar8;
  ulonglong local_18;
  int local_8;
  
  local_8 = 0;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar5 = (**(code **)(**(int **)(param_1 + 4) + 0xac))();
    uVar5 = (uVar5 & 0xffff) / *(uint *)(param_1 + 0x24);
    uVar8 = *(int *)(param_1 + 0x2e) * uVar5;
    *(uint *)(param_1 + 0x46b) = uVar5;
    *(uint *)(param_1 + 0x473) = uVar8;
    pvVar6 = operator_new(uVar8);
    *(void **)(param_1 + 0xc) = pvVar6;
    if (pvVar6 == (void *)0x0) {
      local_8 = -0x7ff8fff2;
    }
    piVar1 = *(int **)(param_1 + 4);
    uVar3 = (**(code **)(*piVar1 + 0xac))();
    dVar2 = (double)uVar3 * _DAT_66068188;
    uVar5 = (**(code **)(*piVar1 + 0xb0))();
    *(double *)(param_1 + 0x497) = dVar2 / (double)uVar5;
  }
  else {
    uVar7 = (**(code **)(**(int **)(param_1 + 4) + 200))();
    *(undefined4 *)(param_1 + 0x46f) = uVar7;
    uVar7 = (**(code **)(**(int **)(param_1 + 4) + 0xcc))();
    *(undefined4 *)(param_1 + 0x473) = uVar7;
    *(uint *)(param_1 + 0x46b) = *(uint *)(param_1 + 0x46f) / *(uint *)(param_1 + 0x24);
    pvVar6 = operator_new(*(uint *)(param_1 + 0x46f));
    *(void **)(param_1 + 0xc) = pvVar6;
    pvVar6 = operator_new(*(uint *)(param_1 + 0x473));
    *(void **)(param_1 + 0x47f) = pvVar6;
    if ((*(int *)(param_1 + 0xc) == 0) || (pvVar6 == (void *)0x0)) {
      local_8 = -0x7ff8fff2;
    }
    dVar2 = (double)*(uint *)(param_1 + 0x46f) * _DAT_66068188;
    uVar5 = (**(code **)(**(int **)(param_1 + 4) + 0xb0))();
    piVar1 = *(int **)(param_1 + 4);
    *(double *)(param_1 + 0x497) = dVar2 / (double)uVar5;
    uVar4 = FUN_66045e80(param_1);
    uVar5 = (**(code **)(*piVar1 + 0xb0))();
    local_18 = (ulonglong)uVar5;
    *(float *)(param_1 + 0x4a5) =
         (float)(uint)(CONCAT22(extraout_var,uVar4) * 0x3c) / (float)local_18;
  }
  if (local_8 == 0) {
    pvVar6 = operator_new(*(int *)(param_1 + 0x2a) * (uint)*(ushort *)(param_1 + 0x1a) * 2);
    *(void **)(param_1 + 8) = pvVar6;
    if (pvVar6 == (void *)0x0) {
      local_8 = -0x7ff8fff2;
    }
    if (local_8 == 0) {
      return 0;
    }
  }
  FUN_66044350(param_1);
  if (local_8 != 0) {
    *(int *)(param_1 + 0x487) = local_8;
  }
  return local_8;
}


