/* Module: encn3260.dll
   Function: FUN_6649aab0
   Address: 6649aab0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_6649aab0(void *param_1)

{
  int iVar1;
  ulonglong uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_8;
  
  local_8 = 0;
  if ((*(byte *)((int)param_1 + 0x6e) & 4) != 0) {
    return 0;
  }
  *(byte *)((int)param_1 + 0x6e) = *(byte *)((int)param_1 + 0x6e) | 4;
  if ((*(byte *)((int)param_1 + 0x6d) & 2) != 0) {
    puVar5 = *(undefined4 **)((int)param_1 + 0x44);
    iVar9 = puVar5[3];
    iVar8 = puVar5[2];
    if (iVar9 - iVar8 < 0) {
      uVar7 = (uint)*(ushort *)(puVar5 + 5);
    }
    else {
      uVar7 = 0;
    }
    uVar3 = (**(code **)*puVar5)();
    if (((short)((ulonglong)((iVar9 - iVar8) + uVar7 & 0xffff) /
                (ulonglong)(longlong)(int)(uint)uVar3) == 0) &&
       ((*(byte *)((int)param_1 + 0x6c) & 2) == 0)) {
      FUN_6649b430(param_1);
    }
  }
  if ((*(byte *)((int)param_1 + 0x6c) & 0x20) == 0) {
LAB_6649abf9:
    iVar9 = local_8;
    if (local_8 != 0) goto LAB_6649ac70;
  }
  else {
    puVar5 = *(undefined4 **)((int)param_1 + 0x44);
    iVar9 = puVar5[3];
    iVar8 = puVar5[2];
    if (iVar9 - iVar8 < 0) {
      uVar7 = (uint)*(ushort *)(puVar5 + 5);
    }
    else {
      uVar7 = 0;
    }
    uVar3 = (**(code **)*puVar5)();
    uVar2 = (ulonglong)((iVar9 - iVar8) + uVar7 & 0xffff) / (ulonglong)(longlong)(int)(uint)uVar3;
    uVar4 = (undefined4)uVar2;
    if ((short)uVar2 != 0) {
      (**(code **)(**(int **)((int)param_1 + 0x44) + 0xc))
                (*(undefined4 *)((int)param_1 + 0x60),uVar4);
      puVar5 = operator_new(0x28);
      if (puVar5 == (undefined4 *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)FUN_664bad50(puVar5);
      }
      (**(code **)(*piVar6 + 4))(piVar6);
      (**(code **)(*piVar6 + 0x10))(piVar6,*(undefined4 *)((int)param_1 + 0x60),uVar4);
      local_8 = (**(code **)(**(int **)((int)param_1 + 0x20) + 0x20))
                          (*(int **)((int)param_1 + 0x20),piVar6);
      (**(code **)(*piVar6 + 8))(piVar6);
      *(byte *)((int)param_1 + 0x6c) = *(byte *)((int)param_1 + 0x6c) | 2;
      (**(code **)(**(int **)((int)param_1 + 0x20) + 0x24))(*(int **)((int)param_1 + 0x20));
    }
    iVar9 = 0;
    if (local_8 != 0) {
      if ((local_8 == -0x7ffbffb2) || (local_8 == -0x7ffbffac)) {
        (**(code **)(**(int **)((int)param_1 + 0x44) + 0x10))
                  (*(undefined4 *)((int)param_1 + 0x60),uVar4);
        local_8 = 0;
      }
      else {
        local_8 = FUN_66497130(local_8);
      }
      goto LAB_6649abf9;
    }
  }
  if ((*(byte *)((int)param_1 + 0x6d) & 0x80) == 0) {
    puVar5 = *(undefined4 **)((int)param_1 + 0x44);
    iVar8 = puVar5[3];
    iVar1 = puVar5[2];
    if (iVar8 - iVar1 < 0) {
      uVar7 = (uint)*(ushort *)(puVar5 + 5);
    }
    else {
      uVar7 = 0;
    }
    uVar3 = (**(code **)*puVar5)();
    if ((short)((ulonglong)((iVar8 - iVar1) + uVar7 & 0xffff) /
               (ulonglong)(longlong)(int)(uint)uVar3) == 0) {
      if (param_1 == (void *)0xffffffb8) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)((int)param_1 + 0x58);
      }
      if (iVar8 < 1) goto LAB_6649ac60;
    }
    (**(code **)(**(int **)((int)param_1 + 0x81) + 0x10))
              (*(int **)((int)param_1 + 0x81),2,*(undefined4 *)((int)param_1 + 0x10),0x32,0);
  }
LAB_6649ac60:
  if (iVar9 == 0) {
    iVar9 = FUN_6649a960((int)param_1);
  }
LAB_6649ac70:
  *(byte *)((int)param_1 + 0x6e) = *(byte *)((int)param_1 + 0x6e) & 0xfb;
  return iVar9;
}


