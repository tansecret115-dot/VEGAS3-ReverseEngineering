/* Module: vidcap30.exe
   Function: FUN_00412d40
   Address: 00412d40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00412d40(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  DWORD DVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  
  piVar3 = param_1;
  if (param_1 != (int *)0x0) {
    if ((param_1[2] & 4U) != 0) {
      FUN_00413190(*param_1,param_1 + 1,1,(uint)param_1[2] >> 3 & 1);
    }
    piVar1 = param_1 + 4;
    if (((param_1[6] & 4U) != 0) && (*piVar1 != *param_1)) {
      FUN_00413190(*piVar1,param_1 + 5,2,(uint)param_1[6] >> 3 & 1);
    }
    piVar2 = param_1 + 8;
    if ((((param_1[10] & 4U) != 0) && (iVar6 = *piVar2, iVar6 != *param_1)) && (iVar6 != *piVar1)) {
      FUN_00413190(iVar6,param_1 + 9,3,(uint)param_1[10] >> 3 & 1);
    }
    if ((param_1[0xe] & 4U) != 0) {
      FUN_00413190(param_1[0xc],param_1 + 0xd,2,(uint)param_1[0xe] >> 3 & 1);
    }
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_00413190(param_1[0x18],param_1 + 0x19,2,(uint)param_1[0x1a] >> 3 & 1);
    }
    if ((param_1[0x12] & 4U) != 0) {
      FUN_00413190(param_1[0x10],param_1 + 0x11,2,(uint)param_1[0x12] >> 3 & 1);
    }
    if ((param_1[0x16] & 4U) != 0) {
      FUN_00413190(param_1[0x14],param_1 + 0x15,2,(uint)param_1[0x16] >> 3 & 1);
    }
    if ((param_1[0x1e] & 4U) != 0) {
      FUN_00413190(param_1[0x1c],param_1 + 0x1d,2,(uint)param_1[0x1e] >> 3 & 1);
    }
    if ((param_1[0x22] & 4U) != 0) {
      FUN_00413190(param_1[0x20],param_1 + 0x21,2,(uint)param_1[0x22] >> 3 & 1);
    }
    if ((param_1[0x2e] & 4U) != 0) {
      FUN_00413190(param_1[0x2c],param_1 + 0x2d,2,(uint)param_1[0x2e] >> 3 & 1);
    }
    if ((param_1[0x26] & 4U) != 0) {
      FUN_00413190(param_1[0x24],param_1 + 0x25,2,(uint)param_1[0x26] >> 3 & 1);
    }
    if ((param_1[0x2a] & 4U) != 0) {
      FUN_00413190(param_1[0x28],param_1 + 0x29,2,(uint)param_1[0x2a] >> 3 & 1);
    }
    if ((param_1[0x32] & 4U) != 0) {
      FUN_00413190(param_1[0x30],param_1 + 0x31,2,(uint)param_1[0x32] >> 3 & 1);
    }
    if ((param_1[0x36] & 4U) != 0) {
      FUN_00413190(param_1[0x34],param_1 + 0x35,2,(uint)param_1[0x36] >> 3 & 1);
    }
    if ((param_1[0x3a] & 4U) != 0) {
      FUN_00413190(param_1[0x38],param_1 + 0x39,2,(uint)param_1[0x3a] >> 3 & 1);
    }
    if ((param_1[0x3e] & 4U) != 0) {
      FUN_00413190(param_1[0x3c],param_1 + 0x3d,2,(uint)param_1[0x3e] >> 3 & 1);
    }
    param_1[2] = (uint)(*param_1 == 0) << 5 | param_1[2] & 0xffffffdfU;
    FUN_004139b0(param_1,1);
    param_1[6] = (uint)(*piVar1 == 0) << 5 | param_1[6] & 0xffffffdfU;
    FUN_004139b0(piVar1,2);
    param_1[10] = (uint)(*piVar2 == 0) << 5 | param_1[10] & 0xffffffdfU;
    FUN_004139b0(piVar2,3);
    DAT_005bba78 = FUN_00413810();
    DVar5 = GetSysColor(0xe);
    _DAT_005bba7c =
         (uint)CONCAT11((char)(((DAT_005bba78 >> 0x10 & 0xff) + (DVar5 >> 0x10 & 0xff)) / 2),
                        (char)(((DAT_005bba78 >> 8 & 0xff) + (DVar5 >> 8 & 0xff)) / 2)) << 8 |
         ((DAT_005bba78 & 0xff) + (DVar5 & 0xff)) / 2;
    DVar5 = GetSysColor(0xf);
    bVar4 = (byte)DVar5;
    bVar10 = bVar4;
    if (0xf7 < bVar4) {
      bVar10 = 0xf7;
    }
    bVar7 = (byte)(DVar5 >> 8);
    param_1._0_1_ = bVar7;
    if (0xf7 < bVar7) {
      param_1._0_1_ = 0xf7;
    }
    bVar8 = (byte)(DVar5 >> 0x10);
    bVar9 = bVar8;
    if (0xf7 < bVar8) {
      bVar9 = 0xf7;
    }
    _DAT_005bba80 = (uint)CONCAT21(CONCAT11(bVar9 + 8,(byte)param_1 + 8),bVar10 + 8);
    if (0xef < bVar4) {
      bVar4 = 0xef;
    }
    if (0xef < bVar7) {
      bVar7 = 0xef;
    }
    if (0xef < bVar8) {
      bVar8 = 0xef;
    }
    DAT_005bba84 = (uint)CONCAT21(CONCAT11(bVar8 + 0x10,bVar7 + 0x10),bVar4 + 0x10);
    if ((HIMAGELIST)piVar3[0x6f] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)piVar3[0x6f]);
      iVar6 = _TabControl_GenerateTransitions_8(0,piVar3 + 0x6d);
      piVar3[0x6f] = iVar6;
    }
    if ((HIMAGELIST)piVar3[0x72] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)piVar3[0x72]);
      iVar6 = _TabControl_GenerateTransitions_8(1,piVar3 + 0x70);
      piVar3[0x72] = iVar6;
    }
  }
  return;
}


