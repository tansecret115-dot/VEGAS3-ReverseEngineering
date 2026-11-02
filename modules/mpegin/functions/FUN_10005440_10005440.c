/* Module: mpegin.dll
   Function: FUN_10005440
   Address: 10005440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10005440(int param_1,DWORD param_2,LPCSTR param_3)

{
  DWORD DVar1;
  HANDLE pvVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  DVar1 = param_2;
  if (*(int *)(param_2 + 0xb8) < 1) {
    pvVar2 = CreateFileA(param_3,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000080,(HANDLE)0x0);
    *(HANDLE *)(DVar1 + 0x28) = pvVar2;
    if (pvVar2 == (HANDLE)0xffffffff) {
      FUN_10007e90(param_1,(byte *)s_Unable_to_open_file__s_10018a0c);
      return 1;
    }
  }
  if (*(int *)(DVar1 + 0xb8) < 2) {
    DVar3 = GetFileSize(*(HANDLE *)(DVar1 + 0x28),&param_2);
    if (DVar3 == 0xffffffff) {
      DVar4 = GetLastError();
      if (DVar4 != 0) {
        FUN_10007e90(param_1,(byte *)s_Unable_to_get_the_size_of_the_in_100189e0);
        return 1;
      }
    }
    *(DWORD *)(DVar1 + 0x48) = DVar3;
    *(DWORD *)(DVar1 + 0x4c) = param_2;
  }
  return 0;
}


