/* Module: mpegin.dll
   Function: FUN_100053c0
   Address: 100053c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_100053c0(int param_1,LONG param_2,LONG param_3)

{
  DWORD DVar1;
  LONG local_4;
  
  local_4 = param_3;
  DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 0x28),param_2,&local_4,0);
  if (DVar1 == 0xffffffff) {
    DVar1 = GetLastError();
    if (DVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


