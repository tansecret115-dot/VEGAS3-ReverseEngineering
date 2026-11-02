/* Module: erv23260.dll
   Function: FUN_6381d860
   Address: 6381d860
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_6381d860(void *this,int *param_1,int *param_2,byte *param_3,int *param_4,byte *param_5,
            int *param_6,int *param_7,int *param_8)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  byte bVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  byte *pbVar8;
  byte bVar9;
  int local_18;
  byte *local_14;
  uint local_c;
  undefined4 local_8;
  
  piVar2 = param_4;
  pbVar8 = param_3;
  bVar1 = *param_3;
  bVar4 = bVar1 & 0x1f;
  if ((*(int *)((int)this + 0x338) == 0) && (*(int *)((int)this + 0x334) == 0)) {
    bVar9 = 1;
  }
  else {
    bVar9 = *param_5 & 0x1f;
  }
  param_3 = (byte *)0x0;
  if (*(int *)((int)this + 0x334) != 0) {
    if ((bVar1 & 0x1f) == 0) {
      param_3 = (byte *)FUN_6381dd90(this,pbVar8,param_4,0x20,param_8);
      iVar7 = *piVar2;
      piVar2[2] = iVar7;
      piVar2[4] = iVar7;
      piVar2[6] = iVar7;
      iVar7 = piVar2[1];
      piVar2[3] = iVar7;
      piVar2[5] = iVar7;
      piVar2[7] = iVar7;
    }
    if ((*(int *)((int)this + 0x330) != 0) && ((*param_5 & 0x1f) == 3)) {
      param_3 = (byte *)FUN_6381dd90(this,param_5,param_6,8,param_8);
    }
  }
  pbVar3 = param_5;
  if (*(int *)((int)this + 0x338) == 0) {
    param_5 = (byte *)0x20;
    piVar6 = piVar2;
  }
  else {
    param_5 = (byte *)0x8;
    piVar6 = param_6;
    pbVar8 = pbVar3;
    bVar4 = bVar9;
  }
  bVar1 = *pbVar8;
  switch(bVar4) {
  case 3:
  case 5:
    param_3 = (byte *)FUN_6381dd90(this,pbVar8,piVar6,(int)param_5,param_8);
    if ((bVar4 == 3) && (*(int *)((int)this + 0x338) == 0)) {
      iVar7 = *piVar2;
      piVar2[2] = iVar7;
      piVar2[4] = iVar7;
      piVar2[6] = iVar7;
      iVar7 = piVar2[1];
      piVar2[3] = iVar7;
      piVar2[5] = iVar7;
      piVar2[7] = iVar7;
    }
  default:
    goto switchD_6381d95e_caseD_4;
  case 0xb:
    if (*(int *)((int)this + 0x334) != 0) goto switchD_6381d95e_caseD_4;
    break;
  case 0xe:
    param_3 = (byte *)FUN_6381dd90(this,pbVar8,piVar6,(int)param_5,param_8);
    if (*(int *)((int)this + 0x338) == 0) {
      iVar7 = *piVar2;
      piVar2[2] = iVar7;
      piVar2[4] = iVar7;
      piVar2[6] = iVar7;
      iVar7 = piVar2[1];
      piVar2[3] = iVar7;
      piVar2[5] = iVar7;
      piVar2[7] = iVar7;
    }
    if ((param_3 != (byte *)0x0) || (*(int *)((int)this + 0x460) == 5))
    goto switchD_6381d95e_caseD_4;
  }
  param_3 = (byte *)FUN_6381dd90(this,pbVar8,param_7,8,param_8);
switchD_6381d95e_caseD_4:
  if (param_3 == (byte *)0x0) {
    param_7 = (int *)(*(int *)((int)this + 0x458) << 2 | *(uint *)((int)this + 0x454));
    pbVar8 = *(byte **)((int)this + 0x444);
    local_14 = pbVar8;
    if (*(int *)((int)this + 800) != 0) {
      local_14 = *(byte **)(&DAT_6382f588 + (int)pbVar8 * 4);
    }
    local_18 = 0;
    param_5 = pbVar8;
    do {
      param_8 = (int *)pbVar8;
      if (3 < local_18) {
        param_8 = (int *)local_14;
      }
      if (((uint)param_7 & 0x20) == 0) {
        if ((bVar4 != 0) || (param_6 = (int *)0x0, *(int *)((int)this + 0x304) != 0)) {
          param_6 = (int *)0x3;
        }
      }
      else {
        param_6 = (int *)((bVar4 != 0) + 1);
      }
      piVar2 = param_6;
      if (param_6 == (int *)0x3) {
        *(undefined4 *)*param_1 = 0;
        *param_1 = *param_1 + 4;
      }
      else {
        FUN_637fd2d0(*(void **)((int)this + 0x2b4),&local_8,&param_4);
        if ((piVar2 == (int *)0x2) || (*(int *)((int)this + 0x304) == 0)) {
          iVar7 = (**(code **)((int)this + *(int *)((int)this + 700) * 4 + 0x534))
                            (param_8,piVar2,local_8,param_4,*param_1,*param_2,&local_c);
          if ((*(int *)((int)this + 0x31c) != 0) && ((iVar7 == -2 && (param_6 == (int *)0x2)))) {
            iVar7 = (**(code **)((int)this + *(int *)((int)this + 700) * 4 + 0x55c))
                              (param_8,local_8,param_4,*param_1,*param_2,&local_c);
          }
        }
        else {
          iVar7 = (**(code **)((int)this + *(int *)((int)this + 700) * 4 + 0x548))
                            (param_8,local_8,param_4,*param_1,*param_2,&local_c,(bVar1 & 0xe0) >> 4)
          ;
        }
        FUN_637fd320(*(void **)((int)this + 0x2b4),local_c);
        if (iVar7 != 0) {
          return 1;
        }
        *param_2 = *param_2 + *(int *)*param_1 * 4;
        if (param_6 != (int *)0x2) {
          *(int *)*param_1 = *(int *)*param_1 + 0x41;
        }
        *param_1 = *param_1 + 4;
        bVar5 = FUN_637fd290(*(int *)((int)this + 0x2b4));
        pbVar8 = param_5;
        if (CONCAT31(extraout_var,bVar5) == 0) {
          return 1;
        }
      }
      param_7 = (int *)((int)param_7 << 1);
      local_18 = local_18 + 1;
    } while (local_18 < 6);
    if (*(int *)((int)this + 0x334) != 0) {
      param_7 = *(int **)((int)this + 0x450);
      iVar7 = (*(int *)((int)this + 0x448) + 5) * *(int *)((int)this + 0x440);
      param_5 = (byte *)((int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2);
      if (0x1f < (int)param_5) {
        param_5 = (byte *)0x1f;
      }
      if ((int)param_5 < 1) {
        param_5 = (byte *)0x1;
      }
      local_14 = param_5;
      if (*(int *)((int)this + 800) != 0) {
        local_14 = *(byte **)(&DAT_6382f588 + (int)param_5 * 4);
      }
      local_18 = 0;
      pbVar8 = param_5;
      do {
        param_8 = (int *)pbVar8;
        if (3 < local_18) {
          param_8 = (int *)local_14;
        }
        if (((uint)param_7 & 0x20) == 0) {
          *(undefined4 *)*param_1 = 0;
          *param_1 = *param_1 + 4;
        }
        else {
          FUN_637fd2d0(*(void **)((int)this + 0x2b4),&local_8,&param_4);
          iVar7 = (**(code **)((int)this + *(int *)((int)this + 700) * 4 + 0x534))
                            (param_8,2,local_8,param_4,*param_1,*param_2,&local_c);
          if ((*(int *)((int)this + 0x31c) != 0) && (iVar7 == -2)) {
            iVar7 = (**(code **)((int)this + *(int *)((int)this + 700) * 4 + 0x55c))
                              (param_8,local_8,param_4,*param_1,*param_2,&local_c);
          }
          FUN_637fd320(*(void **)((int)this + 0x2b4),local_c);
          if (iVar7 != 0) {
            return 1;
          }
          *param_2 = *param_2 + *(int *)*param_1 * 4;
          *param_1 = *param_1 + 4;
          bVar5 = FUN_637fd290(*(int *)((int)this + 0x2b4));
          pbVar8 = param_5;
          if (CONCAT31(extraout_var_00,bVar5) == 0) {
            return 1;
          }
        }
        param_7 = (int *)((int)param_7 << 1);
        local_18 = local_18 + 1;
        if (5 < local_18) {
          return 0;
        }
      } while( true );
    }
  }
  return (int)param_3;
}


