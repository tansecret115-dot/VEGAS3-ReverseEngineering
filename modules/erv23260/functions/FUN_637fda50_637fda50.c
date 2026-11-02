/* Module: erv23260.dll
   Function: FUN_637fda50
   Address: 637fda50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_637fda50(void *this,uint param_1,int param_2,undefined4 param_3,byte param_4,uint *param_5,
            int param_6,undefined1 *param_7)

{
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  if ((param_1 & 1) == 0) {
    local_10 = 1;
    local_14 = 0xfffffffd;
    if (((param_4 & 1) != 0) ||
       ((*(int *)((int)this + 0x334) == 0 && ((*(byte *)(param_2 + -1) & 0x1f) == 0)))) {
      local_14 = 0;
    }
  }
  else {
    local_14 = 0xffffffff;
    local_10 = 3;
    if ((param_4 & 2) == 0) {
      if ((*(int *)((int)this + 0x334) == 0) && ((*(byte *)(param_2 + 1) & 0x1f) == 0)) {
        local_10 = 0;
      }
    }
    else {
      local_10 = 0;
    }
  }
  if (param_1 < 2) {
    local_8 = 2;
    local_c = *(int *)((int)this + 0x3b4) * -4 + 2;
    if (((param_4 & 4) != 0) ||
       ((*(int *)((int)this + 0x334) == 0 &&
        ((*(byte *)(param_2 - *(int *)((int)this + 0x3b4)) & 0x1f) == 0)))) {
      local_c = 0;
    }
  }
  else {
    local_c = -2;
    local_8 = 0;
  }
  FUN_637fd810(this,param_6,param_5,(int)&local_14,param_7,param_3,param_1);
  return;
}


