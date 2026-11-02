/* Module: rv103260.dll
   Function: FUN_636a3870
   Address: 636a3870
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_636a3870(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  int local_4c;
  int local_48;
  int local_38;
  undefined1 local_30;
  int local_2f;
  int local_2b;
  undefined1 local_27;
  int local_26;
  int local_22;
  int local_1a;
  int local_e;
  int local_a;
  
  switch(param_1) {
  case 0x10001:
    FUN_636a34f0(this,1,&local_4c);
    local_27 = (undefined1)*param_2;
    break;
  case 0x10002:
    FUN_636a34f0(this,1,&local_4c);
    local_26 = *param_2;
    break;
  case 0x10003:
    FUN_636a34f0(this,1,&local_4c);
    local_4c = *param_2;
    break;
  case 0x10004:
    FUN_636a34f0(this,1,&local_4c);
    local_2f = *param_2;
    break;
  case 0x10005:
    FUN_636a34f0(this,1,&local_4c);
    local_30 = (undefined1)*param_2;
    break;
  default:
    iVar1 = FUN_636a3520(this,param_1,param_2);
    return -(uint)(iVar1 != 0) & 0x70;
  case 0x10007:
    FUN_636a34f0(this,1,&local_4c);
    local_2b = *param_2;
    break;
  case 0x10008:
    FUN_636a34f0(this,1,&local_4c);
    local_48 = *param_2;
    break;
  case 0x10009:
    FUN_636a34f0(this,1,&local_4c);
    local_a = *param_2;
    break;
  case 0x1000d:
    *(int *)((int)this + 0xcc) = *param_2;
    return 0x80004005;
  case 0x1000e:
    *(int *)((int)this + 0x94) = *param_2;
    return 0x80004005;
  case 0x1000f:
    FUN_636a34f0(this,1,&local_4c);
    local_e = *param_2;
    break;
  case 0x10010:
    FUN_636a34f0(this,1,&local_4c);
    local_1a = *param_2;
    break;
  case 0x10011:
    FUN_636a34f0(this,1,&local_4c);
    local_38 = *param_2;
    break;
  case 0x10012:
    FUN_636a34f0(this,1,&local_4c);
    iVar1 = *param_2;
    if (iVar1 == 0) {
      local_a = 0;
      local_e = 0;
      local_2f = 1;
    }
    else if (iVar1 == 1) {
      local_e = 0;
      local_2f = 1;
      local_a = 1;
    }
    else if (iVar1 == 2) {
      local_a = 0;
      local_2f = 1;
      local_e = 1;
    }
    else if (iVar1 == 3) {
      local_2f = 0;
      local_e = 0;
      local_a = 1;
    }
    break;
  case 0x10013:
    if (*param_2 == 0x59555632) {
      *(undefined4 *)((int)this + 0xd8) = 0x59555632;
    }
    return 0;
  case 0x1001b:
    FUN_636a34f0(this,1,&local_4c);
    local_22 = *param_2;
  }
  iVar1 = FUN_636a3520(this,1,&local_4c);
  return -(uint)(iVar1 != 0) & 0x71;
}


