/* Module: erv23260.dll
   Function: FUN_6380cb00
   Address: 6380cb00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6380cb00(void *this,uint *param_1,uint param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_60;
  int local_5c;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  code *local_c;
  uint local_8;
  
  iVar3 = *(int *)((int)this + 0x5ec);
  local_10 = 0;
  local_8 = 0;
  if (iVar3 == 1) {
    local_c = FUN_6380c520;
  }
  else if (iVar3 == 0) {
    local_c = FUN_6380c4a0;
  }
  else if (iVar3 == 3) {
    local_c = FUN_6380c740;
  }
  else if (iVar3 == 4) {
    local_c = FUN_6380ca20;
  }
  else {
    if (iVar3 != 5) {
      return;
    }
    local_c = FUN_6380c8e0;
  }
  if (*(int *)((int)this + 0x614) != 0) {
    if ((*param_1 == 0) && (param_1[1] == 0)) {
      FUN_637fd2d0(*(void **)((int)this + 0x6c4),(undefined4 *)((int)this + 0x6d0),
                   (undefined4 *)((int)this + 0x6d4));
      FUN_637fb2d0(*(void **)((int)this + 0x6c4),0,param_2);
      *(uint *)((int)this + 0x750) = param_2;
      local_10 = 1;
    }
    else {
      local_8 = (uint)(*(uint *)((int)this + 0x750) != param_2);
      local_10 = 0;
    }
  }
  uVar2 = param_1[1];
  local_18 = *param_1 * *(int *)((int)this + 0x6e0);
  if (param_1[2] * param_1[3] + uVar2 <= uVar2) {
    return;
  }
LAB_6380cbe6:
  (**(code **)(**(int **)((int)this + 0x5c4) + 0x24))(&local_60,1);
  local_14 = uVar2 + local_18;
  do {
    if ((*(int *)((int)this + 0x720) == 0) || (*(int *)((int)this + 0x60c) != 0)) {
      if (((*(int *)((int)this + 0x624) != 0) && (*(int *)((int)this + 0x5ec) != 2)) &&
         ((((local_30 & 0x3f) != 0 || (local_5c == 0)) && (*(uint *)((int)this + 0x750) != local_60)
          ))) goto LAB_6380cc61;
    }
    else if ((local_60 != *(uint *)((int)this + 0x750)) &&
            (((local_30 & 0x3f) != 0 || (local_5c == 0)))) {
LAB_6380cc61:
      param_2 = local_60;
      local_8 = 1;
    }
    FUN_637fa7e0(*(void **)((int)this + 0x6c4),uVar2);
    (*local_c)(local_14,&local_60,local_8,param_2);
    (**(code **)(**(int **)((int)this + 0x5c4) + 0x3c))();
    if (*(int *)((int)this + 0x614) == 0) goto LAB_6380ce3b;
    bVar1 = FUN_6380cf90(this,(uint)(local_14 == 0));
    if ((CONCAT31(extraout_var,bVar1) != 0) || (local_10 != 0)) break;
    FUN_6380d010(this,local_14,param_2);
    *(uint *)((int)this + 0x750) = param_2;
    local_10 = 1;
    local_8 = 0;
    (**(code **)(**(int **)((int)this + 0x5c4) + 0x2c))();
    if (*(int *)((int)this + 0x5ec) != 4) {
      if ((*(int *)((int)this + 0x720) == 0) || (*(int *)((int)this + 0x60c) != 0)) {
        local_2c = *param_1;
        local_28 = 0;
        local_20 = param_1[3];
        local_24 = *(uint *)((int)this + 0x6e0);
        (**(code **)(**(int **)((int)this + 0x5c4) + 0x20))(&local_2c,uVar2,uVar2,1,5);
        if (uVar2 + 1 < *(uint *)((int)this + 0x6e0)) {
          (**(code **)(**(int **)((int)this + 0x5c4) + 0x20))
                    (&local_2c,uVar2 + 1,*(uint *)((int)this + 0x6e0) - 1,1,4);
        }
        if ((uVar2 != 0) &&
           ((uint)(local_18 + *(int *)((int)this + 0x6e0)) < *(uint *)((int)this + 0x6e4))) {
          local_2c = local_2c + 1;
          (**(code **)(**(int **)((int)this + 0x5c4) + 0x20))(&local_2c,0,uVar2 - 1,1,4);
        }
        if (*(int *)((int)this + 0x60c) == 0) {
          (**(code **)(**(int **)((int)this + 0x5c4) + 0x28))(param_1);
        }
        else {
          local_2c = *param_1;
          local_20 = param_1[3];
          local_24 = (param_1[2] - uVar2) + param_1[1];
          local_28 = uVar2;
          (**(code **)(**(int **)((int)this + 0x5c4) + 0x14))(&local_2c,(int)this + 0x704,local_1c);
        }
      }
      else {
        (**(code **)(**(int **)((int)this + 0x5c4) + 0x20))(param_1,uVar2,uVar2,1,5);
        iVar3 = (uVar2 / *(uint *)((int)this + 0x6e0) + 1) * *(uint *)((int)this + 0x6e0);
        uVar4 = iVar3 - 1;
        if (uVar2 + 1 <= uVar4) {
          (**(code **)(**(int **)((int)this + 0x5c4) + 0x20))(param_1,uVar2 + 1,uVar4,1,4);
        }
        if (*(int *)((int)this + 0x60c) == 0) {
          local_24 = *(uint *)((int)this + 0x6e0);
          local_2c = uVar2 / local_24;
          local_20 = 1;
          local_28 = 0;
          (**(code **)(**(int **)((int)this + 0x5c4) + 0x28))(&local_2c);
        }
        if (((uVar2 % *(uint *)((int)this + 0x6e0) != 0) &&
            (uVar4 = uVar2 + *(uint *)((int)this + 0x6e0), uVar4 < *(uint *)((int)this + 0x6e4))) &&
           ((**(code **)(**(int **)((int)this + 0x5c4) + 0x20))(param_1,iVar3,uVar4 - 1,1,4),
           *(int *)((int)this + 0x60c) == 0)) {
          local_2c = local_2c + 1;
          (**(code **)(**(int **)((int)this + 0x5c4) + 0x28))(&local_2c);
        }
      }
    }
    (**(code **)(**(int **)((int)this + 0x5c4) + 0x24))(&local_60,1);
  } while( true );
  FUN_637fd2d0(*(void **)((int)this + 0x6c4),(undefined4 *)((int)this + 0x6d0),
               (undefined4 *)((int)this + 0x6d4));
  local_10 = 0;
LAB_6380ce3b:
  if ((((local_30 & 0x3f) != 0) || (local_5c == 0)) && (local_8 != 0)) {
    local_8 = 0;
    *(uint *)((int)this + 0x750) = param_2;
  }
  uVar2 = uVar2 + 1;
  if (param_1[2] * param_1[3] + param_1[1] <= uVar2) {
    return;
  }
  goto LAB_6380cbe6;
}


