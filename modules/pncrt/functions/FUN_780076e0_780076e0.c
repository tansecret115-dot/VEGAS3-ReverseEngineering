/* Module: pncrt.dll
   Function: FUN_780076e0
   Address: 780076e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_780076e0(DWORD param_1,undefined4 param_2,DWORD param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_780369f0;
  pcStack_10 = except_handler3;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_78009cc0();
  FUN_78009cc0();
  pDVar1 = FUN_78009cc0();
  pDVar1[0x1b] = param_1;
  pDVar1 = FUN_78009cc0();
  pDVar1[0x1c] = param_3;
  local_8 = 1;
  uVar2 = FUN_78007dd0(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_780077d8();
  ExceptionList = local_14;
  return uVar2;
}


