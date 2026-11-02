/* Module: pncrt.dll
   Function: FUN_78018460
   Address: 78018460
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_78018460(FILETIME *param_1)

{
  BOOL BVar1;
  int iVar2;
  _FILETIME local_18;
  _SYSTEMTIME local_10;
  
  if ((param_1->dwLowDateTime != 0) || (param_1->dwHighDateTime != 0)) {
    BVar1 = FileTimeToLocalFileTime(param_1,&local_18);
    if (BVar1 != 0) {
      BVar1 = FileTimeToSystemTime(&local_18,&local_10);
      if (BVar1 != 0) {
        iVar2 = FUN_7802e770((uint)local_10.wYear,(uint)local_10.wMonth,(uint)local_10.wDay,
                             (uint)local_10.wHour,(uint)local_10.wMinute,(uint)local_10.wSecond,-1);
        return iVar2;
      }
    }
  }
  return -1;
}


