/* Module: mp3plug.dll
   Function: FUN_5f697340
   Address: 5f697340
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD __thiscall FUN_5f697340(void *this,undefined4 param_1,int param_2)

{
  int *piVar1;
  HANDLE pvVar2;
  int iVar3;
  size_t sVar4;
  HGLOBAL pvVar5;
  LPSTR lpMultiByteStr;
  undefined4 uVar6;
  undefined4 *puVar7;
  DWORD DVar8;
  UINT UVar9;
  DWORD DVar10;
  int iStack_20;
  wchar_t *pwStack_10;
  
  DVar10 = 0;
  if (*(int *)((int)this + 0x1d0) == 0) {
    pvVar2 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
    *(HANDLE *)((int)this + 0x1d0) = pvVar2;
    if (pvVar2 == (HANDLE)0x0) {
      return 0x80004005;
    }
  }
  *(int *)((int)this + 0x1c0) = param_2;
  iVar3 = InternetOpenA();
  *(int *)this = iVar3;
  if (iVar3 == 0) {
    return 0x8004e007;
  }
  sVar4 = wcslen(pwStack_10);
  pvVar5 = GlobalAlloc(0x42,sVar4 + 1);
  lpMultiByteStr = GlobalLock(pvVar5);
  if (lpMultiByteStr == (LPSTR)0x0) {
    return 0x8007000e;
  }
  if ((pwStack_10 == (wchar_t *)0x0) || (*pwStack_10 != L'\0')) {
    WideCharToMultiByte(0,0,pwStack_10,-1,lpMultiByteStr,sVar4 + 1,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else {
    *lpMultiByteStr = '\0';
  }
  lpMultiByteStr[sVar4] = '\0';
  piVar1 = *(int **)((int)this + 0x134);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,6);
  }
  uVar6 = InternetOpenUrlA(*(undefined4 *)this,lpMultiByteStr,0,0);
  *(undefined4 *)((int)this + 4) = uVar6;
  pvVar5 = GlobalHandle(lpMultiByteStr);
  GlobalUnlock(pvVar5);
  pvVar5 = GlobalHandle(lpMultiByteStr);
  GlobalFree(pvVar5);
  if (*(int *)((int)this + 4) == 0) {
    DVar10 = GetLastError();
    InternetCloseHandle(*(undefined4 *)this);
    *(undefined4 *)this = 0;
    return DVar10;
  }
  piVar1 = *(int **)((int)this + 0x134);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,1,0,0);
  }
  *(undefined4 *)((int)this + 0x1bc) = 0;
  puVar7 = (undefined4 *)((int)this + 0x160);
  iVar3 = 10;
  do {
    puVar7[-10] = 0;
    *puVar7 = 0;
    puVar7[10] = 0;
    puVar7 = puVar7 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x1c4) = 1;
  *(undefined4 *)((int)this + 0x1c8) = 1;
  if (*(HANDLE *)((int)this + 8) == (HANDLE)0x0) {
    pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
    *(HANDLE *)((int)this + 8) = pvVar2;
  }
  else {
    ResetEvent(*(HANDLE *)((int)this + 8));
  }
  if (*(HANDLE *)((int)this + 0xc) == (HANDLE)0x0) {
    pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
    *(HANDLE *)((int)this + 0xc) = pvVar2;
  }
  else {
    ResetEvent(*(HANDLE *)((int)this + 0xc));
  }
  if (*(HANDLE *)((int)this + 0x10) == (HANDLE)0x0) {
    pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
    *(HANDLE *)((int)this + 0x10) = pvVar2;
  }
  else {
    ResetEvent(*(HANDLE *)((int)this + 0x10));
  }
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  if (iStack_20 != 0) {
    DVar8 = GetTempPathA(0x104,&stack0xfffffed0);
    if (DVar8 != 0) {
      UVar9 = GetTempFileNameA(&stack0xfffffed0,"SM3",0,(LPCSTR)((int)this + 0x1c));
      if (UVar9 != 0) {
        pvVar2 = CreateFileA((LPCSTR)((int)this + 0x1c),0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0,
                             (HANDLE)0x0);
        *(HANDLE *)((int)this + 0x18) = pvVar2;
        if (pvVar2 == (HANDLE)0xffffffff) {
          return 0x8004e006;
        }
        *(undefined4 *)((int)this + 0x14) = 1;
      }
    }
  }
  pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_5f6975e0,this,0,
                        (LPDWORD)&stack0xfffffecc);
  *(HANDLE *)((int)this + 0x1cc) = pvVar2;
  if (pvVar2 == (HANDLE)0x0) {
    InternetCloseHandle(*(undefined4 *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
    InternetCloseHandle(*(undefined4 *)this);
    *(undefined4 *)this = 0;
    DVar10 = 0x80004005;
  }
  return DVar10;
}


