/* Module: sfmarket2.dll
   Function: FUN_0043c330
   Address: 0043c330
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043c330(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  UINT uMode;
  FARPROC pFVar2;
  int iVar3;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0049d408;
  puStack_10 = &DAT_00493130;
  local_14 = ExceptionList;
  iVar3 = 0;
  ExceptionList = &local_14;
  iVar1 = FUN_00426ac0(6);
  if (iVar1 == 0) {
    iVar3 = 1;
  }
  else {
    DAT_004ab198 = (HMODULE)0x0;
    local_8 = 0;
    uMode = SetErrorMode(0x8001);
    DAT_004ab198 = LoadLibraryA("wtsapi32.dll");
    SetErrorMode(uMode);
    if (DAT_004ab198 < (HMODULE)0x20) {
      DAT_004ab198 = (HMODULE)0x0;
      iVar3 = -0x7ffb1f2c;
    }
    if ((-1 < iVar3) &&
       ((pFVar2 = GetProcAddress(DAT_004ab198,"WTSRegisterSessionNotification"),
        pFVar2 == (FARPROC)0x0 || (iVar1 = (*pFVar2)(param_1,param_2), iVar1 == 0)))) {
      iVar3 = -0x7fffbffb;
    }
  }
  ExceptionList = local_14;
  return iVar3;
}


