/* Module: vegas30.exe
   Function: FUN_005ff510
   Address: 005ff510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005ff510(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8;
  int local_4;
  
  iVar4 = 0;
  local_8 = 0x8004e13e;
  iVar3 = 0;
  local_4 = 0;
  iVar2 = FUN_005ff0a0(param_1,&local_4);
  if (iVar2 < 0) {
    local_8 = 0x8004e12d;
  }
  else {
    if (*(int *)(local_4 + 0x20) == 0) {
      iVar2 = *(int *)(local_4 + 0x18);
      uVar1 = FUN_00607f70();
      iVar3 = FUN_00603a90(uVar1);
      iVar4 = FUN_00603f90(param_1);
    }
    else {
      iVar2 = 0;
    }
    if (*(int *)(local_4 + 4) == 0) {
      if (iVar2 == 0) {
        if (iVar3 == 0) {
          if (iVar4 != 0) {
            local_8 = 0x4e132;
          }
        }
        else {
          local_8 = 0x4e131;
        }
      }
    }
    else {
      FUN_00607f50();
      local_8 = 0x8004e13e;
    }
  }
  if (local_4 != 0) {
    FUN_0040bfc0(local_4);
  }
  return local_8;
}


