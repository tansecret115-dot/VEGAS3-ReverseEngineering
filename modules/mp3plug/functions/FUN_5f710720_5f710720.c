/* Module: mp3plug.dll
   Function: FUN_5f710720
   Address: 5f710720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_5f710720(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 *param_6)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar1 = ExceptionList;
  local_8 = 0xffffffff;
  puStack_c = &LAB_5f710880;
  local_10 = ExceptionList;
  if (param_6 == (undefined4 *)0x0) {
    return 0xc0000001;
  }
  ExceptionList = &local_10;
  *param_6 = 0;
  if (param_2 < 0x800) {
    ExceptionList = pvVar1;
    return 0xc1010003;
  }
  pvVar1 = (void *)FUN_5f681b80(0xca40);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    local_8 = 0;
    FUN_5f711ef0(pvVar1,param_1,param_2,param_3,param_4,param_5);
  }
  if (pvVar1 != (void *)0x0) {
    *param_6 = pvVar1;
    ExceptionList = local_10;
    return 0;
  }
  ExceptionList = local_10;
  return 0xc0000002;
}


