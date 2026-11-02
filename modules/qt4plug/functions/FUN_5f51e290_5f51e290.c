/* Module: qt4plug.dll
   Function: FUN_5f51e290
   Address: 5f51e290
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f51e38d) */

int FUN_5f51e290(int param_1,int param_2)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int local_2c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f5967c8;
  puStack_10 = &DAT_5f594586;
  local_14 = ExceptionList;
  local_2c = -0x7ff8fff2;
  bVar1 = false;
  ExceptionList = &local_14;
  if (param_2 == 0) {
    ExceptionList = &local_14;
    iVar3 = FUN_5f57af10();
    if (iVar3 == 0) goto LAB_5f51e3b2;
    bVar1 = true;
  }
  FUN_5f576730();
  local_8 = 0;
  sVar2 = FUN_5f580b60();
  local_8 = 0xffffffff;
  if (sVar2 == 0) {
    local_2c = 0;
    *(undefined4 *)(param_1 + 0x1c) = 1;
    iVar3 = 2;
    if (1 < *(int *)(param_1 + 0x18)) {
      do {
        FUN_5f576730();
        sVar2 = FUN_5f5814c0();
        if (sVar2 != 0) {
          local_2c = -0x7ffb1fe1;
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 <= *(int *)(param_1 + 0x18));
    }
    if (-1 < local_2c) {
      local_2c = 0;
    }
  }
LAB_5f51e3b2:
  if (bVar1) {
    FUN_5f57b390();
  }
  ExceptionList = local_14;
  return local_2c;
}


