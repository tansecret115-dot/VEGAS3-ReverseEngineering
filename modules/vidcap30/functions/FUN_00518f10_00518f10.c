/* Module: vidcap30.exe
   Function: FUN_00518f10
   Address: 00518f10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00518f10(byte *param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
                 int *param_7)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  pbVar1 = param_1;
  uVar5 = *(uint *)(param_1 + 0x98);
  uVar7 = 1 << ((byte)param_2 & 0x1f) & uVar5;
  uVar4 = 1 << ((byte)param_3 & 0x1f) & uVar5;
  uVar5 = 1 << ((byte)param_4 & 0x1f) & uVar5;
  if ((param_1[4] & 0x20) == 0) {
    if (param_5 == 0) {
      iVar6 = *(int *)(param_1 + 0x114);
      iVar3 = *(int *)(param_1 + param_2 * 0x20 + 0x198);
      iVar8 = *(int *)(param_1 + param_3 * 0x20 + 0x198);
      param_1 = *(byte **)(param_1 + param_4 * 0x20 + 0x198);
    }
    else {
      iVar6 = *(int *)(param_1 + 0x110);
      iVar3 = *(int *)(param_1 + param_2 * 0x20 + 0x194);
      iVar8 = *(int *)(param_1 + param_3 * 0x20 + 0x194);
      param_1 = *(byte **)(param_1 + param_4 * 0x20 + 0x194);
    }
  }
  else {
    iVar8 = *(int *)(param_1 + 0x10c);
    iVar3 = *(int *)(param_1 + 0x108);
    iVar6 = 0;
    param_1 = (byte *)iVar8;
  }
  if ((*pbVar1 & 1) == 0) {
    iVar9 = 0;
    if ((uVar7 != 0) && (iVar9 = iVar3, iVar3 <= iVar6)) {
      iVar9 = iVar6;
    }
    iVar2 = 0;
    iVar3 = iVar9;
    if (uVar5 != 0 || uVar4 != 0) {
      iVar3 = iVar9 * 2;
      if (iVar9 * 2 <= iVar6) {
        iVar3 = iVar6;
      }
      if ((uVar4 != 0) && (iVar3 <= iVar8)) {
        iVar3 = iVar8;
      }
      if ((uVar5 != 0) && (iVar3 <= (int)param_1)) {
        iVar3 = (int)param_1;
      }
      iVar2 = iVar9;
      if (uVar7 == 0) {
        iVar2 = iVar3;
      }
    }
  }
  else {
    iVar2 = 0;
    if ((uVar7 != 0) && (iVar2 = iVar6, iVar6 <= iVar3)) {
      iVar2 = iVar3;
    }
    iVar3 = iVar2;
    if (uVar5 != 0 || uVar4 != 0) {
      iVar3 = iVar2 * 2;
      if (iVar2 * 2 <= iVar6) {
        iVar3 = iVar6;
      }
      if ((uVar4 != 0) && (iVar3 <= iVar8)) {
        iVar3 = iVar8;
      }
      if ((uVar5 != 0) && (iVar3 <= (int)param_1)) {
        *param_6 = (int)param_1;
        *param_7 = iVar2;
        return;
      }
    }
  }
  *param_6 = iVar3;
  *param_7 = iVar2;
  return;
}


