/* Module: qt4plug.dll
   Function: FUN_5f51da40
   Address: 5f51da40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f51da40(void *this,int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int local_44;
  short local_40;
  int local_3c;
  int local_38;
  int local_34 [2];
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f596790;
  puStack_10 = &DAT_5f594586;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff9c;
  iVar3 = 1;
  ExceptionList = &local_14;
  local_2c = FUN_5f51d880(this,param_1,local_34);
  local_44 = local_34[0];
  if (*(int *)((int)this + 0x70) == 0) {
    uVar2 = FUN_5f57aed0();
    *(undefined4 *)((int)this + 0x70) = uVar2;
  }
  local_28 = 0;
  if (*(int *)((int)this + 0x1d0) != 0) {
    local_28 = 8;
  }
  local_24 = 0;
  do {
    if (local_2c <= local_24) {
      ExceptionList = local_14;
      return iVar3;
    }
    sVar1 = FUN_5f5767f0();
    if (sVar1 != 0) {
      ExceptionList = local_14;
      return -0x7ffb1fe1;
    }
    if (local_3c != *(int *)((int)this + 0x1a0)) {
      iVar3 = FUN_5f57af10();
      if (iVar3 == 0) {
        ExceptionList = local_14;
        return -0x7ff8fff2;
      }
      FUN_5f576730();
      iVar3 = FUN_5f51d930((int)this);
      FUN_5f57b390();
      if (iVar3 < 0) {
        *(undefined4 *)((int)this + 0x1a0) = 0;
        ExceptionList = local_14;
        return iVar3;
      }
      *(int *)((int)this + 0x1a0) = local_3c;
    }
    FUN_5f57b0b0();
    local_8 = 0;
    uVar2 = FUN_5f580b80();
    local_8 = 0xffffffff;
    local_20 = uVar2;
    FUN_5f57b0d0();
    if ((short)uVar2 != 0) {
      ExceptionList = local_14;
      return -0x7ffb1fe1;
    }
    if (local_40 == 0) {
      FUN_5f576790();
    }
    *(int *)((int)this + 0x198) = local_44;
    *(int *)((int)this + 0x19c) = local_38;
    local_44 = local_44 + local_38;
    iVar3 = 0;
    local_24 = local_24 + 1;
  } while( true );
}


