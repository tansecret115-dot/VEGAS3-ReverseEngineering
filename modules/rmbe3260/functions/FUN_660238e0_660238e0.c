/* Module: rmbe3260.dll
   Function: FUN_660238e0
   Address: 660238e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_660238e0(void *this,int *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  uint local_24;
  int *local_20;
  undefined4 local_1c;
  uint local_18;
  float local_14;
  int *local_10;
  float local_c;
  int *local_8;
  
  piVar1 = param_3;
  local_10 = (int *)0x0;
  local_8 = (int *)0x0;
  (**(code **)(*param_3 + 4))(param_3);
  (**(code **)(*param_4 + 4))(param_4);
  (**(code **)(*param_4 + 0x30))(param_4,&local_18);
  if ((*(int *)((int)this + 0x14) != 0) && (param_2 != (int *)0x0)) {
    if (local_18 < 4) {
      local_18 = 4;
    }
    piVar1 = param_2 + 4;
    local_24 = 1;
    local_30 = 0;
    local_2c = 0.0;
    (**(code **)(param_2[4] + 0x10))(piVar1,&local_3c);
    local_20 = (int *)0x0;
    local_14 = (float)(**(code **)(**(int **)((int)this + 0x30) + 0x14))
                                (*(int **)((int)this + 0x30),local_3c,local_38,&local_20);
    if (-1 < (int)local_14) {
      local_14 = (float)(**(code **)(*local_20 + 0x14))(local_20,&local_24);
    }
    if ((-1 < (int)local_14) && (local_18 < local_24)) {
      local_14 = (float)(**(code **)(*local_20 + 0x18))(local_20,local_18,&local_30);
    }
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))(local_20);
      local_20 = (int *)0x0;
    }
    if ((local_18 < local_24) && (-1 < (int)local_14)) {
      local_8 = (int *)FUN_660249d0();
      (**(code **)(*local_8 + 4))(local_8);
      (**(code **)(local_8[4] + 0x14))(local_8 + 4,local_30,local_2c);
      local_14 = 0.0;
      local_28 = 0;
      local_c = 0.0;
      local_1c = 0;
      (**(code **)(*piVar1 + 0x20))(piVar1,&local_14);
      (**(code **)(local_8[4] + 0x24))(local_8 + 4,local_14);
      (**(code **)(*piVar1 + 0x30))(piVar1,&local_c);
      (**(code **)(local_8[4] + 0x34))(local_8 + 4,local_c);
      (**(code **)(*piVar1 + 0x38))(piVar1,&local_28);
      (**(code **)(local_8[4] + 0x3c))(local_8 + 4,local_28);
      (**(code **)(*piVar1 + 0x18))(piVar1,&local_1c);
      (**(code **)(local_8[4] + 0x1c))(local_8 + 4,local_1c);
      piVar1 = param_2 + 5;
      (**(code **)(param_2[5] + 0xc))(piVar1,&local_1c);
      (**(code **)(local_8[5] + 0x10))(local_8 + 5,local_1c);
      (**(code **)(*piVar1 + 0x14))(piVar1,&local_c);
      (**(code **)(local_8[5] + 0x18))(local_8 + 5,local_c);
      (**(code **)(*piVar1 + 0x1c))(piVar1,&local_14);
      (**(code **)(local_8[5] + 0x20))(local_8 + 5,local_14);
      (**(code **)(*piVar1 + 0x24))(piVar1,&local_14);
      (**(code **)(local_8[5] + 0x28))(local_8 + 5,local_14);
      (**(code **)(*piVar1 + 0x2c))(piVar1,&local_c);
      (**(code **)(local_8[5] + 0x30))(local_8 + 5,local_c);
      (**(code **)(*piVar1 + 0x34))(piVar1,&local_c);
      (**(code **)(local_8[5] + 0x38))(local_8 + 5,local_c);
      (**(code **)(*piVar1 + 0x4c))(piVar1,&local_c);
      (**(code **)(local_8[5] + 0x50))(local_8 + 5,local_c);
      (**(code **)(*piVar1 + 0x54))(piVar1,&local_1c);
      (**(code **)(local_8[5] + 0x58))(local_8 + 5,local_1c);
      (**(code **)(*piVar1 + 100))(piVar1,&local_14);
      (**(code **)(local_8[5] + 0x68))(local_8 + 5,local_14);
      (**(code **)(*piVar1 + 0x5c))(piVar1,&local_c);
      (**(code **)(local_8[5] + 0x60))(local_8 + 5,local_c);
      (**(code **)(*piVar1 + 0x74))(piVar1,&local_14);
      (**(code **)(local_8[5] + 0x78))(local_8 + 5,local_14);
      (**(code **)(*(int *)this + 0x30))(this,local_8);
      (**(code **)(local_8[4] + 0x2c))(local_8 + 4,1);
      FUN_660235f0(this,(int *)&local_8);
      piVar1 = param_3;
    }
    else {
      local_8 = param_2;
      (**(code **)(*param_2 + 4))(param_2);
      piVar1 = param_3;
    }
  }
  if ((*(int *)((int)this + 0x18) != 0) && (param_1 != (int *)0x0)) {
    piVar1 = param_1 + 4;
    local_24 = 1;
    local_3c = 0;
    local_38 = 0;
    (**(code **)(param_1[4] + 0x10))(piVar1,&local_44);
    param_2 = (int *)0x0;
    local_14 = (float)(**(code **)(**(int **)((int)this + 0x30) + 0x14))
                                (*(int **)((int)this + 0x30),local_44,local_40,&param_2);
    if (-1 < (int)local_14) {
      local_14 = (float)(**(code **)(*param_2 + 0x14))(param_2,&local_24);
    }
    if ((-1 < (int)local_14) && (local_18 < local_24)) {
      local_14 = (float)(**(code **)(*param_2 + 0x18))(param_2,local_18,&local_3c);
    }
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))(param_2);
      param_2 = (int *)0x0;
    }
    if ((local_18 < local_24) && (-1 < (int)local_14)) {
      local_10 = (int *)FUN_660243d0();
      (**(code **)(*local_10 + 4))(local_10);
      (**(code **)(local_10[4] + 0x14))(local_10 + 4,local_3c,local_38);
      local_28 = 0;
      local_1c = 0;
      local_20 = (int *)0x0;
      (**(code **)(*piVar1 + 0x20))(piVar1,&local_28);
      (**(code **)(local_10[4] + 0x24))(local_10 + 4,local_28);
      (**(code **)(*piVar1 + 0x30))(piVar1,&local_20);
      (**(code **)(local_10[4] + 0x34))(local_10 + 4,local_20);
      (**(code **)(*piVar1 + 0x38))(piVar1,&local_1c);
      (**(code **)(local_10[4] + 0x3c))(local_10 + 4,local_1c);
      (**(code **)(local_10[4] + 0x2c))(local_10 + 4,1);
      if ((*(int *)((int)this + 0x14) != 0) && (local_8 != (int *)0x0)) {
        (**(code **)(*piVar1 + 0x18))(piVar1,&local_2c);
        (**(code **)(local_10[4] + 0x18))(local_10 + 4,&param_1);
        if (local_2c < (float)param_1) {
          (**(code **)(*param_3 + 0x1c))(param_3,&local_14);
          if ((float)param_1 <= local_14) {
            local_c = local_14 - (float)param_1;
          }
          else {
            local_c = 1.0;
          }
          (**(code **)(local_8[4] + 0x1c))(local_8 + 4,local_c);
        }
      }
      FUN_660236f0(this,(int *)&local_10);
      piVar1 = param_3;
    }
    else {
      local_10 = param_1;
      (**(code **)(*param_1 + 4))(param_1);
      piVar1 = param_3;
    }
  }
  (**(code **)(*piVar1 + 0x14))(piVar1,&local_34);
  FUN_66023850(this,(int)local_10,(int)local_8,local_34);
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
    local_10 = (int *)0x0;
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))(param_4);
  }
  return;
}


