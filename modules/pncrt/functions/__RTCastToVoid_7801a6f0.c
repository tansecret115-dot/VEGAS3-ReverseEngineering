/* Module: pncrt.dll
   Function: __RTCastToVoid
   Address: 7801a6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl __RTCastToVoid(int *param_1)

{
  int iVar1;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
                    /* 0x1a6f0  88  __RTCastToVoid */
  puStack_c = &DAT_78037900;
  pcStack_10 = except_handler3;
  local_14 = ExceptionList;
  if (param_1 != (int *)0x0) {
    local_8 = 0;
    ExceptionList = &local_14;
    iVar1 = FUN_7801a9f0(param_1);
    ExceptionList = local_14;
    return iVar1;
  }
  return 0;
}


