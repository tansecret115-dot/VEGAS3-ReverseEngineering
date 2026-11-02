/* Module: sfcdi.dll
   Function: FUN_5bf46710
   Address: 5bf46710
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf46710(uint param_1,uint param_2,undefined4 *param_3)

{
  HGLOBAL pvVar1;
  undefined4 *puVar2;
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
    puVar2 = GlobalLock(pvVar1);
    if (puVar2 == (undefined4 *)0x0) {
LAB_5bf4687e:
      local_c8 = -0x7ff8fff2;
      goto LAB_5bf46860;
    }
    puVar2[5] = param_1;
    puVar2[2] = local_b8.dwPageSize;
    puVar2[1] = puVar2[1] | 1;
    puVar2[3] = param_2;
    local_c4 = 0;
    if (param_1 == 0) {
LAB_5bf46826:
      puVar2[0xc] = puVar2[0x10];
    }
    else {
      uVar5 = (int)puVar2 + local_b8.dwPageSize + param_1 * 0x1c + 0x40;
      puVar7 = puVar2 + 0x16;
      do {
        puVar7[-6] = uVar5 & ~local_b8.dwPageSize;
        uVar5 = uVar5 + local_b8.dwPageSize + param_2;
        pvVar3 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
        *puVar7 = pvVar3;
        if (pvVar3 == (HANDLE)0x0) {
          local_c8 = -0x7ff8fff2;
          goto LAB_5bf46826;
        }
        puVar7 = puVar7 + 7;
        local_c4 = local_c4 + 1;
      } while (local_c4 < param_1);
      puVar2[0xc] = puVar2[0x10];
    }
  }
  else {
    pvVar1 = GlobalAlloc(0x40,0x40);
    puVar2 = GlobalLock(pvVar1);
    if (puVar2 == (undefined4 *)0x0) goto LAB_5bf4687e;
  }
  *param_3 = puVar2;
  if (-1 < local_c8) {
    return local_c8;
  }
  if (puVar2 != (undefined4 *)0x0) {
    FUN_5bf466a0(puVar2);
  }
LAB_5bf46860:
  *param_3 = 0xffffffff;
  return local_c8;
}


