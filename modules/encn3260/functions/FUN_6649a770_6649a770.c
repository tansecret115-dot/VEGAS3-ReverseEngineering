/* Module: encn3260.dll
   Function: FUN_6649a770
   Address: 6649a770
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_6649a770(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int local_8;
  
  local_8 = 0;
  if ((*(byte *)(param_1 + 0x6e) & 1) != 0) {
    return 0;
  }
  *(byte *)(param_1 + 0x6e) = *(byte *)(param_1 + 0x6e) | 1;
  if (*(int *)(param_1 + 0x6f) == 0) {
    puVar7 = *(undefined4 **)(param_1 + 0x3c);
    iVar5 = puVar7[3];
    iVar1 = puVar7[2];
    uVar4 = *(ushort *)(puVar7 + 6);
    if (iVar5 - iVar1 < 0) {
      uVar6 = (uint)*(ushort *)(puVar7 + 5);
    }
    else {
      uVar6 = 0;
    }
    uVar3 = (**(code **)*puVar7)();
    uVar2 = (ulonglong)(((uint)uVar4 - ((iVar5 - iVar1) + uVar6)) - 1 & 0xffff) /
            (ulonglong)(longlong)(int)(uint)uVar3;
    if (((short)uVar2 != 0) && ((*(byte *)(param_1 + 0x6c) & 1) == 0)) {
      *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) | 1;
      iVar5 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x1c))(*(int **)(param_1 + 0x1c),(int)uVar2)
      ;
      if ((iVar5 == -0x7ffbffb2) || ((iVar5 == -0x7ffbffac || (iVar5 == 0)))) {
        local_8 = 0;
      }
      else {
        local_8 = FUN_66497130(iVar5);
      }
    }
  }
  if ((local_8 != 0) && (*(int *)(param_1 + 0x6f) == 0)) {
    *(int *)(param_1 + 0x6f) = local_8;
  }
  if (*(int *)(param_1 + 0x6f) == 0) {
    puVar7 = *(undefined4 **)(param_1 + 0x3c);
    iVar5 = puVar7[3];
    iVar1 = puVar7[2];
    if (iVar5 - iVar1 < 0) {
      uVar6 = (uint)*(ushort *)(puVar7 + 5);
    }
    else {
      uVar6 = 0;
    }
    uVar4 = (**(code **)*puVar7)();
    uVar2 = (ulonglong)((iVar5 - iVar1) + uVar6 & 0xffff) / (ulonglong)(longlong)(int)(uint)uVar4;
    if ((*(byte *)(param_1 + 0x6c) & 4) != 0) {
      piVar8 = (int *)0x0;
      uVar4 = (ushort)uVar2;
      if (((uVar4 != 0) && ((*(byte *)(param_1 + 0x6d) & 2) != 0)) &&
         ((*(byte *)(param_1 + 0x6e) & 0x20) != 0)) {
        local_8 = 0;
        iVar5 = FUN_6649bb40(param_1);
        if (iVar5 != 0) {
          *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfb;
          uVar6 = (uint)uVar2;
          if (*(ushort *)(param_1 + 0x36) < uVar4) {
            uVar6 = (uint)*(ushort *)(param_1 + 0x36);
          }
          puVar7 = operator_new(0x28);
          if (puVar7 != (undefined4 *)0x0) {
            piVar8 = (int *)FUN_664bad50(puVar7);
          }
          (**(code **)(*piVar8 + 4))(piVar8);
          (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(undefined4 *)(param_1 + 100),uVar6);
          (**(code **)(*piVar8 + 0x10))(piVar8,*(undefined4 *)(param_1 + 100),uVar6);
          (**(code **)(**(int **)(param_1 + 0x14) + 0x10))(*(int **)(param_1 + 0x14),0,piVar8);
          (**(code **)(*piVar8 + 8))(piVar8);
        }
      }
    }
    piVar8 = *(int **)(param_1 + 0x81);
    if ((piVar8 != (int *)0x0) && ((*(byte *)(param_1 + 0x6c) & 4) != 0)) {
      (**(code **)(*piVar8 + 0x10))(piVar8,0,*(undefined4 *)(param_1 + 0x10),0x32,0);
    }
  }
  else if ((*(byte *)(param_1 + 0x6c) & 4) != 0) {
    iVar5 = FUN_6649bb40(param_1);
    if (iVar5 != 0) {
      *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfb;
      (**(code **)(**(int **)(param_1 + 0x14) + 0x10))
                (*(int **)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x6f),0);
      *(byte *)(param_1 + 0x6e) = *(byte *)(param_1 + 0x6e) & 0xfe;
      return local_8;
    }
  }
  *(byte *)(param_1 + 0x6e) = *(byte *)(param_1 + 0x6e) & 0xfe;
  return local_8;
}


