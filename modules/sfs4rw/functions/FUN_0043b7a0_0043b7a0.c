/* Module: sfs4rw.dll
   Function: FUN_0043b7a0
   Address: 0043b7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_0043b7a0(void *this,HANDLE param_1,int param_2,DWORD param_3,DWORD param_4,int param_5,
            LPCSTR param_6)

{
  HGLOBAL pvVar1;
  byte *lpBuffer;
  uint nNumberOfBytesToRead;
  BOOL BVar2;
  int iVar3;
  bool bVar4;
  HANDLE hFile;
  int local_244;
  uint local_240;
  int local_23c;
  FILETIME local_238;
  HANDLE local_230;
  DWORD DStack_22c;
  uint uStack_228;
  uint uStack_224;
  DWORD DStack_220;
  HANDLE local_21c;
  int iStack_218;
  DWORD DStack_214;
  DWORD DStack_210;
  DWORD DStack_20c;
  WCHAR local_208 [259];
  undefined2 local_2;
  
  local_240 = *(uint *)(param_5 + 0x2c);
  local_23c = *(int *)(param_5 + 0x30);
  local_244 = 0;
  pvVar1 = GlobalAlloc(0x42,0x40000);
  lpBuffer = GlobalLock(pvVar1);
  local_238.dwLowDateTime = 0;
  local_238.dwHighDateTime = 0;
  local_230 = (HANDLE)0x0;
  if (lpBuffer == (byte *)0x0) {
    FUN_0043c400(this,0xaaaaaaa3,(uchar *)"ExtractInternalNoCompression",(uchar *)0x0);
    return -0x7ff8fff2;
  }
  local_21c = CreateFileA(param_6,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (local_21c == (HANDLE)0xffffffff) {
    FUN_0043c400(this,0xaaaaaaa2,(uchar *)"ExtractInternalNoCompression",(uchar *)0x0);
    local_244 = -0x7ffb1ffa;
  }
  else {
    if (*(int *)((int)this + 0x20) != 0) {
      MultiByteToWideChar(0,1,(LPCSTR)(param_5 + 0x54),-1,local_208,0x104);
      local_2 = 0;
      FUN_0044de40(*(void **)((int)this + 0x20),local_208);
      (**(code **)(**(int **)((int)this + 0x20) + 0xc))(0xaaaaaa0);
    }
    uStack_224 = FUN_0044df30(0,(byte *)0x0,0);
    uStack_228 = FUN_0044df30(0,(byte *)0x0,0);
    if ((-1 < local_23c) && ((0 < local_23c || (local_240 != 0)))) {
      while (-1 < local_244) {
        nNumberOfBytesToRead = local_240;
        iVar3 = local_23c;
        if ((-1 < local_23c) && ((0 < local_23c || (0x3ffff < local_240)))) {
          nNumberOfBytesToRead = 0x40000;
          iVar3 = 0;
        }
        iStack_218 = 0;
        if (((int)param_4 <= iVar3) && (((int)param_4 < iVar3 || (param_3 <= nNumberOfBytesToRead)))
           ) {
          iStack_218 = 1;
          nNumberOfBytesToRead = param_3;
          DStack_214 = param_4;
        }
        DStack_22c = 0;
        hFile = param_1;
        if (local_230 != (HANDLE)0x0) {
          hFile = local_230;
        }
        BVar2 = ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,&DStack_22c,(LPOVERLAPPED)0x0);
        if (BVar2 == 0) {
          FUN_0043c400(this,0xaaaaaaaa,(uchar *)"ExtractInternalNoCompression",(uchar *)0x0);
          local_244 = -0x7ffb1ff8;
          break;
        }
        uStack_228 = FUN_0044df30(uStack_228,lpBuffer,DStack_22c);
        bVar4 = CARRY4(local_238.dwLowDateTime,DStack_22c);
        local_238.dwLowDateTime = local_238.dwLowDateTime + DStack_22c;
        local_238.dwHighDateTime = local_238.dwHighDateTime + bVar4;
        DStack_220 = 0;
        bVar4 = local_240 < DStack_22c;
        local_240 = local_240 - DStack_22c;
        local_23c = local_23c - (uint)bVar4;
        bVar4 = param_3 < DStack_22c;
        param_3 = param_3 - DStack_22c;
        param_4 = param_4 - bVar4;
        BVar2 = WriteFile(local_21c,lpBuffer,DStack_22c,&DStack_220,(LPOVERLAPPED)0x0);
        if (BVar2 == 0) {
          FUN_0043c400(this,0xaaaaaaa9,(uchar *)"ExtractInternalNoCompression",(uchar *)0x0);
          local_244 = -0x7ffb1ff7;
          break;
        }
        uStack_224 = FUN_0044df30(uStack_224,lpBuffer,DStack_220);
        if (*(int **)((int)this + 0x20) != (int *)0x0) {
          (**(code **)(**(int **)((int)this + 0x20) + 0x10))(DStack_220,0);
          local_244 = FUN_0044dd80(*(int *)((int)this + 0x20));
          if (local_244 == -0x7ffb1ff4) break;
        }
        if ((iStack_218 != 0) && (param_2 < *(int *)((int)this + 0x898))) {
          if (local_230 != (HANDLE)0x0) {
            CloseHandle(local_230);
          }
          param_2 = param_2 + 1;
          FUN_0043c2e0(this,(char *)((int)this + 0x468),param_2,(uchar *)local_208);
          local_230 = CreateFileA((LPCSTR)local_208,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,
                                  (HANDLE)0x0);
          if (local_230 == (HANDLE)0xffffffff) {
            FUN_0043c400(this,0xaaaaaaa4,(uchar *)"ExtractInternalNoCompression",(uchar *)0x0);
            local_244 = -0x7ffb1ff3;
            break;
          }
          param_3 = GetFileSize(local_230,&DStack_20c);
          param_4 = DStack_20c;
          DStack_210 = param_3;
        }
        if ((local_23c < 1) && ((local_23c < 0 || (local_240 == 0)))) break;
      }
    }
    if (*(int **)((int)this + 0x20) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x20) + 0xc))(0);
    }
    if (-1 < local_244) {
      local_238.dwLowDateTime = *(uint *)(param_5 + 0x14);
      local_238.dwHighDateTime = *(DWORD *)(param_5 + 0x18);
      SetFileTime(local_21c,&local_238,&local_238,&local_238);
      SetFileAttributesA(param_6,*(DWORD *)(param_5 + 0x44));
      if ((uStack_224 != *(uint *)(param_5 + 0x20)) || (uStack_228 != *(uint *)(param_5 + 0x1c))) {
        FUN_0043c400(this,0xaaaaaaaf,(uchar *)"ExtractInternalNoCompression",(uchar *)0x0);
        local_244 = -0x7ffb1ff5;
      }
    }
    CloseHandle(local_21c);
  }
  pvVar1 = GlobalHandle(lpBuffer);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(lpBuffer);
  GlobalFree(pvVar1);
  if (local_230 != (HANDLE)0x0) {
    CloseHandle(local_230);
  }
  return local_244;
}


