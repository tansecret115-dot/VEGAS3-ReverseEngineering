/* Module: vidpcore.dll
   Function: SfDibZoom
   Address: 5de92760
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfDibZoom(void *,struct tagRECT *,long,struct tagRECT *,void *,struct tagRECT
   *,long,struct tagRECT *,void *,struct tagRECT *,long,struct tagRECT *,long,struct
   tZOOMPROP,double) */

long SfDibZoom(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,int *param_6,undefined4 param_7,int *param_8,undefined4 param_9,
              int *param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 in_stack_0000005c;
  int in_stack_00000060;
  undefined1 local_8c [16];
  undefined1 local_7c [4];
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  double local_54;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x92760  22  ?SfDibZoom@@YGJPAXPAUtagRECT@@J101J101J1JUtZOOMPROP@@N@Z */
  piVar2 = param_6;
  lVar4 = FUN_5debc1e0(local_8c,&local_4c,&local_48,local_7c,&param_4,param_1,param_2,param_3,
                       param_4,param_5,param_6,param_7,param_8,param_13);
  if (-1 < lVar4) {
    local_64 = piVar2[1] << 0xe;
    local_60 = piVar2[2] << 0xe;
    local_68 = *piVar2 << 0xe;
    iVar1 = param_10[1];
    iVar5 = *param_10;
    local_70 = param_10[2] * 0x4000;
    local_44 = param_10[2] - iVar5;
    local_5c = piVar2[3] << 0xe;
    local_40 = param_10[3] - iVar1;
    local_2c = local_4c;
    local_28 = local_48;
    local_20 = param_8[1] * -0x4000;
    iVar8 = iVar1 * 0x4000;
    local_6c = param_10[3] * 0x4000;
    iVar9 = iVar5 * 0x4000;
    local_24 = *param_8 * -0x4000;
    in_stack_00000060 = local_6c + iVar1 * -0x4000;
    param_10 = (int *)(local_70 + iVar5 * -0x4000);
    param_8 = (int *)in_stack_00000060;
    if (in_stack_00000060 <= (int)param_10) {
      param_8 = param_10;
    }
    param_6 = (int *)(float)(int)param_8;
    local_78 = iVar9;
    local_74 = iVar8;
    local_58 = local_6c;
    ftol();
    ftol();
    iVar1 = (int)param_8;
    iVar5 = ftol();
    local_54 = _DAT_5df18830;
    if ((iVar1 != 0) && (iVar5 < iVar1)) {
      local_54 = (double)iVar5 / (double)(int)param_8;
    }
    iVar6 = ftol();
    iVar6 = iVar6 + iVar9;
    in_stack_00000060 = ftol();
    in_stack_00000060 = in_stack_00000060 + iVar8;
    param_10 = (int *)(iVar8 - in_stack_00000060);
    local_10 = ftol();
    iVar1 = in_stack_00000060;
    local_10 = local_10 + in_stack_00000060;
    param_10 = (int *)(local_58 - in_stack_00000060);
    local_8 = ftol();
    param_10 = (int *)(iVar9 - iVar6);
    local_8 = local_8 + iVar1;
    local_14 = ftol();
    local_14 = local_14 + iVar6;
    local_c = ftol();
    uVar3 = param_13;
    local_c = local_c + iVar6;
    lVar4 = FUN_5df093c0(param_4,&local_2c,param_3,&local_68,&local_24,param_5,&local_44,param_7,
                         &local_68,param_13,0,0);
    if ((-1 < lVar4) &&
       (lVar4 = FUN_5df093c0(param_4,&local_2c,param_3,&local_14,&local_24,param_9,&local_44,
                             param_11,&local_78,uVar3,1,0), -1 < lVar4)) {
      if (iVar5 < (int)param_8) {
        local_3c = local_14;
        local_38 = local_10;
        local_34 = local_c;
        local_30 = local_8;
      }
      else {
        local_34 = iVar5 - (int)param_8 >> 1;
        local_38 = local_10 - local_34;
        local_30 = local_34 + local_8;
        local_3c = local_14 - local_34;
        local_34 = local_34 + local_c;
      }
      uVar7 = ftol();
      param_8 = (int *)ftol();
      FUN_5df09480();
      FUN_5df094c0(4);
      FUN_5df09540(&local_3c);
      FUN_5df09610(param_4,&local_2c,param_3,&local_24,uVar7,param_8,0,&stack0x00000048,uVar3);
      FUN_5df09490();
      lVar4 = 0;
    }
  }
  return lVar4;
}


