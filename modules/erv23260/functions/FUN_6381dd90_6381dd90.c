/* Module: erv23260.dll
   Function: FUN_6381dd90
   Address: 6381dd90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6381dd90(void *this,byte *param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_90 [16];
  int local_50 [6];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20 [4];
  int *local_10;
  void *local_c;
  int local_8;
  
  pbVar5 = (byte *)0x0;
  local_c = this;
  if ((*param_1 & 0x1f) == 5) {
    local_50[0] = -4;
    local_38 = 0xfffffffc;
    local_90[0] = 1;
    local_90[8] = 1;
    local_90[0xb] = 1;
    local_90[1] = 2;
    local_90[2] = 2;
    local_90[5] = 2;
    local_90[9] = 2;
    local_50[3] = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_50[1] = *(int *)((int)this + 0x3b4) * -4;
    local_50[2] = *(int *)((int)this + 0x3b4) * -4 + 4;
    local_50[4] = local_50[1];
    local_50[5] = local_50[2];
    local_90[0xc] = param_2[1];
    local_20[0] = *param_2;
    local_20[1] = param_2[2];
    local_90[0xd] = param_2[3];
    local_20[2] = param_2[4];
    local_28 = 0;
    local_24 = 0;
    local_90[3] = 0;
    local_90[4] = 3;
    local_90[6] = 3;
    local_90[7] = 0;
    local_90[10] = 0;
    local_90[0xe] = param_2[5];
    local_20[3] = param_2[6];
    local_90[0xf] = param_2[7];
    param_1 = (byte *)0x0;
    local_10 = param_2;
    local_8 = 0;
    do {
      if ((((uint)param_1 & 1) == 0) && (*param_4 != 0)) {
        iVar1 = 0;
        iVar9 = 0;
      }
      else {
        iVar1 = *(int *)((int)local_50 + local_8) + *(int *)((int)local_90 + local_8);
        iVar9 = param_2[iVar1 * 2];
        iVar1 = param_2[iVar1 * 2 + 1];
      }
      iVar6 = iVar9;
      iVar3 = iVar1;
      if ((param_4[1] == 0) || (0x17 < local_8)) {
        iVar3 = *(int *)((int)local_50 + local_8 + 4) + *(int *)((int)local_90 + local_8 + 4);
        iVar6 = param_2[iVar3 * 2];
        iVar3 = param_2[iVar3 * 2 + 1];
        if ((param_4[2] == 0) || (0x17 < local_8)) {
          iVar4 = param_2[(*(int *)((int)local_50 + local_8 + 8) +
                          *(int *)((int)local_90 + local_8 + 8)) * 2];
          iVar8 = (param_2 +
                  (*(int *)((int)local_50 + local_8 + 8) + *(int *)((int)local_90 + local_8 + 8)) *
                  2)[1];
        }
        else {
          iVar4 = 0;
          iVar8 = 0;
        }
      }
      else {
        iVar4 = iVar9;
        iVar8 = iVar1;
        if (param_4[2] != 0) {
          iVar4 = 0;
          iVar8 = 0;
        }
      }
      iVar7 = iVar9;
      if (iVar6 < iVar9) {
        iVar7 = iVar6;
        iVar6 = iVar9;
      }
      if ((iVar4 < iVar6) && (iVar6 = iVar4, iVar4 <= iVar7)) {
        iVar6 = iVar7;
      }
      iVar9 = iVar1;
      if (iVar3 < iVar1) {
        iVar9 = iVar3;
        iVar3 = iVar1;
      }
      if ((iVar8 < iVar3) && (iVar3 = iVar8, iVar8 <= iVar9)) {
        iVar3 = iVar9;
      }
      iVar1 = local_20[(int)param_1] + iVar6;
      iVar9 = local_90[(int)(param_1 + 0xc)] + iVar3;
      if (*(int *)((int)this + 0x2f8) == 0) {
        if (iVar1 < 0x20) {
          if (iVar1 < -0x20) {
            iVar1 = iVar1 + 0x40;
          }
        }
        else {
          iVar1 = iVar1 + -0x40;
        }
        if (iVar9 < 0x20) {
          if (iVar9 < -0x20) {
LAB_6381e28d:
            iVar9 = iVar9 + 0x40;
          }
        }
        else {
          iVar9 = iVar9 + -0x40;
        }
      }
      else if (*(int *)((int)this + 0x464) != 7) {
        if (iVar6 < 0x21) {
          if ((iVar6 < -0x1f) && (iVar1 < -0x3f)) {
            iVar1 = iVar1 + 0x40;
          }
        }
        else if (0x3f < iVar1) {
          iVar1 = iVar1 + -0x40;
        }
        if (iVar3 < 0x21) {
          if ((iVar3 < -0x1f) && (iVar9 < -0x3f)) goto LAB_6381e28d;
        }
        else if (0x3f < iVar9) {
          iVar9 = iVar9 + -0x40;
        }
      }
      param_1 = param_1 + 1;
      *local_10 = iVar1;
      local_10[1] = iVar9;
      local_8 = local_8 + 0xc;
      local_10 = local_10 + 2;
    } while (local_8 < 0x30);
  }
  else {
    if ((*(int *)((int)this + 0x334) == 0) || (param_3 != 8)) {
      if (param_4[1] == 0) {
        if (*param_4 == 0) {
          if (param_3 == 0x20) {
            param_1 = (byte *)param_2[-6];
            local_8 = param_2[-5];
          }
          else {
            param_1 = (byte *)param_2[-2];
            local_8 = param_2[-1];
          }
        }
        else {
          local_8 = 0;
          param_1 = (byte *)0x0;
        }
        iVar9 = *(int *)((int)this + 0x3b4);
        if (param_3 == 0x20) {
          pbVar5 = (byte *)param_2[iVar9 * -8 + 4];
          iVar1 = param_2[iVar9 * -8 + 5];
        }
        else {
          pbVar5 = (byte *)param_2[iVar9 * -2];
          iVar1 = (param_2 + iVar9 * -2)[1];
        }
        if (param_4[2] == 0) {
          if (param_3 == 0x20) {
            param_4 = (int *)param_2[iVar9 * -8 + 0xc];
            iVar9 = param_2[iVar9 * -8 + 0xd];
          }
          else {
            param_4 = (int *)param_2[iVar9 * -2 + 2];
            iVar9 = param_2[iVar9 * -2 + 3];
          }
        }
        else {
          iVar9 = 0;
          param_4 = (int *)0x0;
        }
        pbVar2 = param_1;
        if ((int)pbVar5 < (int)param_1) {
          pbVar2 = pbVar5;
          pbVar5 = param_1;
        }
        if (((int)param_4 < (int)pbVar5) && (pbVar5 = (byte *)param_4, (int)param_4 <= (int)pbVar2))
        {
          pbVar5 = pbVar2;
        }
        iVar6 = local_8;
        if (iVar1 < local_8) {
          iVar6 = iVar1;
          iVar1 = local_8;
        }
        if ((iVar9 < iVar1) && (iVar1 = iVar9, iVar9 <= iVar6)) {
          iVar1 = iVar6;
        }
      }
      else {
        iVar1 = 0;
        if (*param_4 == 0) {
          if (param_3 == 0x20) {
            pbVar5 = (byte *)param_2[-6];
            iVar1 = param_2[-5];
          }
          else {
            pbVar5 = (byte *)param_2[-2];
            iVar1 = param_2[-1];
          }
        }
      }
      pbVar2 = pbVar5 + *param_2;
      iVar9 = iVar1 + param_2[1];
      if (*(int *)((int)this + 0x2f8) == 0) {
        if ((int)pbVar2 < 0x20) {
          if ((int)pbVar2 < -0x20) {
            pbVar2 = pbVar2 + 0x40;
          }
        }
        else {
          pbVar2 = pbVar2 + -0x40;
        }
        if (0x1f < iVar9) {
          *param_2 = (int)pbVar2;
          param_2[1] = iVar9 + -0x40;
          return 0;
        }
        if (iVar9 < -0x20) {
          iVar9 = iVar9 + 0x40;
        }
      }
      else if (*(int *)((int)this + 0x464) != 7) {
        if ((int)pbVar5 < 0x21) {
          if (((int)pbVar5 < -0x1f) && ((int)pbVar2 < -0x3f)) {
            pbVar2 = pbVar2 + 0x40;
          }
        }
        else if (0x3f < (int)pbVar2) {
          pbVar2 = pbVar2 + -0x40;
        }
        if (iVar1 < 0x21) {
          if ((iVar1 < -0x1f) && (iVar9 < -0x3f)) {
            *param_2 = (int)pbVar2;
            param_2[1] = iVar9 + 0x40;
            return 0;
          }
        }
        else if (0x3f < iVar9) {
          *param_2 = (int)pbVar2;
          param_2[1] = iVar9 + -0x40;
          return 0;
        }
      }
      *param_2 = (int)pbVar2;
      param_2[1] = iVar9;
      return 0;
    }
    if (((*param_4 == 0) && ((*param_1 & 0x1f) == 3)) && ((param_1[-1] & 0x1f) == 3)) {
      iVar9 = param_2[-2];
      iVar1 = iVar9 + *param_2;
      iVar6 = param_2[-1] + param_2[1];
      if (*(int *)((int)this + 0x2f8) == 0) {
        if (iVar1 < 0x20) {
          if (iVar1 < -0x20) {
            iVar1 = iVar1 + 0x40;
          }
        }
        else {
          iVar1 = iVar1 + -0x40;
        }
        if (0x1f < iVar6) {
          *param_2 = iVar1;
          param_2[1] = iVar6 + -0x40;
          return 0;
        }
        if (iVar6 < -0x20) {
          iVar6 = iVar6 + 0x40;
        }
      }
      else if (*(int *)((int)this + 0x464) != 7) {
        if (iVar9 < 0x21) {
          if ((iVar9 < -0x1f) && (iVar1 < -0x3f)) {
            iVar1 = iVar1 + 0x40;
          }
        }
        else if (0x3f < iVar1) {
          iVar1 = iVar1 + -0x40;
        }
        if (param_2[-1] < 0x21) {
          if ((param_2[-1] < -0x1f) && (iVar6 < -0x3f)) {
            *param_2 = iVar1;
            param_2[1] = iVar6 + 0x40;
            return 0;
          }
        }
        else if (0x3f < iVar6) {
          *param_2 = iVar1;
          param_2[1] = iVar6 + -0x40;
          return 0;
        }
      }
      *param_2 = iVar1;
      param_2[1] = iVar6;
      return 0;
    }
  }
  return 0;
}


