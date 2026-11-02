/* Module: vidcap30.exe
   Function: FUN_004163e0
   Address: 004163e0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004163e0(void)

{
  int iVar1;
  
  DAT_005bb808 = &DAT_005bc200;
  iVar1 = _SfQueueInitialize_4(&DAT_005bc200);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = _SfQueueInitialize_4(&DAT_005bc224);
  if (iVar1 == 0) {
    _SfQueueDelete_4(&DAT_005bc200);
    return false;
  }
  DAT_005bc280 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_004166a0,&DAT_005bc200,0,
                              (LPDWORD)&DAT_005bc284);
  return DAT_005bc280 != (HANDLE)0x0;
}


