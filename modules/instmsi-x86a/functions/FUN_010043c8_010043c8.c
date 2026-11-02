/* Module: InstMsi-x86a.exe
   Function: FUN_010043c8
   Address: 010043c8
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_010043c8(int param_1,WORD param_2,WORD param_3)

{
  BOOL BVar1;
  _FILETIME local_14;
  _FILETIME local_c;
  
  if (((*(int *)(&DAT_0100b844 + param_1 * 0x18) != 1) &&
      (BVar1 = DosDateTimeToFileTime(param_2,param_3,&local_14), BVar1 != 0)) &&
     (BVar1 = LocalFileTimeToFileTime(&local_14,&local_c), BVar1 != 0)) {
    BVar1 = SetFileTime(*(HANDLE *)(&DAT_0100b854 + param_1 * 0x18),&local_c,&local_c,&local_c);
    return BVar1 != 0;
  }
  return false;
}


