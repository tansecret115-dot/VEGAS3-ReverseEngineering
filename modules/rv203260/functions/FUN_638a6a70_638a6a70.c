/* Module: rv203260.dll
   Function: FUN_638a6a70
   Address: 638a6a70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_638a6a70(void *this,undefined4 param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  switch(param_1) {
  case 0x10007:
    local_10 = 0x12;
    local_c = 2;
    local_8 = 0;
    FUN_638a7ff0(this,&local_10);
    if (local_8 != 0) {
      *param_2 = 1;
      return 0;
    }
    local_10 = 0x11;
    local_c = 2;
    local_8 = 0;
    FUN_638a7ff0(this,&local_10);
    *param_2 = (uint)(local_8 != 0);
    return 0;
  default:
    return 0x80004005;
  case 0x10009:
    if ((*(int *)((int)this + 0x166) != 0) && (*(int *)((int)this + 0x17e) == 0)) {
      *param_2 = 1;
      return 0;
    }
    break;
  case 0x1000a:
    local_10 = 3;
    local_c = 2;
    local_8 = 0;
    uVar1 = FUN_638a7ff0(this,&local_10);
    *param_2 = (uint)(local_8 != 0);
    return uVar1;
  case 0x1001e:
    if ((*(int *)((int)this + 0x16a) != 0) && (*(int *)((int)this + 0x182) == 0)) {
      *param_2 = 1;
      return 0;
    }
    break;
  case 0x1002e:
    *param_2 = *(uint *)((int)this + 0x2e);
    return 0;
  }
  *param_2 = 0;
  return 0;
}


