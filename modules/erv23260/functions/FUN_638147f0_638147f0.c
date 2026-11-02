/* Module: erv23260.dll
   Function: FUN_638147f0
   Address: 638147f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_638147f0(void *this,int param_1,int param_2,ushort *param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int *param_9,int *param_10,uint *param_11,int *param_12,
            undefined4 *param_13)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_68 [8];
  int local_48 [8];
  void *local_28;
  int *local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  code *local_10;
  uint local_c;
  uint local_8;
  
  piVar2 = param_12;
  bVar1 = true;
  local_1c = *(int *)(&DAT_6382e708 + *(int *)(param_7 + 0x18) * 4);
  local_20 = 0;
  local_24 = (int *)0x0;
  local_10 = (code *)0x0;
  if (*(byte *)((int)this + 0x1d4) < 7) {
    local_1c = 0;
  }
  else if (*(byte *)((int)this + 0x1d4) < 0xb) {
    local_1c = local_1c / 2;
  }
  local_c = 0;
  local_8 = 0;
  *param_12 = 0x7fffffff;
  switch(*(undefined4 *)(param_7 + 0x18)) {
  case 0:
  case 1:
    bVar1 = true;
    break;
  case 2:
    local_10 = FUN_63815840;
    bVar1 = false;
    break;
  case 3:
    local_10 = FUN_63816090;
    bVar1 = false;
    local_24 = (int *)0x1;
    break;
  case 4:
    local_10 = FUN_63815840;
    bVar1 = false;
    local_20 = 1;
  }
  local_28 = this;
  if (bVar1) {
    iVar3 = FUN_63815840(*(byte **)((int)this + 0xe0),
                         (byte *)(param_2 * param_9[1] + param_1 + *param_9),0x10,param_2,0x7fffffff
                        );
    *param_12 = iVar3 - *(int *)(&DAT_6382e708 + *(int *)(param_7 + 0x18) * 4);
    local_c = 0;
    local_8 = 0;
    param_12 = (int *)0x1;
    if (0 < param_8) {
      local_1c = 6;
      local_10 = (code *)0x4;
      local_20 = 8;
      do {
        iVar3 = *param_9 - (int)param_12;
        iVar6 = param_9[1] - (int)param_12;
        param_10 = (int *)0x0;
        if (0 < local_20) {
          local_24 = (int *)((int)param_12 * 2);
          param_7 = iVar6 * param_2;
          do {
            if ((((int)param_3 <= iVar3) && (iVar3 <= param_5)) &&
               ((param_4 <= iVar6 &&
                ((iVar6 <= param_6 &&
                 (iVar4 = FUN_63815840(*(byte **)((int)local_28 + 0xe0),
                                       (byte *)(iVar3 + param_1 + param_7),0x10,param_2,*piVar2),
                 iVar4 < *piVar2)))))) {
              *piVar2 = iVar4;
              local_8 = iVar3 - *param_9;
              local_c = iVar6 - param_9[1];
            }
            if ((int)param_10 < (int)local_24) {
              iVar3 = iVar3 + 1;
            }
            else {
              if ((int)param_10 < (int)local_10) {
                iVar6 = iVar6 + 1;
                iVar4 = param_2;
              }
              else {
                if ((int)param_10 < local_1c) {
                  iVar3 = iVar3 + -1;
                  goto LAB_638149a9;
                }
                iVar6 = iVar6 + -1;
                iVar4 = -param_2;
              }
              param_7 = param_7 + iVar4;
            }
LAB_638149a9:
            param_10 = (int *)((int)param_10 + 1);
          } while ((int)param_10 < local_20);
        }
        param_12 = (int *)((int)param_12 + 1);
        local_20 = local_20 + 8;
        local_10 = (code *)((int)local_10 + 4);
        local_1c = local_1c + 6;
      } while ((int)param_12 <= param_8);
      *param_13 = 0;
      goto LAB_63814d27;
    }
LAB_63814d11:
    *param_13 = 0;
  }
  else {
    iVar3 = (*local_10)(*(undefined4 *)((int)this + 0xe0),param_2 * param_9[1] + param_1 + *param_9)
    ;
    if ((iVar3 < *(int *)((int)this + 0x30)) || (iVar3 < local_1c)) {
      *param_13 = 1;
    }
    else if (local_20 == 0) {
      *param_12 = iVar3 - local_1c;
      local_c = 0;
      local_8 = 0;
      FUN_63815720(*(byte **)((int)this + 0xe0),0x10,1,local_68,local_48);
      FUN_638155c0(this,param_3,param_4,param_5,param_6,local_68,(int)local_48,&local_14,&local_18);
      local_14 = local_14 - *param_9;
      local_18 = local_18 - param_9[1];
      iVar6 = local_14 + *param_9;
      iVar3 = local_18 + param_9[1];
      if (((((int)param_3 <= iVar6) && (iVar6 <= param_5)) && (param_4 <= iVar3)) &&
         ((iVar3 <= param_6 &&
          (iVar3 = (*local_10)(*(undefined4 *)((int)this + 0xe0),iVar3 * param_2 + iVar6 + param_1,
                               0x10,param_2,*param_12), iVar3 < *param_12)))) {
        *param_12 = iVar3;
        local_c = local_18;
        local_8 = local_14;
      }
      iVar3 = *param_10;
      iVar6 = param_10[1];
      iVar5 = (iVar3 >> 1) + *param_9;
      iVar4 = (iVar6 >> 1) + param_9[1];
      if ((((int)param_3 <= iVar5) && (iVar5 <= param_5)) &&
         ((param_4 <= iVar4 && (iVar4 <= param_6)))) {
        iVar4 = (*local_10)(*(undefined4 *)((int)this + 0xe0),iVar4 * param_2 + iVar5 + param_1,0x10
                            ,param_2,*param_12);
        if (iVar4 - *(int *)(&DAT_6382e738 + *(int *)(param_7 + 0x18) * 4) < *param_12) {
          *param_12 = iVar4 - *(int *)(&DAT_6382e738 + *(int *)(param_7 + 0x18) * 4);
          local_c = iVar6 >> 1;
          local_8 = iVar3 >> 1;
        }
      }
      if (local_24 == (int *)0x0) {
        if ((*(byte *)((int)param_9 + 0x65) & 1) == 0) {
          iVar3 = param_9[-0x1d];
          iVar6 = param_9[-0x1c];
          iVar5 = (iVar3 >> 1) + *param_9;
          iVar4 = (iVar6 >> 1) + param_9[1];
          if (((((int)param_3 <= iVar5) && (iVar5 <= param_5)) && (param_4 <= iVar4)) &&
             ((iVar4 <= param_6 &&
              (iVar4 = (*local_10)(*(undefined4 *)((int)this + 0xe0),
                                   iVar4 * param_2 + iVar5 + param_1,0x10,param_2,*param_12),
              iVar4 < *param_12)))) {
            *param_12 = iVar4;
            local_c = iVar6 >> 1;
            local_8 = iVar3 >> 1;
          }
        }
        if ((*(byte *)((int)param_9 + 0x65) & 4) == 0) {
          iVar3 = param_9[*(int *)((int)this + 0x124) * -0x1f + 2];
          iVar6 = param_9[*(int *)((int)this + 0x124) * -0x1f + 3];
          iVar5 = (iVar3 >> 1) + *param_9;
          iVar4 = (iVar6 >> 1) + param_9[1];
          if ((((int)param_3 <= iVar5) && (iVar5 <= param_5)) &&
             ((param_4 <= iVar4 &&
              ((iVar4 <= param_6 &&
               (iVar4 = (*local_10)(*(undefined4 *)((int)this + 0xe0),
                                    iVar4 * param_2 + iVar5 + param_1,0x10,param_2,*param_12),
               iVar4 < *param_12)))))) {
            *param_12 = iVar4;
            local_c = iVar6 >> 1;
            local_8 = iVar3 >> 1;
          }
        }
      }
      local_20 = local_8 + *param_9;
      param_12 = (int *)0x1;
      local_1c = local_c + param_9[1];
      iVar3 = 0;
      if ((&DAT_6382e768)[*(int *)(param_7 + 0x18)] != '\0') {
        local_24 = (int *)0x8;
        do {
          param_10 = local_24;
          if (0 < (int)local_24) {
            do {
              iVar4 = (char)(&DAT_6382e771)[iVar3] + local_1c;
              iVar6 = (char)(&DAT_6382e770)[iVar3] + local_20;
              iVar3 = iVar3 + 2;
              if (((((int)param_3 <= iVar6) && (iVar6 <= param_5)) && (param_4 <= iVar4)) &&
                 ((iVar4 <= param_6 &&
                  (iVar5 = (*local_10)(*(undefined4 *)((int)local_28 + 0xe0),
                                       iVar4 * param_2 + iVar6 + param_1,0x10,param_2,*piVar2),
                  iVar5 < *piVar2)))) {
                *piVar2 = iVar5;
                local_8 = iVar6 - *param_9;
                local_c = iVar4 - param_9[1];
              }
              param_10 = (int *)((int)param_10 + -1);
            } while (param_10 != (int *)0x0);
          }
          param_12 = (int *)((int)param_12 + 1);
          local_24 = local_24 + 2;
        } while ((int)param_12 <= (int)(uint)(byte)(&DAT_6382e768)[*(int *)(param_7 + 0x18)]);
      }
      goto LAB_63814d11;
    }
    *param_12 = iVar3;
  }
LAB_63814d27:
  *param_11 = local_8;
  param_11[1] = local_c;
  return;
}


