/* Module: vegas30.exe
   Function: FUN_004e6ac0
   Address: 004e6ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004e6ac0(void)

{
  int iVar1;
  
  DAT_0064b108 = &DAT_0064cd88;
  iVar1 = _SfQueueInitialize_4(&DAT_0064cd88);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = _SfQueueInitialize_4(&DAT_0064cdac);
  if (iVar1 == 0) {
    _SfQueueDelete_4(&DAT_0064cd88);
    return false;
  }
  DAT_0064ce0c = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_004e6d80,&DAT_0064cd88,0,
                              (LPDWORD)&DAT_0064ce10);
  return DAT_0064ce0c != (HANDLE)0x0;
}


