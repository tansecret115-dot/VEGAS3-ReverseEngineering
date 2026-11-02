/* Module: vegas30.exe
   Function: FUN_004fef60
   Address: 004fef60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004fef60(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  int local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  local_c = 1;
  iVar4 = *(int *)(param_1 + 0x178);
  piVar1 = (int *)(param_1 + 0x178);
  if (iVar4 == 0) {
    _SfList_CreateExZ_32(piVar1,4,0x10,0x10,2,0,0,0);
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      return 0x8007000e;
    }
  }
  FUN_004febc0(iVar4);
  _SfList_DeleteList_16(iVar4,0,0xffffffff,1);
  piVar2 = DAT_0064b464;
  if (DAT_0064b464 != (int *)0x0) {
    local_4 = *DAT_0064b464;
    local_10 = 0;
    if (0 < local_4) {
      do {
        iVar3 = *(int *)(param_1 + 8);
        puVar5 = (undefined4 *)(piVar2[1] * local_10 + piVar2[2]);
        if (iVar3 == 0) {
          bVar7 = puVar5[4] == 5;
LAB_004ff029:
          if (bVar7) {
LAB_004ff030:
            local_c = _SfList_AllocItem_12(*piVar1,0x158,&local_8);
            if (local_8 != 0) {
              puVar6 = (undefined4 *)(local_8 + 0x20);
              for (iVar3 = 0x4c; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar6 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar6 = puVar6 + 1;
              }
              *(undefined4 *)(local_8 + 0x150) = 0xffffffff;
              _SfList_InsertList_16(*piVar1,0xffffffff,0,0xffffffff);
            }
          }
        }
        else if (iVar3 == 1) {
          iVar3 = puVar5[4];
          if (((iVar3 == 2) || (iVar3 == 1)) || (iVar3 == 0xc)) goto LAB_004ff030;
        }
        else if (iVar3 == 2) {
          bVar7 = puVar5[4] == 0xb;
          goto LAB_004ff029;
        }
        local_10 = local_10 + 1;
      } while (local_10 < local_4);
    }
  }
  _SfList_Sort_12(*piVar1,0,FUN_004ff0c0);
  FUN_004fec60(param_1,iVar4);
  return local_c;
}


