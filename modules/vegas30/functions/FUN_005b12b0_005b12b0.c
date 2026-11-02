/* Module: vegas30.exe
   Function: FUN_005b12b0
   Address: 005b12b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005b12b0(int *param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  int *piVar7;
  int *piVar8;
  float fVar9;
  int local_860;
  int *local_854 [2];
  int local_84c;
  int *local_848;
  float *local_844;
  int local_840;
  float local_83c;
  float local_838;
  float local_834;
  int local_830 [260];
  int local_420;
  int local_418 [260];
  int local_8;
  
  pfVar6 = (float *)(param_2 * param_1[1] + param_1[2]);
  local_860 = 0;
  pfVar1 = pfVar6 + 0xfe;
  local_844 = pfVar1;
  fVar9 = SfVector3DDot(pfVar6,pfVar1);
  local_83c = -*pfVar1;
  local_838 = -pfVar6[0xff];
  local_834 = -pfVar6[0x100];
  iVar4 = *param_1 + -1;
  if (-1 < iVar4) {
    do {
      piVar5 = (int *)(iVar4 * param_1[1] + param_1[2]);
      local_840 = FUN_005b1150(local_844,fVar9,piVar5);
      local_854[0] = (int *)0x0;
      local_854[1] = (int *)0x0;
      local_84c = 0;
      local_848 = (int *)0x0;
      if (local_840 == 0) {
        local_84c = (int)(param_1 + 0x17);
LAB_005b1407:
        local_854[0] = piVar5;
      }
      else {
        if (local_840 == 1) {
          local_84c = (int)(param_1 + 0x18);
          goto LAB_005b1407;
        }
        if (local_840 == 3) {
          local_848 = param_1 + 0x18;
          piVar7 = piVar5;
          piVar8 = local_830;
          for (iVar3 = 0x106; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar8 = *piVar7;
            piVar7 = piVar7 + 1;
            piVar8 = piVar8 + 1;
          }
          local_84c = (int)(param_1 + 0x17);
          piVar7 = piVar5;
          piVar8 = local_418;
          for (iVar3 = 0x106; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar8 = *piVar7;
            piVar7 = piVar7 + 1;
            piVar8 = piVar8 + 1;
          }
          FUN_005b1000(local_830,piVar5,local_844,fVar9);
          FUN_005b1000(local_418,piVar5,&local_83c,-fVar9);
          local_854[1] = local_418;
          local_854[0] = local_830;
          local_420 = local_420 + 1;
          local_8 = local_8 + 1;
        }
      }
      iVar3 = 0;
      do {
        piVar5 = *(int **)((int)&local_84c + iVar3);
        if (piVar5 != (int *)0x0) {
          if (*piVar5 == 0) {
            iVar2 = FUN_005b1230(piVar5);
            if (iVar2 < 0) {
              return iVar2;
            }
            *(int *)(*piVar5 + 0x54) = param_1[0x15];
            *(undefined4 *)(*piVar5 + 0x58) = 0;
          }
          local_860 = _SfList_InsertList_16
                                (*piVar5,0xffffffff,*(undefined4 *)((int)local_854 + iVar3),1);
          if (local_860 < 0) {
            return local_860;
          }
        }
        iVar3 = iVar3 + 4;
      } while (iVar3 < 8);
      if (local_860 < 0) {
        return local_860;
      }
      if (local_840 != 2) {
        _SfList_DeleteList_16(param_1,iVar4,1,0);
      }
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    if (local_860 < 0) {
      return local_860;
    }
  }
  _SfList_DeleteList_16(param_1,0,0,1);
  if (((param_1[0x17] == 0) || (local_860 = FUN_005b12b0(param_1[0x17],0), -1 < local_860)) &&
     (param_1[0x18] != 0)) {
    local_860 = FUN_005b12b0(param_1[0x18],0);
  }
  return local_860;
}


