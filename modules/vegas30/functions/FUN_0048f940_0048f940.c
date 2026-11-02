/* Module: vegas30.exe
   Function: FUN_0048f940
   Address: 0048f940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0048f940(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = *(int *)(DAT_0064762c + 0x78);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(iVar1 + 0x94) == param_3) {
    local_10 = *(uint *)(iVar1 + 0x80) >> 1 & 1;
    param_3 = (uint)(*(int *)(iVar1 + 0x120) != 0);
    local_c = 0;
    if (param_2 == 0) {
      switch(*(int *)(iVar1 + 0x94)) {
      case 1:
        if ((local_10 == 0) || (iVar6 = *(int *)(iVar1 + 0x134), iVar6 == 0)) {
          _SfList_CreateExZ_32(&param_2,4,0x10,0x10,0,0,0,0);
          local_10 = 1;
        }
        else {
          param_2 = iVar6;
          _SfList_DeleteList_16(iVar6,0,0xffffffff,0);
        }
        if ((param_2 != 0) &&
           (FUN_005b9e60(param_1,param_2,*(undefined4 *)(iVar1 + 0x140),
                         *(undefined4 *)(iVar1 + 0x13c),DAT_00647aa8), param_3 != 0)) {
          FUN_00489d80(*(undefined4 *)(iVar1 + 0x94),*(undefined4 *)(iVar1 + 0x120),
                       *(undefined4 *)(iVar1 + 0x124),iVar1 + 0xfc);
          local_c = 1;
        }
        break;
      case 2:
        param_2 = FUN_004a4560(DAT_00647630);
        break;
      case 3:
        piVar4 = (int *)FUN_005b8970(param_1);
        if ((local_10 == 0) || (iVar6 = *(int *)(iVar1 + 0x134), iVar6 == 0)) {
          _SfList_CreateExZ_32(&param_2,4,0x10,0x10,0,0,0,0);
          local_10 = 1;
        }
        else {
          param_2 = iVar6;
          _SfList_DeleteList_16(iVar6,0,0xffffffff,0);
        }
        if ((piVar4 != (int *)0x0) && (param_2 != 0)) {
          if (param_3 != 0) {
            FUN_00489d80(*(undefined4 *)(iVar1 + 0x94),*(undefined4 *)(iVar1 + 0x120),
                         *(undefined4 *)(iVar1 + 0x124),iVar1 + 0xfc);
            _SfList_Sort_12(param_2,iVar1 + 0xfc,0);
          }
          iVar6 = *piVar4;
          iVar7 = 0;
          if (0 < iVar6) {
            do {
              iVar2 = *(int *)(piVar4[2] + iVar7 * 4);
              if ((*(byte *)(iVar2 + 0x20) & 1) == 0) {
                local_8 = iVar2;
                if (param_3 == 0) {
                  uVar5 = 0xffffffff;
                }
                else {
                  uVar5 = _SfList_FindSortedInsertIndexRange_20
                                    (param_2,iVar2,0,0xffffffff,&LAB_0048ab50);
                }
                _SfList_InsertList_16(param_2,uVar5,&local_8,1);
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar6);
          }
        }
        break;
      case 4:
        piVar4 = (int *)FUN_005b8970(param_1);
        if ((local_10 == 0) || (iVar6 = *(int *)(iVar1 + 0x134), iVar6 == 0)) {
          _SfList_CreateExZ_32(&param_2,4,0x10,0x10,0,0,0,0);
          local_10 = 1;
        }
        else {
          param_2 = iVar6;
          _SfList_DeleteList_16(iVar6,0,0xffffffff,0);
        }
        if ((piVar4 != (int *)0x0) && (param_2 != 0)) {
          if (param_3 != 0) {
            FUN_00489d80(*(undefined4 *)(iVar1 + 0x94),*(undefined4 *)(iVar1 + 0x120),
                         *(undefined4 *)(iVar1 + 0x124),iVar1 + 0xfc);
            _SfList_Sort_12(param_2,iVar1 + 0xfc,0);
          }
          iVar6 = *piVar4;
          iVar7 = 0;
          if (0 < iVar6) {
            do {
              iVar2 = *(int *)(piVar4[2] + iVar7 * 4);
              if ((*(byte *)(iVar2 + 0x20) & 1) != 0) {
                local_8 = iVar2;
                if (param_3 == 0) {
                  uVar5 = 0xffffffff;
                }
                else {
                  uVar5 = _SfList_FindSortedInsertIndexRange_20
                                    (param_2,iVar2,0,0xffffffff,&LAB_0048ab50);
                }
                _SfList_InsertList_16(param_2,uVar5,&local_8,1);
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar6);
          }
        }
        break;
      case 5:
        piVar4 = (int *)FUN_005b8980(param_1);
        if ((local_10 == 0) || (iVar6 = *(int *)(iVar1 + 0x134), iVar6 == 0)) {
          _SfList_CreateExZ_32(&param_2,4,0x10,0x10,0,0,0,0);
          local_10 = 1;
        }
        else {
          param_2 = iVar6;
          _SfList_DeleteList_16(iVar6,0,0xffffffff,0);
        }
        if ((piVar4 != (int *)0x0) && (param_2 != 0)) {
          if (param_3 != 0) {
            FUN_00489d80(*(undefined4 *)(iVar1 + 0x94),*(undefined4 *)(iVar1 + 0x120),
                         *(undefined4 *)(iVar1 + 0x124),iVar1 + 0xfc);
            _SfList_Sort_12(param_2,iVar1 + 0xfc,0);
          }
          uVar3 = param_3;
          local_4 = *piVar4;
          iVar6 = 0;
          if (0 < local_4) {
            do {
              local_8 = *(int *)(piVar4[2] + iVar6 * 4);
              if (uVar3 == 0) {
                uVar5 = 0xffffffff;
              }
              else {
                uVar5 = _SfList_FindSortedInsertIndexRange_20
                                  (param_2,local_8,0,0xffffffff,&LAB_0048ab50);
              }
              _SfList_InsertList_16(param_2,uVar5,&local_8,1);
              iVar6 = iVar6 + 1;
            } while (iVar6 < local_4);
          }
        }
        break;
      case 6:
        piVar4 = (int *)FUN_005b8990(param_1);
        if ((local_10 == 0) || (iVar6 = *(int *)(iVar1 + 0x134), iVar6 == 0)) {
          _SfList_CreateExZ_32(&param_2,4,0x10,0x10,0,0,0,0);
          local_10 = 1;
        }
        else {
          param_2 = iVar6;
          _SfList_DeleteList_16(iVar6,0,0xffffffff,0);
        }
        if ((piVar4 != (int *)0x0) && (param_2 != 0)) {
          if (param_3 != 0) {
            FUN_00489d80(*(undefined4 *)(iVar1 + 0x94),*(undefined4 *)(iVar1 + 0x120),
                         *(undefined4 *)(iVar1 + 0x124),iVar1 + 0xfc);
            _SfList_Sort_12(param_2,iVar1 + 0xfc,0);
          }
          iVar6 = *piVar4;
          iVar7 = 0;
          if (0 < iVar6) {
            do {
              local_4 = *(int *)(piVar4[2] + iVar7 * 4);
              if (param_3 == 0) {
                uVar5 = 0xffffffff;
              }
              else {
                uVar5 = _SfList_FindSortedInsertIndexRange_20
                                  (param_2,local_4,0,0xffffffff,&LAB_0048ab50);
              }
              _SfList_InsertList_16(param_2,uVar5,&local_4,1);
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar6);
          }
        }
        break;
      case 7:
        piVar4 = (int *)FUN_005b89b0(param_1);
        if ((local_10 == 0) || (iVar6 = *(int *)(iVar1 + 0x134), iVar6 == 0)) {
          _SfList_CreateExZ_32(&param_2,4,0x10,0x10,0,0,0,0);
          local_10 = 1;
        }
        else {
          param_2 = iVar6;
          _SfList_DeleteList_16(iVar6,0,0xffffffff,0);
        }
        if ((piVar4 != (int *)0x0) && (param_2 != 0)) {
          if (param_3 != 0) {
            FUN_00489d80(*(undefined4 *)(iVar1 + 0x94),*(undefined4 *)(iVar1 + 0x120),
                         *(undefined4 *)(iVar1 + 0x124),iVar1 + 0xfc);
            _SfList_Sort_12(param_2,iVar1 + 0xfc,0);
          }
          uVar3 = param_3;
          local_8 = *piVar4;
          iVar6 = 0;
          if (0 < local_8) {
            do {
              local_4 = *(int *)(piVar4[2] + iVar6 * 4);
              if (uVar3 == 0) {
                uVar5 = 0xffffffff;
              }
              else {
                uVar5 = _SfList_FindSortedInsertIndexRange_20
                                  (param_2,local_4,0,0xffffffff,&LAB_0048ab50);
              }
              _SfList_InsertList_16(param_2,uVar5,&local_4,1);
              iVar6 = iVar6 + 1;
            } while (iVar6 < local_8);
          }
        }
      }
    }
    else {
      local_10 = 0;
    }
    if ((((*(byte *)(iVar1 + 0x80) & 2) != 0) && (iVar6 = *(int *)(iVar1 + 0x134), iVar6 != 0)) &&
       (param_2 != iVar6)) {
      _SfList_Destroy_4(iVar6);
      *(undefined4 *)(iVar1 + 0x134) = 0;
    }
    *(undefined4 *)(iVar1 + 0x130) = param_1;
    *(int *)(iVar1 + 0x134) = param_2;
    *(uint *)(iVar1 + 0x80) =
         ((local_c << 1 | param_3 & 1) << 1 | local_10) << 1 | *(uint *)(iVar1 + 0x80) & 0xfffffff1;
    SendMessageA(*(HWND *)(iVar1 + 0xdc),0x41a,0,0);
    return 1;
  }
  return 0;
}


