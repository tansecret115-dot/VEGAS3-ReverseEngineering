/* Module: sfcdi.dll
   Function: FUN_5bf46890
   Address: 5bf46890
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf46890(uchar *param_1,undefined4 param_2,undefined4 param_3,HMODULE param_4,
                undefined4 *param_5)

{
  uint uVar1;
  HGLOBAL pvVar2;
  HANDLE pvVar3;
  BOOL BVar4;
  LPVOID pvVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  DWORD *pDVar9;
  uint *puVar10;
  int local_1d0;
  DWORD local_1cc;
  DWORD local_1c8;
  DWORD local_1c4;
  DWORD local_1c0;
  _SYSTEM_INFO local_1bc;
  _OSVERSIONINFOA local_198;
  uchar local_104 [260];
  
  local_198.dwOSVersionInfoSize = 0x94;
  uVar7 = 0;
  pDVar9 = &local_198.dwMajorVersion;
  for (iVar6 = 0x24; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pDVar9 = 0;
    pDVar9 = pDVar9 + 1;
  }
  local_1d0 = 0;
  puVar8 = (undefined4 *)0x0;
  GetVersionExA(&local_198);
  if (local_198.dwPlatformId == 2) {
    pvVar2 = GlobalAlloc(0x42,0x1b8);
    puVar8 = GlobalLock(pvVar2);
    if (puVar8 == (undefined4 *)0x0) {
      local_1d0 = -0x7ff8fff2;
    }
    else {
      puVar8[1] = 0xffffffff;
      *puVar8 = param_3;
      if (param_1 == (uchar *)0x0) {
        param_1 = (uchar *)(puVar8 + 0x2d);
        FUN_5bf23720(param_4,param_1,0x104);
        _mbscat(param_1,PTR_s_lookaside_file_temp_5bf65e10);
      }
      pvVar3 = CreateFileA((LPCSTR)param_1,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x20000080,
                           (HANDLE)0x0);
      puVar8[1] = pvVar3;
      if (pvVar3 == (HANDLE)0xffffffff) {
        local_1d0 = -0x7ffb1ffa;
      }
      else {
        GetSystemInfo(&local_1bc);
        iVar6 = FUN_5bf23470(param_1,local_104,0x104);
        local_198.szCSDVersion[iVar6 + 0x7f] = '\0';
        BVar4 = GetDiskFreeSpaceA((LPCSTR)local_104,&local_1c0,&local_1cc,&local_1c8,&local_1c4);
        if (BVar4 == 0) {
          local_1cc = 0x400;
        }
        if (local_1bc.dwPageSize < local_1cc) {
          local_1bc.dwPageSize = local_1cc;
        }
        puVar8[3] = local_1bc.dwPageSize;
        uVar1 = DAT_5bf65e14;
        puVar8[4] = DAT_5bf65e14;
        if (uVar1 % local_1bc.dwPageSize != 0) {
          puVar8[4] = (DAT_5bf65e14 / local_1bc.dwPageSize + 1) * local_1bc.dwPageSize;
        }
        puVar10 = puVar8 + 0xd;
        do {
          pvVar2 = GlobalAlloc(0x42,puVar8[3] + puVar8[4]);
          pvVar5 = GlobalLock(pvVar2);
          puVar10[-4] = (uint)pvVar5;
          if (pvVar5 == (LPVOID)0x0) {
LAB_5bf46a35:
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
          if (pvVar3 == (HANDLE)0x0) goto LAB_5bf46a35;
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
  FUN_5bf46aa0(puVar8);
  *param_5 = 0xffffffff;
  return local_1d0;
}


