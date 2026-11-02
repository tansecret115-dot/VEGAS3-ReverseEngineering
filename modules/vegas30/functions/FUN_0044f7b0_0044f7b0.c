/* Module: vegas30.exe
   Function: FUN_0044f7b0
   Address: 0044f7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044f7b0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD DVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (param_1 != (int *)0x0) {
    if ((param_1[2] & 4U) != 0) {
      FUN_0044fb60(*param_1,param_1 + 1,1,(uint)param_1[2] >> 3 & 1);
    }
    piVar1 = param_1 + 4;
    if (((param_1[6] & 4U) != 0) && (*piVar1 != *param_1)) {
      FUN_0044fb60(*piVar1,param_1 + 5,2,(uint)param_1[6] >> 3 & 1);
    }
    piVar2 = param_1 + 8;
    if ((((param_1[10] & 4U) != 0) && (iVar6 = *piVar2, iVar6 != *param_1)) && (iVar6 != *piVar1)) {
      FUN_0044fb60(iVar6,param_1 + 9,3,(uint)param_1[10] >> 3 & 1);
    }
    if ((param_1[0xe] & 4U) != 0) {
      FUN_0044fb60(param_1[0xc],param_1 + 0xd,2,(uint)param_1[0xe] >> 3 & 1);
    }
    if ((param_1[0x12] & 4U) != 0) {
      FUN_0044fb60(param_1[0x10],param_1 + 0x11,1,(uint)param_1[0x12] >> 3 & 1);
    }
    if ((param_1[0x16] & 4U) != 0) {
      FUN_0044fb60(param_1[0x14],param_1 + 0x15,2,(uint)param_1[0x16] >> 3 & 1);
    }
    if ((param_1[0x22] & 4U) != 0) {
      FUN_0044fb60(param_1[0x20],param_1 + 0x21,2,(uint)param_1[0x22] >> 3 & 1);
    }
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_0044fb60(param_1[0x18],param_1 + 0x19,2,(uint)param_1[0x1a] >> 3 & 1);
    }
    if ((param_1[0x1e] & 4U) != 0) {
      FUN_0044fb60(param_1[0x1c],param_1 + 0x1d,2,(uint)param_1[0x1e] >> 3 & 1);
    }
    if ((param_1[0x26] & 4U) != 0) {
      FUN_0044fb60(param_1[0x24],param_1 + 0x25,2,(uint)param_1[0x26] >> 3 & 1);
    }
    if ((param_1[0x2a] & 4U) != 0) {
      FUN_0044fb60(param_1[0x28],param_1 + 0x29,2,(uint)param_1[0x2a] >> 3 & 1);
    }
    if ((param_1[0x36] & 4U) != 0) {
      FUN_0044fb60(param_1[0x34],param_1 + 0x35,2,(uint)param_1[0x36] >> 3 & 1);
    }
    if ((param_1[0x2e] & 4U) != 0) {
      FUN_0044fb60(param_1[0x2c],param_1 + 0x2d,2,(uint)param_1[0x2e] >> 3 & 1);
    }
    if ((param_1[0x32] & 4U) != 0) {
      FUN_0044fb60(param_1[0x30],param_1 + 0x31,2,(uint)param_1[0x32] >> 3 & 1);
    }
    if ((param_1[0x3a] & 4U) != 0) {
      FUN_0044fb60(param_1[0x38],param_1 + 0x39,2,(uint)param_1[0x3a] >> 3 & 1);
    }
    if ((param_1[0x3e] & 4U) != 0) {
      FUN_0044fb60(param_1[0x3c],param_1 + 0x3d,2,(uint)param_1[0x3e] >> 3 & 1);
    }
    if ((param_1[0x5a] & 4U) != 0) {
      FUN_0044fb60(param_1[0x58],param_1 + 0x59,2,(uint)param_1[0x5a] >> 3 & 1);
    }
    if ((param_1[0x5e] & 4U) != 0) {
      FUN_0044fb60(param_1[0x5c],param_1 + 0x5d,2,(uint)param_1[0x5e] >> 3 & 1);
    }
    if ((param_1[0x85] & 4U) != 0) {
      FUN_0044fb60(param_1[0x83],param_1 + 0x84,1,(uint)param_1[0x85] >> 3 & 1);
    }
    uVar3 = (uint)DAT_0064aed0;
    uVar7 = 0;
    DVar4 = GetSysColor(0xd);
    DAT_0064b528 = FUN_004501e0(DAT_00647820,DVar4,uVar3,uVar7);
    uVar3 = (uint)DAT_0064aed8;
    uVar7 = 1;
    DVar4 = GetSysColor(0xd);
    DVar5 = GetSysColor(0xf);
    DAT_0064b52c = FUN_004501e0(DVar5,DVar4,uVar3,uVar7);
    param_1[2] = (uint)(*param_1 == 0) << 5 | param_1[2] & 0xffffffdfU;
    FUN_004503a0(param_1,1);
    param_1[6] = (uint)(*piVar1 == 0) << 5 | param_1[6] & 0xffffffdfU;
    FUN_004503a0(piVar1,2);
    param_1[10] = (uint)(*piVar2 == 0) << 5 | param_1[10] & 0xffffffdfU;
    FUN_004503a0(piVar2,3);
    if ((HIMAGELIST)param_1[0x99] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0x99]);
      iVar6 = _TabControl_GenerateTransitions_8(0,param_1 + 0x97);
      param_1[0x99] = iVar6;
    }
    if ((HIMAGELIST)param_1[0x9c] != (HIMAGELIST)0x0) {
      ImageList_Destroy((HIMAGELIST)param_1[0x9c]);
      iVar6 = _TabControl_GenerateTransitions_8(1,param_1 + 0x9a);
      param_1[0x9c] = iVar6;
    }
  }
  return;
}


