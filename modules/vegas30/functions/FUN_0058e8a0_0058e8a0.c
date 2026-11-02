/* Module: vegas30.exe
   Function: FUN_0058e8a0
   Address: 0058e8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0058e8a0(uint param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  DWORD DVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  BOOL BVar7;
  DWORD DVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  bool bVar16;
  longlong lVar17;
  undefined8 uVar18;
  
  DVar3 = param_1;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar6 = *(int *)(param_1 + 0x2c);
  uVar9 = *(uint *)(param_1 + 0x28);
  uVar10 = *(uint *)(param_1 + 200);
  uVar5 = (uint)*(ushort *)(*(int *)(*(int *)(param_1 + 0x18) + 0x2c) + 0xc);
  lVar17 = __allmul(uVar5,0,uVar9,iVar6);
  uVar2 = lVar17 + CONCAT44(*(int *)(DVar3 + 0xcc),uVar10);
  uVar13 = (uint)uVar2;
  param_1 = uVar13 & 0x7ff;
  if ((uVar2 & 0x7ff) != 0) {
    uVar14 = uVar13 - param_1;
    iVar12 = (int)(uVar2 >> 0x20) - (uint)(uVar13 < param_1);
    uVar2 = CONCAT44(iVar12,uVar14);
    iVar11 = (iVar12 - *(int *)(DVar3 + 0xcc)) - (uint)(uVar14 < uVar10);
    uVar18 = __alldiv(uVar14 - uVar10,iVar11,uVar5,0);
    *(undefined8 *)(DVar3 + 0x28) = uVar18;
    iVar11 = __allrem(uVar14 - uVar10,iVar11,uVar5,0);
    if (iVar11 != 0) {
      if ((int)param_1 < iVar11) {
        bVar16 = 0x7ff < uVar14;
        uVar14 = uVar14 - 0x800;
        iVar12 = iVar12 + -1 + (uint)bVar16;
        iVar11 = __allrem(uVar14 - uVar10,
                          (iVar12 - *(int *)(DVar3 + 0xcc)) - (uint)(uVar14 < uVar10),uVar5,0);
      }
      uVar2 = CONCAT44(iVar12,uVar14);
      param_1 = (int)(uVar5 - iVar11) % (int)uVar5;
      uVar18 = __alldiv((param_1 - uVar10) + uVar14,
                        ((((int)param_1 >> 0x1f) - *(int *)(DVar3 + 0xcc)) -
                        (uint)(param_1 < uVar10)) + iVar12 + (uint)CARRY4(param_1 - uVar10,uVar14),
                        uVar5,0);
      *(undefined8 *)(DVar3 + 0x28) = uVar18;
      *(uint *)(DVar3 + 0x20) = *(int *)(DVar3 + 8) + param_1;
    }
  }
  piVar4 = param_2;
  param_1 = *(uint *)(DVar3 + 0xc);
  *(ulonglong *)(DVar3 + 0xe0) = uVar2;
  lVar17 = uVar2 + CONCAT44((((int)param_1 >> 0x1f) - *(int *)(DVar3 + 0xcc)) -
                            (uint)(param_1 < uVar10),param_1 - uVar10);
  iVar11 = (int)((ulonglong)lVar17 >> 0x20);
  if ((*(int *)(DVar3 + 0xd4) <= iVar11) &&
     ((*(int *)(DVar3 + 0xd4) < iVar11 || (*(uint *)(DVar3 + 0xd0) < (uint)lVar17)))) {
    param_1 = (uVar10 - (int)uVar2) + *(int *)(DVar3 + 0xd0);
  }
  puVar15 = *(undefined4 **)(DVar3 + 8);
  uVar10 = *(uint *)(DVar3 + 0x28);
  *(uint *)(DVar3 + 0x30) = param_1;
  uVar13 = (int)((int)puVar15 + (param_1 - *(int *)(DVar3 + 0x20))) / (int)uVar5;
  iVar11 = *(int *)(DVar3 + 0x2c);
  *(uint *)(DVar3 + 0x34) = uVar13;
  if ((iVar11 <= iVar6) && ((iVar11 < iVar6 || (uVar10 <= uVar9)))) {
    iVar11 = ((int)uVar13 >> 0x1f) + iVar11 + (uint)CARRY4(uVar13,uVar10);
    if ((iVar6 <= iVar11) && ((iVar6 < iVar11 || (uVar9 < uVar13 + uVar10)))) {
      iVar6 = FUN_0058e790(iVar1,DVar3,param_2);
      if (iVar6 < 0) {
        (**(code **)(*piVar4 + 8))(piVar4);
        return iVar6;
      }
      if ((DAT_006471f0 != 0) || (DAT_006484f8 != 0)) {
        *(undefined4 *)(*(int *)(DVar3 + 0xbc) + 0x14) = 1;
        _SfQueueInsert_8(iVar1 + 0x890,*(undefined4 *)(DVar3 + 0xbc));
        return 1;
      }
      param_1 = param_1 + 0x7ff & 0xfffff800;
      BVar7 = ReadFile(*(HANDLE *)(DVar3 + 0xc0),*(LPVOID *)(DVar3 + 8),param_1,&param_1,
                       (LPOVERLAPPED)(DVar3 + 0xd8));
      if (BVar7 != 0) {
        FUN_0058e2d0(DVar3);
        return 0;
      }
      DVar8 = GetLastError();
      if (DVar8 != 0x3e5) {
        FUN_0058e2d0(DVar3);
        return -0x7ffb1ff8;
      }
      return 1;
    }
  }
  uVar10 = *(uint *)(DVar3 + 0xc);
  *(uint *)(DVar3 + 0x28) = uVar9;
  *(uint *)(DVar3 + 0x30) = uVar10;
  *(int *)(DVar3 + 0x2c) = iVar6;
  *(undefined4 **)(DVar3 + 0x20) = puVar15;
  *(int *)(DVar3 + 0x34) = (int)uVar10 / (int)uVar5;
  for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined1 *)puVar15 = 0;
    puVar15 = (undefined4 *)((int)puVar15 + 1);
  }
  *(undefined4 *)(DVar3 + 0x48) = 0;
  if (*(int *)(DVar3 + 0xc0) != 0) {
    (**(code **)(*param_2 + 0x44))(param_2,*(int *)(DVar3 + 0xc0));
    *(undefined4 *)(DVar3 + 0xc0) = 0;
  }
  (**(code **)(*piVar4 + 8))(piVar4);
  return 0;
}


