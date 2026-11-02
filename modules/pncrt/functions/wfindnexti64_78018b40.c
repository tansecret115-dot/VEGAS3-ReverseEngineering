/* Module: pncrt.dll
   Function: wfindnexti64
   Address: 78018b40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* wfindnexti64 */

undefined4 __cdecl wfindnexti64(HANDLE param_1,uint *param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  _WIN32_FIND_DATAW local_250;
  
                    /* 0x18b40  524  _wfindnexti64 */
  BVar1 = FindNextFileW(param_1,&local_250);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    switch(DVar2) {
    case 2:
    case 3:
    case 0x12:
      piVar3 = _errno();
      *piVar3 = 2;
      return 0xffffffff;
    default:
      piVar3 = _errno();
      *piVar3 = 0x16;
      return 0xffffffff;
    case 8:
      piVar3 = _errno();
      *piVar3 = 0xc;
      return 0xffffffff;
    }
  }
  *param_2 = -(uint)(local_250.dwFileAttributes != 0x80) & local_250.dwFileAttributes;
  uVar4 = FUN_78018460(&local_250.ftCreationTime);
  param_2[1] = uVar4;
  uVar4 = FUN_78018460(&local_250.ftLastAccessTime);
  param_2[2] = uVar4;
  uVar4 = FUN_78018460(&local_250.ftLastWriteTime);
  param_2[3] = uVar4;
  lVar5 = __allmul(local_250.nFileSizeHigh,0,0,1);
  *(ulonglong *)(param_2 + 4) = lVar5 + (ulonglong)local_250.nFileSizeLow;
  wcscpy((wchar_t *)(param_2 + 6),local_250.cFileName);
  return 0;
}


