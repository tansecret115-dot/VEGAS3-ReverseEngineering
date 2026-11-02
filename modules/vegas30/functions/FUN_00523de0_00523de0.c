/* Module: vegas30.exe
   Function: FUN_00523de0
   Address: 00523de0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00523de0(LPCVOID param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  LPCVOID pvVar3;
  uint *puVar4;
  int iVar5;
  HGLOBAL pvVar6;
  int iVar7;
  
  puVar4 = param_2;
  pvVar3 = param_1;
  iVar7 = 0;
  uVar1 = *param_2;
  if (uVar1 < 0x410) {
    if (uVar1 == 0x40f) goto switchD_00523e06_caseD_0;
    switch(uVar1) {
    case 1:
      iVar7 = FUN_00525300(*(undefined4 *)((int)param_1 + 0xc),param_2[2],param_2[3],param_2[5],
                           param_2[4]);
      return iVar7;
    case 2:
      _mbscpy((uchar *)param_2[6],(uchar *)param_2[5]);
      return 0;
    case 3:
      *(undefined4 *)param_2[4] = *(undefined4 *)((int)param_1 + 4);
      return 0;
    default:
      goto switchD_00523e06_caseD_4;
    case 8:
      uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_2[2] + 8) + param_2[3] * 4) + 0xc);
      iVar7 = FUN_005258b0(*(undefined4 *)((int)param_1 + 0xc),uVar2,param_2[5],param_2[6]);
      if (-1 < iVar7) {
        _SfList_DeleteList_16(puVar4[2],puVar4[3],1,0);
        FUN_00524f30(*(undefined4 *)((int)pvVar3 + 0xc),&param_1,uVar2);
        iVar5 = 0;
        if ((LPCSTR)((int)param_1 + 0x14) != (LPCSTR)0x0) {
          iVar5 = lstrlenA((LPCSTR)((int)param_1 + 0x14));
          iVar5 = iVar5 + 1;
        }
        _SfList_AllocAndInsertItem_20(puVar4[2],param_1,iVar5 + 0x17,puVar4[3],0);
        pvVar6 = GlobalHandle(param_1);
        GlobalUnlock(pvVar6);
        pvVar6 = GlobalHandle(param_1);
        GlobalFree(pvVar6);
        FUN_005249d0(*(undefined4 *)((int)pvVar3 + 0xc));
        return iVar7;
      }
      break;
    case 9:
      if (param_2[3] != 0xffffffff) {
        iVar7 = FUN_00525ba0(*(undefined4 *)((int)param_1 + 0xc),
                             *(undefined4 *)
                              (*(int *)(*(int *)(param_2[2] + 8) + param_2[3] * 4) + 0xc));
        return iVar7;
      }
      iVar5 = 0;
      param_2 = *(uint **)param_2[4];
      if (0 < (int)param_2) {
        while (iVar7 = FUN_00525ba0(*(undefined4 *)((int)pvVar3 + 0xc),
                                    *(undefined4 *)
                                     (*(int *)(*(int *)(puVar4[2] + 8) +
                                              **(int **)(*(int *)(puVar4[4] + 8) + iVar5 * 4) * 4) +
                                     0xc)), -1 < iVar7) {
          iVar5 = iVar5 + 1;
          if ((int)param_2 <= iVar5) {
            return iVar7;
          }
        }
      }
      break;
    case 10:
      FUN_00524490(*(int *)((int)param_1 + 0xc),param_2[5],
                   *(undefined4 *)(*(int *)((int)param_1 + 0xc) + 0x10c),&param_2);
      iVar5 = FUN_005255d0(*(undefined4 *)((int)pvVar3 + 0xc),param_2);
      if (iVar5 != 0) {
        FUN_00524f30(*(undefined4 *)((int)pvVar3 + 0xc),&param_1,iVar5);
        if ((LPCSTR)((int)param_1 + 0x14) == (LPCSTR)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = lstrlenA((LPCSTR)((int)param_1 + 0x14));
          iVar7 = iVar7 + 1;
        }
        _SfList_AllocAndInsertItem_20(puVar4[2],param_1,iVar7 + 0x17,0xffffffff,0);
        pvVar6 = GlobalHandle(param_1);
        GlobalUnlock(pvVar6);
        pvVar6 = GlobalHandle(param_1);
        GlobalFree(pvVar6);
        return 0;
      }
      break;
    case 0xc:
      iVar7 = FUN_0052a630(*(undefined4 *)((int)param_1 + 0xc),param_2[4],param_2[2]);
      return iVar7;
    case 0xe:
    case 0x12:
      param_2[4] = 0;
      return 0;
    case 0x13:
      param_2[4] = 0;
      if (param_2[3] == 0) {
        return 0;
      }
      if (param_2[2] == 0) {
        return 0;
      }
      iVar7 = FUN_0052a5d0(*(undefined4 *)((int)param_1 + 0xc),*(undefined4 *)(param_2[3] + 0xc),
                           param_2[2]);
      if (iVar7 != 0) {
        return 0;
      }
    case 0:
    case 0xd:
switchD_00523e06_caseD_0:
      puVar4[4] = 1;
      return 0;
    }
  }
  else {
switchD_00523e06_caseD_4:
    iVar7 = -0x7fffbfff;
  }
  return iVar7;
}


