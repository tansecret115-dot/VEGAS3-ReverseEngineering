/* Module: rv103260.dll
   Function: FUN_636a3b40
   Address: 636a3b40
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_636a3b40(void *this,undefined4 param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint local_70;
  uint local_6c;
  uint local_5c;
  uint local_54;
  undefined1 uStack_50;
  uint local_4f;
  uint uStack_4b;
  undefined1 uStack_47;
  uint local_46;
  uint local_42;
  uint local_3e;
  uint local_32;
  uint local_2e;
  undefined1 local_28 [28];
  int local_c;
  undefined4 uStack_8;
  
  uVar1 = 0x80004005;
  switch(param_1) {
  case 0x10001:
    FUN_636a34f0(this,1,&local_70);
    *param_2 = uStack_4b & 0xff;
    return 0;
  case 0x10002:
    FUN_636a34f0(this,1,&local_70);
    *param_2 = CONCAT13(uStack_47,uStack_4b._1_3_);
    return 0;
  case 0x10003:
    FUN_636a34f0(this,1,&local_70);
    *param_2 = local_70;
    return 0;
  case 0x10004:
    FUN_636a34f0(this,1,&local_70);
    *param_2 = CONCAT13(uStack_50,local_54._1_3_);
    return 0;
  case 0x10005:
    FUN_636a34f0(this,1,&local_70);
    *param_2 = local_54 & 0xff;
    return 0;
  default:
    iVar2 = FUN_636a34f0(this,param_1,param_2);
    return -(uint)(iVar2 != 0) & 0x70;
  case 0x10007:
    FUN_636a34f0(this,1,&local_70);
    *param_2 = local_4f;
    return 0;
  case 0x10008:
    FUN_636a34f0(this,1,&local_70);
    *param_2 = local_6c;
    return 0;
  case 0x10009:
    FUN_636a34f0(this,1,&local_70);
    *param_2 = local_2e;
    return 0;
  case 0x1000b:
    FUN_636a34f0(this,1,&local_70);
    *param_2 = local_42;
    return 0;
  case 0x1000c:
    FUN_636a34f0(this,4,local_28);
    uVar1 = ftol();
    *param_2 = uVar1;
    return 0;
  case 0x1000d:
    goto switchD_636a3b64_caseD_1000d;
  case 0x1000e:
    *param_2 = *(uint *)((int)this + 0x94);
    return uVar1;
  case 0x1000f:
    FUN_636a34f0(this,1,&local_70);
    *param_2 = local_32;
    return 0;
  case 0x10010:
    FUN_636a34f0(this,1,&local_70);
    *param_2 = local_3e;
    return 0;
  case 0x10011:
    FUN_636a34f0(this,1,&local_70);
    *param_2 = local_5c;
    return 0;
  case 0x10014:
    *param_2 = *(uint *)((int)this + 0xe0);
    return 0;
  case 0x10015:
    *param_2 = *(uint *)((int)this + 0xe4);
    return 0;
  case 0x10016:
    uStack_8 = 0;
    local_c = *(int *)((int)this + 0xdc) + -3;
    uVar1 = ftol();
    *param_2 = uVar1;
    uVar1 = 0;
switchD_636a3b64_caseD_1000d:
    *param_2 = *(uint *)((int)this + 0xcc);
    return uVar1;
  case 0x1001b:
    FUN_636a34f0(this,1,&local_70);
    *param_2 = local_46;
    return 0;
  }
}


