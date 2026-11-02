/* Module: vidcap30.exe
   Function: FUN_0056e730
   Address: 0056e730
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0056e730(undefined4 param_1)

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
  iVar2 = FUN_0056e2c0(param_1,&local_4);
  if (iVar2 < 0) {
    local_8 = 0x8004e12d;
  }
  else {
    if (*(int *)(local_4 + 0x20) == 0) {
      iVar2 = *(int *)(local_4 + 0x18);
      uVar1 = FUN_00577190();
      iVar3 = FUN_00572cb0(uVar1);
      iVar4 = FUN_005731b0(param_1);
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
      FUN_00577170();
      local_8 = 0x8004e13e;
    }
  }
  if (local_4 != 0) {
    FUN_00404b20(local_4);
  }
  return local_8;
}


