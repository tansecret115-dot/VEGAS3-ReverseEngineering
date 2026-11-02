/* Module: vegas30k.dll
   Function: SfCdiCreateFileLookaside
   Address: 01084be0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCdiCreateFileLookaside(char *,unsigned long,unsigned long,struct HINSTANCE__
   *,void * *) */

long SfCdiCreateFileLookaside
               (char *param_1,ulong param_2,ulong param_3,HINSTANCE__ *param_4,void **param_5)

{
  uint uVar1;
  HGLOBAL pvVar2;
  HANDLE pvVar3;
  BOOL BVar4;
  LPVOID pvVar5;
  int iVar6;
  uint uVar7;
  ulong *puVar8;
  DWORD *pDVar9;
  uint *puVar10;
  int local_1d0;
  DWORD local_1cc;
  DWORD local_1c8;
  DWORD local_1c4;
  DWORD local_1c0;
  _SYSTEM_INFO local_1bc;
  _OSVERSIONINFOA local_198;
  CHAR local_104 [260];
  
  local_198.dwOSVersionInfoSize = 0x94;
  uVar7 = 0;
  pDVar9 = &local_198.dwMajorVersion;
                    /* 0x84be0  295  ?SfCdiCreateFileLookaside@@YGJPADKKPAUHINSTANCE__@@PAPAX@Z */
  for (iVar6 = 0x24; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pDVar9 = 0;
    pDVar9 = pDVar9 + 1;
  }
  local_1d0 = 0;
  puVar8 = (ulong *)0x0;
  GetVersionExA(&local_198);
  if (local_198.dwPlatformId == 2) {
    pvVar2 = GlobalAlloc(0x42,0x1b8);
    puVar8 = GlobalLock(pvVar2);
    if (puVar8 == (ulong *)0x0) {
      local_1d0 = -0x7ff8fff2;
    }
    else {
      puVar8[1] = 0xffffffff;
      *puVar8 = param_3;
      if (param_1 == (char *)0x0) {
        param_1 = (char *)(puVar8 + 0x2d);
        _SfGetModulePath_12(param_4,param_1,0x104);
        _mbscat((uchar *)param_1,PTR_s_lookaside_file_temp_011e23ff_1_01206134);
      }
      pvVar3 = CreateFileA(param_1,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x20000080,(HANDLE)0x0)
      ;
      puVar8[1] = (ulong)pvVar3;
      if (pvVar3 == (HANDLE)0xffffffff) {
        local_1d0 = -0x7ffb1ffa;
      }
      else {
        GetSystemInfo(&local_1bc);
        iVar6 = _SfGetPathNameFromFilePath_12(param_1,local_104,0x104);
        local_198.szCSDVersion[iVar6 + 0x7f] = '\0';
        BVar4 = GetDiskFreeSpaceA(local_104,&local_1c0,&local_1cc,&local_1c8,&local_1c4);
        if (BVar4 == 0) {
          local_1cc = 0x400;
        }
        if (local_1bc.dwPageSize < local_1cc) {
          local_1bc.dwPageSize = local_1cc;
        }
        puVar8[3] = local_1bc.dwPageSize;
        uVar1 = DAT_01206138;
        puVar8[4] = DAT_01206138;
        if (uVar1 % local_1bc.dwPageSize != 0) {
          puVar8[4] = (DAT_01206138 / local_1bc.dwPageSize + 1) * local_1bc.dwPageSize;
        }
        puVar10 = puVar8 + 0xd;
        do {
          pvVar2 = GlobalAlloc(0x42,puVar8[3] + puVar8[4]);
          pvVar5 = GlobalLock(pvVar2);
          puVar10[-4] = (uint)pvVar5;
          if (pvVar5 == (LPVOID)0x0) {
LAB_01084d85:
            local_1d0 = -0x7ff8fff2;
            break;
          }
          uVar1 = puVar8[3];
          if (uVar1 == 0) {
            *puVar10 = (uint)pvVar5;
          }
          else {
            *puVar10 = uVar1 + (int)pvVar5 & ~uVar1;
          }
          pvVar3 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
          puVar10[-8] = (uint)pvVar3;
          if (pvVar3 == (HANDLE)0x0) goto LAB_01084d85;
          uVar7 = uVar7 + 1;
          puVar10 = puVar10 + 1;
        } while (uVar7 < 4);
        puVar8[0x2b] = puVar8[0xd];
        *param_5 = puVar8;
        if (local_1d0 == 0) {
          return 0;
        }
      }
    }
  }
  else {
    local_1d0 = -0x7fffbfff;
  }
  SfCdiCloseFileLookaside(puVar8);
  *param_5 = (void *)0xffffffff;
  return local_1d0;
}


