/* Module: mp3plug.dll
   Function: FUN_5f690030
   Address: 5f690030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f690030(LPCSTR param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  HANDLE hFile;
  HGLOBAL pvVar3;
  LPVOID lpBuffer;
  BOOL BVar4;
  undefined4 uVar5;
  int *local_20;
  undefined4 local_1c;
  int local_18;
  LONG local_14;
  DWORD local_10 [3];
  LONG local_4;
  
  local_1c = 0;
  *param_2 = 0xac44;
  iVar2 = FUN_5f710890(&local_20);
  if (iVar2 != 0) {
    return 0x80004005;
  }
  local_18 = 0;
  local_14 = 0;
  hFile = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000000,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return 0x8004e007;
  }
  local_10[0] = GetFileSize(hFile,(LPDWORD)0x0);
  local_10[1] = 0;
  FUN_5f688240(hFile,local_10,&local_18,(uint *)0x0);
  local_10[2] = local_18;
  local_4 = local_14;
  SetFilePointer(hFile,local_18,&local_4,0);
  param_1 = (LPCSTR)0x4000;
  pvVar3 = GlobalAlloc(0x42,0x4000);
  lpBuffer = GlobalLock(pvVar3);
  if (lpBuffer == (LPVOID)0x0) {
    uVar5 = 0x8007000e;
    goto LAB_5f690176;
  }
  BVar4 = ReadFile(hFile,lpBuffer,(DWORD)param_1,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  if (BVar4 == 0) {
    uVar5 = 0x8004e008;
  }
  else {
    param_1 = param_1 + -0x400;
    cVar1 = (**(code **)(*local_20 + 4))(lpBuffer,param_1,local_10[0]);
    if (cVar1 != '\0') {
      iVar2 = (**(code **)(*local_20 + 8))();
      if (iVar2 != 0) {
        *param_2 = *(undefined4 *)(iVar2 + 8);
        uVar5 = local_1c;
        goto LAB_5f690155;
      }
    }
    uVar5 = 0x80004005;
  }
LAB_5f690155:
  pvVar3 = GlobalHandle(lpBuffer);
  GlobalUnlock(pvVar3);
  pvVar3 = GlobalHandle(lpBuffer);
  GlobalFree(pvVar3);
LAB_5f690176:
  (**(code **)*local_20)();
  CloseHandle(hFile);
  return uVar5;
}


