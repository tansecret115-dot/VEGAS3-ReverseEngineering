/* Module: vegas30k.dll
   Function: FUN_0106f9a0
   Address: 0106f9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_0106f9a0(int param_1,HANDLE param_2,int param_3,DWORD param_4,DWORD param_5,int param_6,
            LPCSTR param_7)

{
  HGLOBAL pvVar1;
  LPVOID lpBuffer;
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
  int iStack_228;
  int iStack_224;
  DWORD DStack_220;
  HANDLE local_21c;
  int iStack_218;
  DWORD DStack_214;
  DWORD DStack_210;
  DWORD DStack_20c;
  WCHAR local_208 [259];
  undefined2 local_2;
  
  local_240 = *(uint *)(param_6 + 0x2c);
  local_23c = *(int *)(param_6 + 0x30);
  local_244 = 0;
  pvVar1 = GlobalAlloc(0x42,0x40000);
  lpBuffer = GlobalLock(pvVar1);
  local_238.dwLowDateTime = 0;
  local_238.dwHighDateTime = 0;
  local_230 = (HANDLE)0x0;
  if (lpBuffer == (LPVOID)0x0) {
    FUN_01070600(0xaaaaaaa3,"ExtractInternalNoCompression",0);
    return -0x7ff8fff2;
  }
  local_21c = CreateFileA(param_7,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (local_21c == (HANDLE)0xffffffff) {
    FUN_01070600(0xaaaaaaa2,"ExtractInternalNoCompression",0);
    local_244 = -0x7ffb1ffa;
  }
  else {
    if (*(int *)(param_1 + 0x20) != 0) {
      MultiByteToWideChar(0,1,(LPCSTR)(param_6 + 0x54),-1,local_208,0x104);
      local_2 = 0;
      FUN_011496a0(local_208);
      (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa0);
    }
    iStack_224 = FUN_01149790(0,0,0);
    iStack_228 = FUN_01149790(0,0,0);
    if ((-1 < local_23c) && ((0 < local_23c || (local_240 != 0)))) {
      while (-1 < local_244) {
        nNumberOfBytesToRead = local_240;
        iVar3 = local_23c;
        if ((-1 < local_23c) && ((0 < local_23c || (0x3ffff < local_240)))) {
          nNumberOfBytesToRead = 0x40000;
          iVar3 = 0;
        }
        iStack_218 = 0;
        if (((int)param_5 <= iVar3) && (((int)param_5 < iVar3 || (param_4 <= nNumberOfBytesToRead)))
           ) {
          iStack_218 = 1;
          nNumberOfBytesToRead = param_4;
          DStack_214 = param_5;
        }
        DStack_22c = 0;
        hFile = param_2;
        if (local_230 != (HANDLE)0x0) {
          hFile = local_230;
        }
        BVar2 = ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,&DStack_22c,(LPOVERLAPPED)0x0);
        if (BVar2 == 0) {
          FUN_01070600(0xaaaaaaaa,"ExtractInternalNoCompression",0);
          local_244 = -0x7ffb1ff8;
          break;
        }
        iStack_228 = FUN_01149790(iStack_228,lpBuffer,DStack_22c);
        bVar4 = CARRY4(local_238.dwLowDateTime,DStack_22c);
        local_238.dwLowDateTime = local_238.dwLowDateTime + DStack_22c;
        local_238.dwHighDateTime = local_238.dwHighDateTime + bVar4;
        DStack_220 = 0;
        bVar4 = local_240 < DStack_22c;
        local_240 = local_240 - DStack_22c;
        local_23c = local_23c - (uint)bVar4;
        bVar4 = param_4 < DStack_22c;
        param_4 = param_4 - DStack_22c;
        param_5 = param_5 - bVar4;
        BVar2 = WriteFile(local_21c,lpBuffer,DStack_22c,&DStack_220,(LPOVERLAPPED)0x0);
        if (BVar2 == 0) {
          FUN_01070600(0xaaaaaaa9,"ExtractInternalNoCompression",0);
          local_244 = -0x7ffb1ff7;
          break;
        }
        iStack_224 = FUN_01149790(iStack_224,lpBuffer,DStack_220);
        if (*(int **)(param_1 + 0x20) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x20) + 0x10))(DStack_220,0);
          local_244 = FUN_011495e0();
          if (local_244 == -0x7ffb1ff4) break;
        }
        if ((iStack_218 != 0) && (param_3 < *(int *)(param_1 + 0x898))) {
          if (local_230 != (HANDLE)0x0) {
            CloseHandle(local_230);
          }
          param_3 = param_3 + 1;
          FUN_010704e0(param_1 + 0x468,param_3,local_208);
          local_230 = CreateFileA((LPCSTR)local_208,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,
                                  (HANDLE)0x0);
          if (local_230 == (HANDLE)0xffffffff) {
            FUN_01070600(0xaaaaaaa4,"ExtractInternalNoCompression",0);
            local_244 = -0x7ffb1ff3;
            break;
          }
          param_4 = GetFileSize(local_230,&DStack_20c);
          param_5 = DStack_20c;
          DStack_210 = param_4;
        }
        if ((local_23c < 1) && ((local_23c < 0 || (local_240 == 0)))) break;
      }
    }
    if (*(int **)(param_1 + 0x20) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0);
    }
    if (-1 < local_244) {
      local_238.dwLowDateTime = *(uint *)(param_6 + 0x14);
      local_238.dwHighDateTime = *(DWORD *)(param_6 + 0x18);
      SetFileTime(local_21c,&local_238,&local_238,&local_238);
      SetFileAttributesA(param_7,*(DWORD *)(param_6 + 0x44));
      if ((iStack_224 != *(int *)(param_6 + 0x20)) || (iStack_228 != *(int *)(param_6 + 0x1c))) {
        FUN_01070600(0xaaaaaaaf,"ExtractInternalNoCompression",0);
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


