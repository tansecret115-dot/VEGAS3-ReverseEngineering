/* Module: pncrt.dll
   Function: wfindfirst
   Address: 780187f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* wfindfirst */

HANDLE __cdecl wfindfirst(LPCWSTR param_1,uint *param_2)

{
  HANDLE pvVar1;
  DWORD DVar2;
  int *piVar3;
  uint uVar4;
  _WIN32_FIND_DATAW local_250;
  
                    /* 0x187f0  521  _wfindfirst */
  pvVar1 = FindFirstFileW(param_1,&local_250);
  if (pvVar1 == (HANDLE)0xffffffff) {
    DVar2 = GetLastError();
    switch(DVar2) {
    case 2:
    case 3:
    case 0x12:
      piVar3 = _errno();
      *piVar3 = 2;
      return (HANDLE)0xffffffff;
    default:
      piVar3 = _errno();
      *piVar3 = 0x16;
      return (HANDLE)0xffffffff;
    case 8:
      piVar3 = _errno();
      *piVar3 = 0xc;
      return (HANDLE)0xffffffff;
    }
  }
  *param_2 = -(uint)(local_250.dwFileAttributes != 0x80) & local_250.dwFileAttributes;
  uVar4 = FUN_78018460(&local_250.ftCreationTime);
  param_2[1] = uVar4;
  uVar4 = FUN_78018460(&local_250.ftLastAccessTime);
  param_2[2] = uVar4;
  uVar4 = FUN_78018460(&local_250.ftLastWriteTime);
  param_2[3] = uVar4;
  param_2[4] = local_250.nFileSizeLow;
  wcscpy((wchar_t *)(param_2 + 5),local_250.cFileName);
  return pvVar1;
}


