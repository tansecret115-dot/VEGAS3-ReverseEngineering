/* Module: mp3plug.dll
   Function: FUN_5f69b7b0
   Address: 5f69b7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f69b7b0(void *this,undefined4 *param_1)

{
  undefined4 *hFile;
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID lpBuffer;
  BOOL BVar3;
  DWORD local_c;
  int local_8;
  DWORD local_4;
  
  iVar1 = FUN_5f69b6d0((int)this);
  hFile = param_1;
  if (-1 < iVar1) {
    if (param_1 != (undefined4 *)0xffffffff) {
      local_c = GetFileSize(param_1,(LPDWORD)0x0);
      iVar1 = FUN_5f69a280(hFile,&local_c,(int *)&param_1,&local_8);
      if (iVar1 != 0) {
        pvVar2 = GlobalAlloc(0x42,(SIZE_T)param_1);
        lpBuffer = GlobalLock(pvVar2);
        SetFilePointer(hFile,0,(PLONG)0x0,0);
        BVar3 = ReadFile(hFile,lpBuffer,(DWORD)param_1,&local_4,(LPOVERLAPPED)0x0);
        if (BVar3 == 0) {
          iVar1 = -0x7ffb1ff8;
        }
        else {
          iVar1 = FUN_5f69b880(this,(int)lpBuffer,param_1);
        }
        pvVar2 = GlobalHandle(lpBuffer);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(lpBuffer);
        GlobalFree(pvVar2);
        return iVar1;
      }
    }
    iVar1 = -0x7ffb1ff6;
  }
  return iVar1;
}


