/* Module: mp3plug.dll
   Function: FUN_5f6894a0
   Address: 5f6894a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f6894a0(LPCSTR param_1,uint param_2,wchar_t *param_3,size_t *param_4)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  void *this;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  uint local_408;
  undefined1 local_404;
  CHAR local_400 [1024];
  
  pvVar1 = GlobalAlloc(0x40,0x1c);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 != (LPVOID)0x0) {
    this = (void *)FUN_5f69b6c0((int)pvVar2);
    if (this != (void *)0x0) {
      uVar3 = FUN_5f69b760(this,param_1);
      if (-1 < (int)uVar3) {
        iVar4 = FUN_5f6895c0(param_2,(char *)&local_408);
        if (iVar4 < 0) {
          local_408 = param_2;
        }
        local_404 = 0;
        iVar4 = FUN_5f69a470((byte *)&local_408);
        if (iVar4 == 0) {
          uVar3 = 0x80004005;
        }
        else {
          uVar3 = FUN_5f69bf90(this,iVar4,local_400,0x400);
          if (-1 < (int)uVar3) {
            sVar5 = *param_4;
            MultiByteToWideChar(0,1,local_400,-1,param_3,sVar5);
            param_3[sVar5 - 1] = L'\0';
            sVar5 = wcslen(param_3);
            *param_4 = sVar5;
          }
        }
      }
      FUN_5f69b700((int)this);
      pvVar1 = GlobalHandle(this);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(this);
      GlobalFree(pvVar1);
      return uVar3;
    }
  }
  return local_408;
}


