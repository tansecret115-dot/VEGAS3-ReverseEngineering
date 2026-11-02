/* Module: sfppack3.dll
   Function: FUN_5cc79580
   Address: 5cc79580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cc79580(void *this,LPCSTR param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined3 extraout_var;
  int iVar4;
  int iVar5;
  undefined4 local_8;
  LPCVOID local_4;
  
  iVar5 = 0;
  local_8 = 0x8004e13e;
  iVar4 = 0;
  local_4 = (LPCVOID)0x0;
  iVar2 = FUN_5cc79110(this,param_1,&local_4);
  if (iVar2 < 0) {
    local_8 = 0x8004e12d;
  }
  else {
    if (*(int *)((int)local_4 + 0x20) == 0) {
      iVar2 = *(int *)((int)local_4 + 0x18);
      uVar3 = FUN_5cc81a50((int)local_4);
      iVar4 = FUN_5cc7db00(this,uVar3 & 0xffff);
      bVar1 = FUN_5cc7e000(this,param_1);
      iVar5 = CONCAT31(extraout_var,bVar1);
    }
    else {
      iVar2 = 0;
    }
    if (*(int *)((int)local_4 + 4) == 0) {
      if (iVar2 == 0) {
        if (iVar4 == 0) {
          if (iVar5 != 0) {
            local_8 = 0x4e132;
          }
        }
        else {
          local_8 = 0x4e131;
        }
      }
    }
    else {
      FUN_5cc81a30((int)local_4);
      local_8 = 0x8004e13e;
    }
  }
  if (local_4 != (LPCVOID)0x0) {
    FUN_5cc31fe0(local_4);
  }
  return local_8;
}


