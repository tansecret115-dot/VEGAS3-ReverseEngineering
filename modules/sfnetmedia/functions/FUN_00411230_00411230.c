/* Module: sfnetmedia.dll
   Function: FUN_00411230
   Address: 00411230
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00411230(int param_1)

{
  uchar *puVar1;
  HWND pHVar2;
  uchar *puVar3;
  HANDLE hFile;
  BOOL BVar4;
  uchar uVar5;
  uchar *lpsz;
  int iVar6;
  _FILETIME local_27c;
  _SYSTEMTIME local_274;
  undefined1 local_264 [32];
  uchar auStack_244 [60];
  uchar local_208 [260];
  BYTE local_104 [260];
  
  iVar6 = **(int **)(param_1 + 0x34);
  if (iVar6 <= *(int *)(param_1 + 0x38)) {
    return 0x4e001;
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x203);
  SendMessageA(pHVar2,0x402,(*(int *)(param_1 + 0x38) * 100) / iVar6,0);
  puVar1 = *(uchar **)(*(int *)(*(int *)(param_1 + 0x34) + 8) + *(int *)(param_1 + 0x38) * 4);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x205);
  puVar3 = (uchar *)FUN_00418380(DAT_0044172c,0x88);
  FUN_004170b0(pHVar2,puVar3);
  uVar5 = *puVar1;
  lpsz = (uchar *)0x0;
  puVar3 = puVar1;
  if (uVar5 != '\0') {
    do {
      if (uVar5 == '/') {
        lpsz = puVar3;
      }
      puVar3 = (uchar *)CharNextA((LPCSTR)puVar3);
      uVar5 = *puVar3;
    } while (uVar5 != '\0');
    if (lpsz != (uchar *)0x0) goto LAB_004112e1;
  }
  lpsz = puVar3;
LAB_004112e1:
  if (*lpsz == '\0') {
    return -0x7ffb1f0b;
  }
  CharNextA((LPCSTR)lpsz);
  SHGetSpecialFolderPathA((HWND)0x0,(LPSTR)local_104,0x1a,1);
  FUN_00413260(local_104,0x104);
  FUN_004156f0(local_208,(BYTE *)"%s%s\\%s");
  iVar6 = 0;
  if ((*(int *)(param_1 + 0x20) == 0) &&
     (hFile = CreateFileA((LPCSTR)local_208,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0)
     , hFile != (HANDLE)0xffffffff)) {
    local_27c.dwLowDateTime = 0;
    local_27c.dwHighDateTime = 0;
    BVar4 = GetFileTime(hFile,(LPFILETIME)0x0,(LPFILETIME)0x0,&local_27c);
    if (BVar4 != 0) {
      local_274.wYear = 0;
      local_274.wMonth = 0;
      local_274.wDayOfWeek = 0;
      local_274.wDay = 0;
      local_274.wHour = 0;
      local_274.wMinute = 0;
      local_274.wSecond = 0;
      local_274.wMilliseconds = 0;
      BVar4 = FileTimeToSystemTime(&local_27c,&local_274);
      if (BVar4 != 0) {
        local_264[0] = 0;
        iVar6 = InternetTimeFromSystemTime(&local_274,0,local_264,0x1e);
        if (iVar6 != 0) {
          FUN_004156f0(auStack_244,(BYTE *)"If-Modified-Since: %s\r\n");
        }
      }
    }
    CloseHandle(hFile);
  }
  _mbscat(local_208,".tmp");
  iVar6 = FUN_004291c0(*(void **)(param_1 + 0x28),puVar1,"*/*",
                       (uchar *)(-(uint)(iVar6 != 0) & (uint)auStack_244),local_208);
  if (iVar6 != 0x4e011) {
    return iVar6;
  }
  *(undefined4 *)(param_1 + 0x2c) = 2;
  return 0x4e011;
}


