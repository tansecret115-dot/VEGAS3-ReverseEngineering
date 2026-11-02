/* Module: vegas30k.dll
   Function: SfCdiPrepFileLookaside
   Address: 01084fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCdiPrepFileLookaside(void *) */

long SfCdiPrepFileLookaside(void *param_1)

{
  uint uVar1;
  void *pvVar2;
  BOOL BVar3;
  HANDLE hFile;
  DWORD DVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  LPOVERLAPPED lpOverlapped;
  int local_c;
  DWORD local_8;
  DWORD local_4;
  
                    /* 0x84fb0  310  ?SfCdiPrepFileLookaside@@YGJPAX@Z */
  pvVar2 = param_1;
  uVar8 = 0;
  local_c = 0;
  if (param_1 == (void *)0xffffffff) {
    return -0x7ff8ffa9;
  }
  uVar1 = *(uint *)((int)param_1 + 0x44);
  if (uVar1 != 0) {
    uVar6 = uVar1 % *(uint *)((int)param_1 + 0xc);
    if (uVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(uint *)((int)param_1 + 0xc) - uVar6;
    }
    BVar3 = WriteFile(*(HANDLE *)((int)param_1 + 4),*(LPCVOID *)((int)param_1 + 0x34),uVar1 + iVar5,
                      &local_4,(LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      return -0x7ffb1ff7;
    }
  }
  CloseHandle(*(HANDLE *)((int)param_1 + 4));
  hFile = CreateFileA((LPCSTR)((int)param_1 + 0xb4),0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,
                      0x60000080,(HANDLE)0x0);
  *(HANDLE *)((int)param_1 + 4) = hFile;
  if (hFile == (HANDLE)0xffffffff) {
    local_c = -0x7ffb1ffa;
  }
  else {
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    DVar4 = GetFileSize(hFile,(LPDWORD)0x0);
    *(DWORD *)((int)param_1 + 0xa8) = DVar4;
    lpOverlapped = (LPOVERLAPPED)((int)param_1 + 0x54);
    puVar7 = (undefined4 *)((int)param_1 + 0x14);
    do {
      ResetEvent((HANDLE)*puVar7);
      lpOverlapped->Internal = 0;
      lpOverlapped->InternalHigh = 0;
      (lpOverlapped->u).s.Offset = 0;
      (lpOverlapped->u).s.OffsetHigh = 0;
      lpOverlapped->hEvent = (HANDLE)0x0;
      (lpOverlapped->u).s.Offset = *(DWORD *)((int)pvVar2 + 0xa4);
      lpOverlapped->hEvent = (HANDLE)*puVar7;
      BVar3 = ReadFile(*(HANDLE *)((int)pvVar2 + 4),(LPVOID)puVar7[8],*(DWORD *)((int)pvVar2 + 0x10)
                       ,(LPDWORD)0x0,lpOverlapped);
      if (BVar3 == 0) {
        DVar4 = GetLastError();
        if (DVar4 != 0x3e5) {
          if (DVar4 != 0x26) {
            local_c = -0x7ffb1ff8;
          }
          break;
        }
        param_1 = (void *)0x3e5;
      }
      if (param_1 == (void *)0x26) break;
      WaitForSingleObject(lpOverlapped->hEvent,0xffffffff);
      BVar3 = GetOverlappedResult(*(HANDLE *)((int)pvVar2 + 4),lpOverlapped,&local_8,0);
      if (BVar3 == 0) {
        local_c = -0x7ffb1ff8;
        break;
      }
      lpOverlapped = lpOverlapped + 1;
      puVar7[0xc] = local_8;
      puVar7 = puVar7 + 1;
      uVar8 = uVar8 + 1;
      *(int *)((int)pvVar2 + 0xa4) = *(int *)((int)pvVar2 + 0xa4) + *(int *)((int)pvVar2 + 0x10);
    } while (uVar8 < 4);
    *(undefined4 *)((int)pvVar2 + 0xac) = *(undefined4 *)((int)pvVar2 + 0x34);
    if (local_c == 0) {
      *(uint *)((int)pvVar2 + 8) = uVar8;
      return 0;
    }
  }
  return local_c;
}


