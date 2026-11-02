/* Module: wmfplug2.dll
   Function: FUN_00476a90
   Address: 00476a90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00476a90(int param_1)

{
  size_t sVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  CHAR *lpMultiByteStr;
  wchar_t *lpWideCharStr;
  int local_380;
  int local_37c [3];
  CHAR local_370 [360];
  wchar_t local_208 [28];
  undefined2 local_1d0;
  
  if (8 < *(uint *)(param_1 + 0x70)) {
    *(undefined4 *)(param_1 + 0x70) = 8;
  }
  piVar4 = local_37c;
  for (iVar2 = 0x5d; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  local_37c[1] = *(int *)(param_1 + 0x70);
  uVar3 = 0;
  local_37c[0] = 0x174;
  if (local_37c[1] != 0) {
    local_380 = 0;
    lpMultiByteStr = local_370;
    do {
      iVar2 = *(int *)(param_1 + 0x6c) + local_380;
      if (*(wchar_t **)(iVar2 + 4) != (wchar_t *)0x0) {
        sVar1 = wcslen(*(wchar_t **)(iVar2 + 4));
        if (sVar1 < 0x20) {
          lpWideCharStr = *(wchar_t **)(iVar2 + 4);
          if ((lpWideCharStr == (LPCWSTR)0x0) || (*lpWideCharStr != L'\0')) goto LAB_00476b7a;
          if (lpMultiByteStr != (LPSTR)0x0) {
            *lpMultiByteStr = '\0';
          }
        }
        else {
          wcsncpy(local_208,*(wchar_t **)(iVar2 + 4),0x1c);
          local_1d0 = 0;
          wcscat(local_208,L"...");
          if ((&stack0x00000000 == (undefined1 *)0x208) || (local_208[0] != L'\0')) {
            lpWideCharStr = local_208;
LAB_00476b7a:
            WideCharToMultiByte(0,0,lpWideCharStr,-1,lpMultiByteStr,0x20,(LPCSTR)0x0,(LPBOOL)0x0);
          }
          else if (lpMultiByteStr != (LPSTR)0x0) {
            *lpMultiByteStr = '\0';
          }
        }
        lpMultiByteStr[0x1f] = '\0';
      }
      *(uint *)(lpMultiByteStr + 0x20) = uVar3;
      local_380 = local_380 + 0x3c;
      uVar3 = uVar3 + 1;
      lpMultiByteStr = lpMultiByteStr + 0x28;
    } while (uVar3 < *(uint *)(param_1 + 0x70));
  }
  SendMessageA(*(HWND *)(param_1 + 0x9c),0x608,0,(LPARAM)local_37c);
  return;
}


