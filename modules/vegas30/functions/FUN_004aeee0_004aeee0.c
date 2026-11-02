/* Module: vegas30.exe
   Function: FUN_004aeee0
   Address: 004aeee0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004aeee0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8 [8];
  
  iVar3 = param_1;
  iVar10 = DAT_00647630;
  if (DAT_00647630 == 0) {
    return 1;
  }
  uVar9 = *(undefined4 *)(DAT_00647630 + 0xbc8);
  FUN_004f0620(param_1,param_1);
  iVar2 = FUN_004ab190(iVar3,uVar9,0);
  if (iVar2 < 0) {
    return iVar2;
  }
  iVar3 = FUN_004ab100(*(undefined4 *)(iVar10 + 0xbc8),iVar3);
  if (iVar3 == 0) {
    return iVar2;
  }
  local_14 = iVar3;
  if (((*(uint *)(iVar3 + 0x134) & 0x800) != 0) && ((*(uint *)(iVar3 + 0x134) & 0x1000) == 0)) {
    FUN_0055bac0(DAT_00647624,iVar3,0);
  }
  uVar4 = FUN_004ca930(iVar10);
  FUN_004582a0(iVar10,&local_10,local_8);
  iVar2 = FUN_004ab060(iVar3,2);
  local_1c = FUN_004ab060(iVar3,3);
  bVar1 = 0 < iVar2;
  iVar3 = FUN_005b8900(uVar9,3);
  iVar5 = FUN_005b87c0(3);
  if (0 < (int)local_1c) {
    if (iVar5 <= iVar3) {
      if (*(int *)(iVar10 + 0xbc8) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_005b87b0(*(int *)(iVar10 + 0xbc8));
      }
      iVar3 = FUN_004aa940(uVar6,uVar4);
      if (((iVar3 == 0) || ((*(int *)(iVar3 + 4) != 3 && (*(int *)(iVar3 + 4) != 0)))) &&
         (iVar3 = FUN_004aa980(iVar10,3,uVar4,0,0), iVar3 == 0)) goto LAB_004af008;
    }
    bVar1 = bVar1 | 2;
  }
LAB_004af008:
  iVar3 = param_1;
  if (*(int *)(param_1 + 0x20c) == -2) {
    iVar5 = FUN_005ba570(uVar9);
    if (((iVar5 == 0) && (*(int *)(iVar10 + 0xbc8) != 0)) &&
       (iVar5 = FUN_005b87b0(*(int *)(iVar10 + 0xbc8)), iVar5 != 0)) {
      uVar4 = _DAT_00000000;
      if (*(int *)(iVar10 + 0xbc8) != 0) {
        puVar7 = (undefined4 *)FUN_005b87b0(*(int *)(iVar10 + 0xbc8));
        uVar4 = *puVar7;
      }
    }
    else {
      uVar4 = 0;
    }
    param_1 = 0;
    if (0 < iVar2) {
      FUN_004abe00(iVar10,uVar9,2,uVar4,&param_1,0);
    }
    if (0 < (int)local_1c) {
      if (DAT_0064b4e4 == 0) {
        iVar2 = FUN_00601ab0(&local_18,&local_1c,1);
        if (iVar2 < 0) {
          DAT_0064b4f0 = 1;
        }
        else {
          uVar8 = (local_1c & 0xffff) >> 8;
          if ((int)DAT_0064b4e4 <= (int)uVar8) {
            DAT_0064b4f0 = 0;
            _DAT_0064b4f4 = local_18;
            DAT_0064b4e4 = uVar8;
          }
        }
      }
      if ((DAT_0064b4e4 == 0x20) || (DAT_0064b4e4 == 0x40)) {
        FUN_004abe00(iVar10,uVar9,3,uVar4,&param_1,0);
      }
    }
  }
  uVar9 = 0;
  uVar6 = 0;
  uVar11 = 0xffffffff;
  uVar12 = 0xffffffff;
  if ((*(byte *)(iVar3 + 0x218) & 8) != 0) {
    uVar9 = *(undefined4 *)(iVar3 + 0x220);
    uVar6 = *(undefined4 *)(iVar3 + 0x224);
    uVar11 = *(undefined4 *)(iVar3 + 0x228);
    uVar12 = *(undefined4 *)(iVar3 + 0x22c);
  }
  iVar10 = FUN_004adde0(iVar10,local_14,uVar9,uVar6,uVar11,uVar12,local_10,local_c,uVar4,bVar1);
  return iVar10;
}


