/* Module: rmbe3260.dll
   Function: FUN_66022b90
   Address: 66022b90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_66022b90(void *this,int *param_1,int *param_2,float param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  int *local_4c;
  float local_48;
  int local_44;
  float local_40;
  uint local_3c;
  float local_38;
  float local_34;
  int *local_30;
  float local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  float local_1c;
  undefined4 local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  piVar7 = param_2;
  piVar1 = param_1;
  if (param_2 == (int *)0x0) {
    return;
  }
  if (param_1 == (int *)0x0) {
    return;
  }
  (**(code **)(*param_2 + 4))(param_2);
  (**(code **)(*piVar1 + 4))(piVar1);
  (**(code **)(*piVar7 + 0x14))(piVar7,&local_18);
  local_14 = (int *)0x0;
  local_20 = (int *)0x0;
  local_24 = (int *)0x0;
  local_8 = (int *)0x0;
  local_10 = (int *)0x0;
  local_c = (int *)0x0;
  local_2c = 0.0;
  if (*(int *)((int)this + 0x18) == 0) {
LAB_66022e1f:
    if (*(int *)((int)this + 0x14) != 0) goto LAB_66022e2a;
  }
  else {
    (**(code **)(*piVar1 + 0x20))(piVar1,&local_48);
    if (*(int *)((int)this + 0x14) == 0) {
      (**(code **)(*piVar1 + 0x40))(piVar1,&local_58);
      if (local_58 == 0) {
        iVar3 = *piVar7;
        local_4c = (int *)0x0;
        uVar2 = (**(code **)(iVar3 + 0xc))(piVar7,0,local_48,&local_4c);
        iVar3 = (**(code **)(iVar3 + 0x10))(piVar7,uVar2);
        if (-1 < iVar3) {
          (**(code **)(*local_4c + 0xc))(local_4c,&local_68);
joined_r0x66022cba:
          if (local_4c != (int *)0x0) {
            (**(code **)(*local_4c + 8))(local_4c);
          }
        }
      }
      else {
        iVar3 = *piVar7;
        local_4c = (int *)0x0;
        uVar2 = (**(code **)(iVar3 + 0xc))(piVar7,2,local_48,&local_4c);
        iVar3 = (**(code **)(iVar3 + 0x10))(piVar7,uVar2);
        if (-1 < iVar3) {
          (**(code **)(*local_4c + 0xc))(local_4c,&local_68);
          goto joined_r0x66022cba;
        }
      }
    }
    else {
      iVar3 = *piVar7;
      local_4c = (int *)0x0;
      uVar2 = (**(code **)(iVar3 + 0xc))(piVar7,1,local_48,&local_4c);
      iVar3 = (**(code **)(iVar3 + 0x10))(piVar7,uVar2);
      if ((-1 < iVar3) &&
         ((**(code **)(*local_4c + 0xc))(local_4c,&local_68), local_4c != (int *)0x0)) {
        (**(code **)(*local_4c + 8))(local_4c);
      }
    }
    local_14 = (int *)FUN_660243d0();
    (**(code **)(*local_14 + 4))(local_14);
    (**(code **)(local_14[4] + 0x14))(local_14 + 4,local_68,local_64);
    (**(code **)(local_14[4] + 0x24))(local_14 + 4,local_18);
    (**(code **)(local_14[4] + 0x34))(local_14 + 4,0);
    (**(code **)(local_14[4] + 0x3c))(local_14 + 4,2);
    (**(code **)(local_14[4] + 0x18))(local_14 + 4,&local_2c);
    FUN_660236f0(this,(int *)&local_14);
    if (*(int *)((int)this + 0x14) == 0) {
      if (*(int *)((int)this + 0x1c) != 0) {
        (**(code **)**(undefined4 **)((int)this + 0x38))
                  (*(undefined4 **)((int)this + 0x38),local_68,local_64,&local_70,&local_60);
        if (local_70 != 0) {
          local_20 = (int *)FUN_660243d0();
          (**(code **)(*local_20 + 4))(local_20);
          (**(code **)(local_20[4] + 0x14))(local_20 + 4,local_70,local_6c);
          (**(code **)(local_20[4] + 0x24))(local_20 + 4,local_18);
          (**(code **)(local_20[4] + 0x34))(local_20 + 4,1);
          (**(code **)(local_20[4] + 0x3c))(local_20 + 4,0);
          FUN_660236f0(this,(int *)&local_20);
        }
        if (local_60 != 0) {
          local_24 = (int *)FUN_660243d0();
          (**(code **)(*local_24 + 4))(local_24);
          (**(code **)(local_24[4] + 0x14))(local_24 + 4,local_60,local_5c);
          (**(code **)(local_24[4] + 0x24))(local_24 + 4,local_18);
          (**(code **)(local_24[4] + 0x34))(local_24 + 4,1);
          (**(code **)(local_24[4] + 0x3c))(local_24 + 4,0);
          FUN_660236f0(this,(int *)&local_24);
        }
      }
      goto LAB_66022e1f;
    }
LAB_66022e2a:
    piVar1 = param_2;
    local_30 = (int *)0x0;
    local_28 = (int *)0x0;
    (**(code **)(*param_2 + 0x10))(param_2,0xc,&local_30);
    (**(code **)*local_30)(local_30,&DAT_66065c38,&local_28);
    (**(code **)(*local_30 + 0xc))(local_30,&local_70);
    if (local_30 != (int *)0x0) {
      (**(code **)(*local_30 + 8))(local_30);
      local_30 = (int *)0x0;
    }
    (**(code **)(*piVar1 + 0x1c))(piVar1,&local_48);
    local_38 = _DAT_66066dec;
    if (local_2c <= local_48) {
      local_38 = local_48 - local_2c;
    }
    local_44 = 0;
    local_4c = (int *)0x0;
    local_34 = local_38;
    (**(code **)(*piVar1 + 0x28))(piVar1,&local_34);
    local_34 = local_34 - local_2c;
    if (local_34 < local_38) {
      local_34 = local_38;
    }
    (**(code **)(*local_28 + 0x24))(local_28,&local_44);
    (**(code **)(*local_28 + 0x2c))(local_28,&local_4c);
    (**(code **)(*local_28 + 0x34))(local_28,&local_54);
    (**(code **)(*local_28 + 0x3c))(local_28,&local_58);
    (**(code **)(*param_1 + 0x28))(param_1,&local_5c);
    if (local_5c == 1) {
      uVar2 = 100;
LAB_66022f2c:
      local_3c = 0;
      uVar4 = 1;
    }
    else {
      if (local_5c == 2) {
        uVar2 = 1;
        goto LAB_66022f2c;
      }
      uVar2 = 0x32;
      if (local_5c != 3) goto LAB_66022f2c;
      local_3c = 1;
      uVar4 = 0;
    }
    (**(code **)(*local_28 + 0x1c))(local_28,&local_50);
    local_8 = (int *)FUN_660249d0();
    (**(code **)(*local_8 + 4))(local_8);
    (**(code **)(local_8[4] + 0x14))(local_8 + 4,local_70,local_6c);
    (**(code **)(local_8[4] + 0x24))(local_8 + 4,local_18);
    (**(code **)(local_8[4] + 0x34))(local_8 + 4,0);
    (**(code **)(local_8[4] + 0x3c))(local_8 + 4,2);
    (**(code **)(local_8[4] + 0x1c))(local_8 + 4,local_38);
    (**(code **)(local_8[5] + 0x10))(local_8 + 5,local_50);
    (**(code **)(local_8[5] + 0x18))(local_8 + 5,uVar4);
    (**(code **)(local_8[5] + 0x20))(local_8 + 5,uVar2);
    (**(code **)(local_8[5] + 0x28))(local_8 + 5,100);
    (**(code **)(local_8[5] + 0x30))(local_8 + 5,local_3c);
    (**(code **)(local_8[5] + 0x38))(local_8 + 5,0);
    (**(code **)(local_8[5] + 0x50))(local_8 + 5,local_44);
    (**(code **)(local_8[5] + 0x58))(local_8 + 5,local_34);
    (**(code **)(local_8[5] + 0x68))(local_8 + 5,local_54);
    (**(code **)(local_8[5] + 0x60))(local_8 + 5,local_4c);
    (**(code **)(local_8[5] + 0x78))(local_8 + 5,local_58);
    (**(code **)(*(int *)this + 0x30))(this,local_8);
    FUN_660235f0(this,(int *)&local_8);
    if (param_3 != 0.0) {
      local_1c = local_48 * _DAT_66066ddc;
      FUN_66023df0(&local_1c);
      local_1c = local_1c - local_2c;
      if (local_1c <= _DAT_66066de4) {
        local_1c = 1.0;
      }
      local_40 = local_1c;
      if (local_44 != 0) {
        local_40 = local_38 * _DAT_66066ddc;
        FUN_66023df0(&local_40);
        if (local_40 < local_1c) {
          local_40 = local_1c;
        }
      }
      local_10 = (int *)FUN_660249d0();
      (**(code **)(*local_10 + 4))(local_10);
      (**(code **)(local_10[4] + 0x14))(local_10 + 4,local_70,local_6c);
      (**(code **)(local_10[4] + 0x24))(local_10 + 4,local_18);
      (**(code **)(local_10[4] + 0x34))(local_10 + 4,1);
      (**(code **)(local_10[4] + 0x3c))(local_10 + 4,0);
      (**(code **)(local_10[4] + 0x1c))(local_10 + 4,local_1c);
      (**(code **)(local_10[5] + 0x10))(local_10 + 5,local_50);
      (**(code **)(local_10[5] + 0x18))(local_10 + 5,uVar4);
      (**(code **)(local_10[5] + 0x20))(local_10 + 5,uVar2);
      (**(code **)(local_10[5] + 0x28))(local_10 + 5,100);
      (**(code **)(local_10[5] + 0x30))(local_10 + 5,local_3c);
      (**(code **)(local_10[5] + 0x38))(local_10 + 5,0);
      (**(code **)(local_10[5] + 0x50))(local_10 + 5,local_44);
      (**(code **)(local_10[5] + 0x58))(local_10 + 5,local_40);
      (**(code **)(local_10[5] + 0x68))(local_10 + 5,local_54);
      (**(code **)(local_10[5] + 0x60))(local_10 + 5,local_4c);
      (**(code **)(local_10[5] + 0x78))(local_10 + 5,local_58);
      (**(code **)(*(int *)this + 0x30))(this,local_10);
      FUN_660235f0(this,(int *)&local_10);
    }
    if (param_4 != 0) {
      local_1c = local_48 * _DAT_66066de0;
      FUN_66023df0(&local_1c);
      local_1c = local_1c - local_2c;
      if (local_1c <= _DAT_66066de4) {
        local_1c = 1.0;
      }
      local_c = (int *)FUN_660249d0();
      (**(code **)(*local_c + 4))(local_c);
      (**(code **)(local_c[4] + 0x14))(local_c + 4,local_70,local_6c);
      (**(code **)(local_c[4] + 0x24))(local_c + 4,local_18);
      (**(code **)(local_c[4] + 0x34))(local_c + 4,1);
      (**(code **)(local_c[4] + 0x3c))(local_c + 4,2);
      (**(code **)(local_c[4] + 0x1c))(local_c + 4,local_1c);
      (**(code **)(local_c[5] + 0x10))(local_c + 5,local_50);
      (**(code **)(local_c[5] + 0x18))(local_c + 5,uVar4);
      (**(code **)(local_c[5] + 0x20))(local_c + 5,uVar2);
      (**(code **)(local_c[5] + 0x28))(local_c + 5,100);
      (**(code **)(local_c[5] + 0x30))(local_c + 5,0);
      (**(code **)(local_c[5] + 0x38))(local_c + 5,1);
      (**(code **)(local_c[5] + 0x50))(local_c + 5,0);
      (**(code **)(local_c[5] + 0x68))(local_c + 5,local_54);
      (**(code **)(local_c[5] + 0x60))(local_c + 5,local_4c);
      (**(code **)(local_c[5] + 0x78))(local_c + 5,local_58);
      (**(code **)(local_c[5] + 0x58))(local_c + 5,local_1c);
      (**(code **)(*(int *)this + 0x30))(this,local_c);
      local_64 = 0;
      local_38 = 0.0;
      local_3c = 0;
      local_40 = 0.0;
      (**(code **)(local_c[5] + 0x3c))(local_c + 5,&local_64,&local_38,&local_3c,&local_40);
      fVar5 = FUN_66023f50(local_3c,(int)local_40);
      if (((float10)_DAT_66066dec < fVar5) && (fVar5 <= (float10)local_1c)) {
        local_1c = (float)fVar5;
      }
      (**(code **)(local_c[4] + 0x1c))(local_c + 4,local_1c);
      FUN_660235f0(this,(int *)&local_c);
    }
    if (local_28 != (int *)0x0) {
      (**(code **)(*local_28 + 8))(local_28);
    }
  }
  piVar1 = param_1;
  if (param_5 != 0) {
    FUN_660238e0(this,local_14,local_8,param_2,param_1);
  }
  FUN_660237c0(this,(int)local_14,(int)local_8,local_18);
  if (*(int *)((int)this + 0x14) == 0) {
    if (local_20 != (int *)0x0) {
      FUN_660237c0(this,(int)local_20,0,local_18);
    }
    if (local_24 == (int *)0x0) goto LAB_66023523;
    piVar7 = local_24;
    piVar8 = (int *)0x0;
  }
  else {
    if (param_3 == 0.0) {
      (**(code **)(*piVar1 + 0x38))(piVar1,&param_5);
      param_3 = 0.0;
      param_1 = (int *)0x0;
      if (param_5 == 0) {
        iVar3 = *(int *)((int)this + 0x80);
        if (iVar3 != 0) {
          (**(code **)(*(int *)(iVar3 + 0x10) + 0x18))(iVar3 + 0x10,&param_3);
        }
        if (local_8 != (int *)0x0) {
          (**(code **)(local_8[4] + 0x18))(local_8 + 4,&param_1);
        }
        if (param_3 < (float)param_1) {
          piVar6 = *(int **)((int)this + 0x7c);
          piVar7 = local_8;
          piVar8 = *(int **)((int)this + 0x7c);
          goto joined_r0x660234d2;
        }
      }
      else {
        iVar3 = *(int *)((int)this + 0x7c);
        if (iVar3 != 0) {
          (**(code **)(*(int *)(iVar3 + 0x10) + 0x18))(iVar3 + 0x10,&param_3);
        }
        if (local_14 != (int *)0x0) {
          (**(code **)(local_14[4] + 0x18))(local_14 + 4,&param_1);
        }
        if (param_3 < (float)param_1) {
          piVar7 = *(int **)((int)this + 0x80);
          piVar6 = local_14;
          piVar8 = piVar7;
joined_r0x660234d2:
          if (piVar8 != (int *)0x0) goto LAB_660234dd;
        }
      }
    }
    else {
      piVar6 = local_14;
      piVar7 = local_10;
      if (local_10 == (int *)0x0) goto LAB_660234e4;
LAB_660234dd:
      FUN_660237c0(this,(int)piVar6,(int)piVar7,local_18);
    }
LAB_660234e4:
    if ((param_4 == 0) || (piVar7 = local_14, piVar8 = local_c, local_c == (int *)0x0))
    goto LAB_66023523;
  }
  FUN_660237c0(this,(int)piVar7,(int)piVar8,local_18);
LAB_66023523:
  piVar7 = *(int **)((int)this + 0x7c);
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 8))(piVar7);
    *(undefined4 *)((int)this + 0x7c) = 0;
  }
  *(int **)((int)this + 0x7c) = local_14;
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 4))(local_14);
  }
  piVar7 = *(int **)((int)this + 0x80);
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 8))(piVar7);
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  *(int **)((int)this + 0x80) = local_8;
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 4))(local_8);
  }
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(local_14);
    local_14 = (int *)0x0;
  }
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))(local_20);
    local_20 = (int *)0x0;
  }
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))(local_24);
    local_24 = (int *)0x0;
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
    local_10 = (int *)0x0;
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  (**(code **)(*param_2 + 8))(param_2);
  (**(code **)(*piVar1 + 8))(piVar1);
  return;
}


