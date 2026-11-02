/* Module: encn3260.dll
   Function: FUN_6649a960
   Address: 6649a960
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_6649a960(int param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  int local_8;
  
  local_8 = 0;
  if ((*(byte *)(param_1 + 0x6e) & 2) != 0) {
    return 0;
  }
  puVar6 = *(undefined4 **)(param_1 + 0x38);
  *(byte *)(param_1 + 0x6e) = *(byte *)(param_1 + 0x6e) | 2;
  iVar1 = puVar6[3];
  iVar2 = puVar6[2];
  if (iVar1 - iVar2 < 0) {
    uVar8 = (uint)*(ushort *)(puVar6 + 5);
  }
  else {
    uVar8 = 0;
  }
  uVar4 = (**(code **)*puVar6)();
  uVar3 = (ulonglong)((iVar1 - iVar2) + uVar8 & 0xffff) / (ulonglong)(longlong)(int)(uint)uVar4;
  uVar5 = (undefined4)uVar3;
  if ((short)uVar3 != 0) {
    (**(code **)(**(int **)(param_1 + 0x38) + 0xc))(*(undefined4 *)(param_1 + 0x5c),uVar5);
    puVar6 = operator_new(0x28);
    if (puVar6 == (undefined4 *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = (int *)FUN_664bad50(puVar6);
    }
    (**(code **)(*piVar7 + 4))(piVar7);
    (**(code **)(*piVar7 + 0x10))(piVar7,*(undefined4 *)(param_1 + 0x5c),uVar5);
    local_8 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))(*(int **)(param_1 + 0x1c),piVar7);
    (**(code **)(*piVar7 + 8))(piVar7);
  }
  if (local_8 != 0) {
    if ((local_8 == -0x7ffbffb2) || (local_8 == -0x7ffbffac)) {
      (**(code **)(**(int **)(param_1 + 0x38) + 0x10))(*(undefined4 *)(param_1 + 0x5c),uVar5);
      local_8 = 0;
    }
    else {
      local_8 = FUN_66497130(local_8);
    }
    if (local_8 != 0) goto LAB_6649aa9e;
  }
  if ((*(byte *)(param_1 + 0x6d) & 0x80) == 0) {
    puVar6 = *(undefined4 **)(param_1 + 0x38);
    iVar1 = puVar6[3];
    iVar2 = puVar6[2];
    if (iVar1 - iVar2 < 0) {
      uVar8 = (uint)*(ushort *)(puVar6 + 5);
    }
    else {
      uVar8 = 0;
    }
    uVar4 = (**(code **)*puVar6)();
    if ((short)((ulonglong)((iVar1 - iVar2) + uVar8 & 0xffff) /
               (ulonglong)(longlong)(int)(uint)uVar4) != 0) {
      (**(code **)(**(int **)(param_1 + 0x81) + 0x10))
                (*(int **)(param_1 + 0x81),1,*(undefined4 *)(param_1 + 0x10),0x32,0);
    }
  }
LAB_6649aa9e:
  *(byte *)(param_1 + 0x6e) = *(byte *)(param_1 + 0x6e) & 0xfd;
  return local_8;
}


