/* Module: mp3plug.dll
   Function: FUN_5f6ce870
   Address: 5f6ce870
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_5f6ce870(int *param_1)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int local_40;
  int local_3c [8];
  undefined8 local_1c;
  int *local_10;
  int local_c;
  uint local_8;
  
  local_40 = 0;
  local_3c[0] = 0;
  local_3c[1] = 0;
  if (param_1 == (int *)0x0) {
    return (int *)0x0;
  }
  param_1[0x44] = 0;
  FUN_5f6d1930((undefined4 *)param_1[0x10],0,local_3c + 1);
  FUN_5f6d19c0((float)param_1[1],*param_1,(int *)param_1[0x10],local_3c,&local_40);
  iVar3 = param_1[0x11];
  if (iVar3 == 0) {
    local_3c[1] = 0;
  }
  else if (iVar3 == 1) {
    local_3c[1] = 5;
  }
  else if (iVar3 == 2) {
    local_3c[1] = 9;
  }
  FUN_5f6d1930((undefined4 *)param_1[0x10],0,local_3c + 1);
  if ((local_40 != 0) && (local_3c[0] != 0)) {
    if (0x40 < local_3c[0]) {
      local_3c[0] = 0x40;
    }
    param_1[0x44] = local_3c[0];
    if (0 < local_3c[0]) {
      iVar3 = 0;
      local_10 = param_1;
      iVar6 = 0;
      piVar4 = param_1;
      do {
        dVar2 = (double)*(float *)(local_40 + 4 + iVar3);
        local_1c._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        local_1c._0_4_ = SUB84(dVar2,0);
        uVar5 = local_1c._4_4_ >> 0x14 & 0x7ff;
        if (uVar5 < 0x3ff) {
          local_3c[2] = 0;
        }
        else {
          local_8 = local_1c._4_4_;
          local_3c[2] = (local_1c._4_4_ << 0xb | (uint)local_1c >> 0x15 | 0x80000000) >>
                        (0x1eU - (char)uVar5 & 0x1f);
          local_c = iVar6;
          if ((longlong)dVar2 < 0) {
            local_3c[2] = -local_3c[2];
          }
        }
        piVar4[0x45] = local_3c[2];
        iVar6 = iVar6 + 1;
        piVar4[0x46] = *(int *)(local_40 + iVar3);
        piVar1 = (int *)(local_40 + 8 + iVar3);
        iVar3 = iVar3 + 0x28;
        piVar4[0x47] = *piVar1;
        piVar4 = piVar4 + 3;
        local_1c = dVar2;
      } while (iVar6 < local_3c[0]);
    }
    FUN_5f6d2180(local_40);
  }
  return param_1 + 0x44;
}


