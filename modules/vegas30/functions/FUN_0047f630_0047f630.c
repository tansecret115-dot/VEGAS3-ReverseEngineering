/* Module: vegas30.exe
   Function: FUN_0047f630
   Address: 0047f630
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0047f630(undefined4 param_1,int *param_2,int param_3)

{
  HGLOBAL pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_10;
  int local_c;
  int *local_8;
  int local_4;
  
  iVar3 = 0;
  local_8 = (int *)FUN_005b87b0(param_1);
  if (param_2 == (int *)0x0) {
    return 1;
  }
  if (param_3 != 0) {
    pvVar1 = GlobalHandle(param_2);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_2);
    GlobalFree(pvVar1);
    return 0;
  }
  iVar4 = 0;
  param_3 = 1;
  if (-1 < param_2[1]) {
    param_3 = -1;
    iVar4 = *param_2 + -1;
  }
  local_10 = 0;
  FUN_005b83b0(param_1,1);
  local_c = iVar4;
  if (-1 < iVar4) {
    local_4 = param_3 * 0x18;
    piVar5 = param_2 + iVar4 * 6 + 3;
    do {
      local_c = iVar4;
      if (*param_2 + -1 < iVar4) break;
      iVar2 = piVar5[-1];
      if (iVar2 != 0) {
        if (*piVar5 == iVar4) {
          iVar3 = FUN_0047ee30(&local_10,iVar2,DAT_00647790,0);
          if ((iVar3 < 0) ||
             (iVar3 = FUN_0047da70(iVar2 + 0x638,piVar5[1],piVar5[2],local_10,0xffffffff), iVar3 < 0
             )) break;
          iVar2 = FUN_005be5f0(0);
          if (iVar2 != 0) {
            FUN_005bfa70(local_10);
            FUN_005bfba0(piVar5[1],piVar5[2],local_10);
            FUN_005bfed0(0);
          }
        }
        else {
          iVar3 = FUN_0047ee30(&local_10,iVar2,DAT_00647790,1);
          if (iVar3 < 0) break;
          iVar3 = *piVar5;
          if (local_8 == (int *)0x0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *local_8;
          }
          if ((iVar3 < 0) || (iVar4 + -1 < iVar3)) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(local_8[2] + iVar3 * 4);
          }
          if (iVar3 == 0) {
            iVar3 = -0x7fff0001;
            break;
          }
          iVar3 = FUN_0047dc30(iVar2 + 0x638,iVar3 + 0x638,iVar3,piVar5[1],piVar5[2],local_10,
                               0xffffffff);
          if ((iVar3 < 0) ||
             ((iVar4 = local_c, piVar5[3] != 0 &&
              ((iVar3 = FUN_0047ee30(&local_10,iVar2,DAT_00647790,2), iVar3 < 0 ||
               (iVar3 = FUN_0047da70(iVar2 + 0x638,piVar5[1],piVar5[2],local_10,0xffffffff),
               iVar4 = local_c, iVar3 < 0)))))) break;
        }
      }
      iVar4 = iVar4 + param_3;
      piVar5 = (int *)((int)piVar5 + local_4);
      local_c = iVar4;
    } while (-1 < iVar4);
  }
  FUN_005b84d0(param_1,1);
  if (local_10 != 0) {
    _SfList_Destroy_4(local_10);
  }
  pvVar1 = GlobalHandle(param_2);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(param_2);
  GlobalFree(pvVar1);
  return iVar3;
}


