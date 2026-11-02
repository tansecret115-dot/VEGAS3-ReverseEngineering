/* Module: sftrans1.dll
   Function: FUN_005300f0
   Address: 005300f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005300f0(undefined4 param_1)

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
  iVar2 = FUN_0052fc80(param_1,&local_4);
  if (iVar2 < 0) {
    local_8 = 0x8004e12d;
  }
  else {
    if (*(int *)(local_4 + 0x20) == 0) {
      iVar2 = *(int *)(local_4 + 0x18);
      uVar1 = FUN_00538590();
      iVar3 = FUN_00534670(uVar1);
      iVar4 = FUN_00534b70(param_1);
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
      FUN_00538570();
      local_8 = 0x8004e13e;
    }
  }
  if (local_4 != 0) {
    FUN_004035f0(local_4);
  }
  return local_8;
}


