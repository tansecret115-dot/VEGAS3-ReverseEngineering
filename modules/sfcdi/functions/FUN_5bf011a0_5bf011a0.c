/* Module: sfcdi.dll
   Function: FUN_5bf011a0
   Address: 5bf011a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf011a0(int param_1)

{
  DWORD DVar1;
  int iVar2;
  
  DVar1 = WaitForSingleObject(DAT_5bf65ff8,1000);
  if ((DVar1 != 0x102) && (DAT_5bf7c004 < 100)) {
    iVar2 = _getpid();
    (&DAT_5bf7c008)[DAT_5bf7c004 * 0x95] = iVar2;
    _mbscpy((uchar *)(&DAT_5bf7c00c + DAT_5bf7c004 * 0x95),(uchar *)&DAT_5bf65ebc);
    memmove(&DAT_5bf7c110 + DAT_5bf7c004 * 0x254,(void *)(param_1 + 4),0x14c);
    DAT_5bf7c004 = DAT_5bf7c004 + 1;
    ReleaseMutex(DAT_5bf65ff8);
    return 0;
  }
  return 0x80004005;
}


