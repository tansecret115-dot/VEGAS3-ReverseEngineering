/* Module: pncrt.dll
   Function: __RTtypeid
   Address: 7801a7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl __RTtypeid(int *param_1)

{
  int iVar1;
  BOOL BVar2;
  __non_rtti_object local_38 [12];
  bad_typeid local_2c [12];
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
                    /* 0x1a7a0  90  __RTtypeid */
  local_8 = 0xffffffff;
  puStack_c = &DAT_78037958;
  pcStack_10 = except_handler3;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffac;
  if (param_1 == (int *)0x0) {
    ExceptionList = &local_14;
    local_1c = &stack0xffffffac;
    bad_typeid::bad_typeid(local_2c,"Attempted a typeid of NULL pointer!");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_2c,(ThrowInfo *)&DAT_78038200);
  }
  local_8 = 0;
  iVar1 = *(int *)(*param_1 + -4);
  ExceptionList = &local_14;
  local_20 = iVar1;
  BVar2 = IsBadReadPtr(*(void **)(iVar1 + 0xc),8);
  if (BVar2 == 0) {
    ExceptionList = local_14;
    return *(undefined4 *)(iVar1 + 0xc);
  }
  __non_rtti_object::__non_rtti_object(local_38,"Bad read pointer - no RTTI data!");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_38,(ThrowInfo *)&DAT_780381e0);
}


