/* Module: vegas30k.dll
   Function: SfCdiAllocateFileStream
   Address: 01084a60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCdiAllocateFileStream(unsigned long,unsigned long,void * *) */

long SfCdiAllocateFileStream(ulong param_1,ulong param_2,void **param_3)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  HANDLE pvVar3;
  int iVar4;
  uint uVar5;
  DWORD *pDVar6;
  undefined4 *puVar7;
  int local_c8;
  uint local_c4;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  local_94.dwOSVersionInfoSize = 0x94;
  pDVar6 = &local_94.dwMajorVersion;
                    /* 0x84a60  291  ?SfCdiAllocateFileStream@@YGJKKPAPAX@Z */
  for (iVar4 = 0x24; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pDVar6 = 0;
    pDVar6 = pDVar6 + 1;
  }
  local_c8 = 0;
  GetVersionExA(&local_94);
  if (local_94.dwPlatformId == 2) {
    GetSystemInfo(&local_b8);
    if (param_2 % local_b8.dwPageSize != 0) {
      param_2 = (param_2 / local_b8.dwPageSize + 1) * local_b8.dwPageSize;
    }
    pvVar1 = GlobalAlloc(0x40,(local_b8.dwPageSize + param_2 + 0x1c) * param_1 + 0x40);
    pvVar2 = GlobalLock(pvVar1);
    if (pvVar2 == (LPVOID)0x0) {
LAB_01084bce:
      local_c8 = -0x7ff8fff2;
      goto LAB_01084bb0;
    }
    *(ulong *)((int)pvVar2 + 0x14) = param_1;
    *(DWORD *)((int)pvVar2 + 8) = local_b8.dwPageSize;
    *(uint *)((int)pvVar2 + 4) = *(uint *)((int)pvVar2 + 4) | 1;
    *(ulong *)((int)pvVar2 + 0xc) = param_2;
    local_c4 = 0;
    if (param_1 == 0) {
LAB_01084b76:
      *(undefined4 *)((int)pvVar2 + 0x30) = *(undefined4 *)((int)pvVar2 + 0x40);
    }
    else {
      uVar5 = (int)pvVar2 + local_b8.dwPageSize + param_1 * 0x1c + 0x40;
      puVar7 = (undefined4 *)((int)pvVar2 + 0x58);
      do {
        puVar7[-6] = uVar5 & ~local_b8.dwPageSize;
        uVar5 = uVar5 + local_b8.dwPageSize + param_2;
        pvVar3 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
        *puVar7 = pvVar3;
        if (pvVar3 == (HANDLE)0x0) {
          local_c8 = -0x7ff8fff2;
          goto LAB_01084b76;
        }
        puVar7 = puVar7 + 7;
        local_c4 = local_c4 + 1;
      } while (local_c4 < param_1);
      *(undefined4 *)((int)pvVar2 + 0x30) = *(undefined4 *)((int)pvVar2 + 0x40);
    }
  }
  else {
    pvVar1 = GlobalAlloc(0x40,0x40);
    pvVar2 = GlobalLock(pvVar1);
    if (pvVar2 == (LPVOID)0x0) goto LAB_01084bce;
  }
  *param_3 = pvVar2;
  if (-1 < local_c8) {
    return local_c8;
  }
  if (pvVar2 != (void *)0x0) {
    SfCdiFreeFileStream(pvVar2);
  }
LAB_01084bb0:
  *param_3 = (void *)0xffffffff;
  return local_c8;
}


