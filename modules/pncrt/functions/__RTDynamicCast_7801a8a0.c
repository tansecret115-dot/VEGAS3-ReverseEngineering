/* Module: pncrt.dll
   Function: __RTDynamicCast
   Address: 7801a8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl __RTDynamicCast(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *local_44;
  bad_cast local_40 [12];
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  int *local_20;
  undefined1 *local_1c;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
                    /* 0x1a8a0  89  __RTDynamicCast */
  puStack_c = &DAT_78037978;
  pcStack_10 = except_handler3;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffa0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  local_8 = 0;
  ExceptionList = &local_14;
  iVar2 = FUN_7801a9f0(param_1);
  local_34 = iVar2;
  local_30 = __RTtypeid(param_1);
  local_28 = *(int *)(*param_1 + -4);
  local_2c = (int)param_1 + (-iVar2 - param_2);
  uVar1 = *(uint *)(*(int *)(local_28 + 0x10) + 4);
  if ((uVar1 & 1) == 0) {
    local_20 = FUN_7801aa10(iVar2,local_28,param_3,local_2c,param_4);
  }
  else if ((uVar1 & 2) == 0) {
    local_20 = FUN_7801aab0(iVar2,local_28,param_3,local_2c,param_4);
  }
  else {
    local_20 = FUN_7801ac50(iVar2,local_28,param_3,local_2c,param_4);
  }
  if (local_20 == (int *)0x0) {
    iVar3 = 0;
    local_24 = 0;
    if (param_5 != 0) {
      local_44 = "Bad dynamic_cast!";
      bad_cast::bad_cast(local_40,&local_44);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_40,(ThrowInfo *)&DAT_78038240);
    }
  }
  else {
    iVar3 = FUN_7801ae40(iVar2,local_20 + 2);
    iVar3 = iVar3 + iVar2;
  }
  ExceptionList = local_14;
  return iVar3;
}


