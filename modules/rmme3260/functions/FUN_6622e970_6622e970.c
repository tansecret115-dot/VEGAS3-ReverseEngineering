/* Module: rmme3260.dll
   Function: FUN_6622e970
   Address: 6622e970
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_6622e970(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  uint local_c;
  uint local_8;
  
  iVar8 = 0;
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 0x40;
  puVar6 = *(undefined4 **)(param_1 + 0x26);
  iVar4 = puVar6[3];
  local_c = (uint)*(ushort *)(puVar6 + 6);
  iVar1 = puVar6[2];
  if (iVar4 - iVar1 < 0) {
    uVar5 = (uint)*(ushort *)(puVar6 + 5);
  }
  else {
    uVar5 = 0;
  }
  uVar3 = (**(code **)*puVar6)();
  uVar2 = (ulonglong)((local_c - ((iVar4 - iVar1) + uVar5)) - 1 & 0xffff) /
          (ulonglong)(longlong)(int)(uint)uVar3;
  local_8 = (uint)uVar2;
  if ((short)uVar2 != 0) {
    iVar4 = (**(code **)(**(int **)(param_1 + 0x14) + 0x30))
                      (*(undefined4 *)(param_1 + 0x3e),&local_8);
    if (iVar4 == 0) {
      iVar8 = 0;
      if ((short)local_8 != 0) {
        (**(code **)(**(int **)(param_1 + 0x26) + 0x10))(*(undefined4 *)(param_1 + 0x3e),local_8);
      }
    }
    else {
      iVar8 = FUN_6622d650(iVar4);
    }
  }
  puVar6 = *(undefined4 **)(param_1 + 0x26);
  iVar4 = puVar6[3];
  iVar1 = puVar6[2];
  if (iVar4 - iVar1 < 0) {
    uVar5 = (uint)*(ushort *)(puVar6 + 5);
  }
  else {
    uVar5 = 0;
  }
  uVar3 = (**(code **)*puVar6)();
  uVar2 = (ulonglong)((iVar4 - iVar1) + uVar5 & 0xffff) / (ulonglong)(longlong)(int)(uint)uVar3;
  local_8 = (uint)uVar2;
  if (((*(byte *)(param_1 + 0x20) & 1) != 0) && ((short)uVar2 != 0)) {
    iVar4 = FUN_6622edd0(param_1);
    if (iVar4 == 0) {
      *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xbf;
      return 0;
    }
    bVar9 = *(ushort *)(param_1 + 0x1e) < (ushort)local_8;
    *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfe;
    if (bVar9) {
      local_8 = CONCAT22((short)((uint)iVar4 >> 0x10),*(ushort *)(param_1 + 0x1e));
    }
    puVar6 = operator_new(0x28);
    if (puVar6 == (undefined4 *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = (int *)FUN_662522d0(puVar6);
    }
    (**(code **)(*piVar7 + 4))(piVar7);
    (**(code **)(**(int **)(param_1 + 0x26) + 0xc))(*(undefined4 *)(param_1 + 0x3e),local_8);
    (**(code **)(*piVar7 + 0x10))(piVar7,*(undefined4 *)(param_1 + 0x3e),local_8 & 0xffff);
    (**(code **)(**(int **)(param_1 + 0x10) + 0x10))(*(int **)(param_1 + 0x10),0,piVar7);
    (**(code **)(*piVar7 + 8))(piVar7);
    iVar8 = 0;
  }
  if (iVar8 != 0) {
    if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
      iVar4 = FUN_6622edd0(param_1);
      if (iVar4 == 0) {
        *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xbf;
        return 0;
      }
      *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfe;
      (**(code **)(**(int **)(param_1 + 0x10) + 0x10))(*(int **)(param_1 + 0x10),iVar8,0);
    }
    if (iVar8 != 0) goto LAB_6622eb2f;
  }
  if (((*(byte *)(param_1 + 0x20) & 1) != 0) &&
     (piVar7 = *(int **)(param_1 + 0x4c), piVar7 != (int *)0x0)) {
    (**(code **)(*piVar7 + 0x10))(piVar7,0,*(undefined4 *)(param_1 + 0x48),0x32,0);
  }
LAB_6622eb2f:
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xbf;
  return iVar8;
}


