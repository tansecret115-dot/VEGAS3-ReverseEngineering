/* Module: oggplug.dll
   Function: FUN_00408fa0
   Address: 00408fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00408fa0(int *param_1)

{
  HGLOBAL pvVar1;
  int *piVar2;
  int iStack_4;
  
  param_1[0x72] = 0;
  SetEvent((HANDLE)param_1[4]);
  if ((HANDLE)param_1[0x73] != (HANDLE)0x0) {
    WaitForSingleObject((HANDLE)param_1[0x73],0xffffffff);
    CloseHandle((HANDLE)param_1[0x73]);
    param_1[0x73] = 0;
  }
  if (param_1[1] != 0) {
    InternetCloseHandle(param_1[1]);
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    InternetCloseHandle(*param_1);
    *param_1 = 0;
  }
  piVar2 = param_1 + 0x4e;
  iStack_4 = 10;
  do {
    if ((LPCVOID)*piVar2 != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle((LPCVOID)*piVar2);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle((LPCVOID)*piVar2);
      GlobalFree(pvVar1);
      *piVar2 = 0;
    }
    piVar2[10] = 0;
    piVar2[0x14] = 0;
    piVar2 = piVar2 + 1;
    iStack_4 = iStack_4 + -1;
  } while (iStack_4 != 0);
  if ((param_1[5] != 0) && ((char)param_1[7] != '\0')) {
    CloseHandle((HANDLE)param_1[6]);
    DeleteFileA((LPCSTR)(param_1 + 7));
    param_1[5] = 0;
    *(CHAR *)(param_1 + 7) = '\0';
  }
  return 0;
}


