/* Module: pngu3266.dll
   Function: FUN_6061ac40
   Address: 6061ac40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6061ac40(void *this,int param_1)

{
  LSTATUS LVar1;
  int iVar2;
  HMODULE pHVar3;
  FARPROC pFVar4;
  int iVar5;
  _OSVERSIONINFOA *p_Var6;
  undefined4 uVar7;
  undefined4 local_a74 [515];
  undefined4 local_268 [66];
  undefined4 local_160 [38];
  _OSVERSIONINFOA local_c8;
  DWORD local_34;
  int local_30;
  UINT local_2c;
  DWORD local_28;
  HKEY local_24;
  HKEY__ local_20 [3];
  int local_14;
  HKEY local_10;
  undefined4 local_c;
  int local_8;
  
  local_24 = (HKEY)0x0;
  local_8 = 0;
  local_28 = 0;
  local_2c = SetErrorMode(0x8001);
  local_34 = 4;
  LVar1 = RegOpenKeyA((HKEY)0x80000001,s_Software_Microsoft_Windows_Curre_606494e0,&local_24);
  if (LVar1 == 0) {
    p_Var6 = &local_c8;
    for (iVar5 = 0x25; iVar5 != 0; iVar5 = iVar5 + -1) {
      p_Var6->dwOSVersionInfoSize = 0;
      p_Var6 = (_OSVERSIONINFOA *)&p_Var6->dwMajorVersion;
    }
    local_c8.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_c8);
    if (local_c8.dwPlatformId == 2) {
      local_10 = (HKEY)0x0;
      LVar1 = RegOpenKeyA((HKEY)0x80000002,s_SOFTWARE_Microsoft_RAS_606494b8,&local_10);
      if (LVar1 == 0) {
        RegCloseKey(local_10);
        local_8 = 0;
        if (*(int *)((int)this + 0x24) == 0) {
          pHVar3 = LoadLibraryA(s_rasapi32_dll_606494a8);
          *(HMODULE *)((int)this + 0x24) = pHVar3;
        }
        if ((*(HMODULE *)((int)this + 0x24) != (HMODULE)0x0) &&
           ((pFVar4 = GetProcAddress(*(HMODULE *)((int)this + 0x24),s_RasEnumDevicesA_60649498),
            pFVar4 != (FARPROC)0x0 ||
            (pFVar4 = GetProcAddress(*(HMODULE *)((int)this + 0x24),s_RasEnumDevicesW_60649488),
            pFVar4 != (FARPROC)0x0)))) {
          local_160[0] = 0x98;
          local_c = 0x98;
          local_14 = 0;
          iVar5 = (*pFVar4)(local_160,&local_c,&local_14);
          if (((iVar5 == 0x25b) || ((iVar5 == 0 && (local_14 == 1)))) &&
             ((pFVar4 = GetProcAddress(*(HMODULE *)((int)this + 0x24),s_RasEnumEntriesA_60649478),
              pFVar4 != (FARPROC)0x0 ||
              (pFVar4 = GetProcAddress(*(HMODULE *)((int)this + 0x24),s_RasEnumEntriesW_60649468),
              pFVar4 != (FARPROC)0x0)))) {
            local_268[0] = 0x108;
            local_c = 0x108;
            local_14 = 0;
            iVar5 = (*pFVar4)(0,0,local_268,&local_c,&local_14);
            if ((iVar5 == 0x25b) || ((local_14 == 1 && (iVar5 == 0)))) {
              local_8 = 1;
            }
          }
        }
      }
    }
    else {
      RegQueryValueExA(local_24,s_EnableAutodial_606494d0,(LPDWORD)0x0,&local_28,(LPBYTE)&local_8,
                       &local_34);
    }
    RegCloseKey(local_24);
  }
  if (local_8 == 0) {
    iVar2 = FUN_6061ba30(&local_30);
    iVar5 = local_30;
    if (iVar2 == 0) goto LAB_6061af4d;
    if ((local_8 == 0) && (iVar5 = FUN_6061b3b0(), iVar5 != 0)) {
      iVar5 = 1;
      goto LAB_6061af4d;
    }
  }
  FUN_60618bb0(local_20);
  FUN_6061b150(local_20);
  uVar7 = 0x35;
  if (*(int *)(local_20[0].unused + -8) == 0) {
    FUN_60618ed0(local_20,s_209_66_98_23_60649458);
    uVar7 = 0x50;
  }
  if (local_8 == 0) {
    if (param_1 == 0) {
LAB_6061af3c:
      iVar5 = 1;
    }
    else {
      iVar5 = (**(code **)(*(int *)this + 0xc))(local_20[0].unused,uVar7,0);
    }
  }
  else {
    local_10 = (HKEY)0x0;
    local_c = 0x80c;
    if (*(int *)((int)this + 0x24) == 0) {
      pHVar3 = LoadLibraryA(s_rasapi32_dll_606494a8);
      *(HMODULE *)((int)this + 0x24) = pHVar3;
    }
    if (*(HMODULE *)((int)this + 0x24) == (HMODULE)0x0) {
      if (param_1 == 0) goto LAB_6061af3c;
      iVar5 = (**(code **)(*(int *)this + 0xc))(local_20[0].unused,uVar7,0);
    }
    else {
      if (*(int *)((int)this + 0x28) == 0) {
        pFVar4 = GetProcAddress(*(HMODULE *)((int)this + 0x24),s_RasEnumConnectionsA_60649444);
        *(FARPROC *)((int)this + 0x28) = pFVar4;
      }
      if (*(code **)((int)this + 0x28) == (code *)0x0) {
        if (param_1 == 0) goto LAB_6061af3c;
        iVar5 = (**(code **)(*(int *)this + 0xc))(local_20[0].unused,uVar7,0);
      }
      else {
        local_a74[0] = 0x19c;
        (**(code **)((int)this + 0x28))(local_a74,&local_c,&local_10);
        if (local_10 == (HKEY)0x0) {
          iVar5 = 0;
        }
        else {
          if (param_1 == 0) goto LAB_6061af3c;
          iVar5 = (**(code **)(*(int *)this + 0xc))(local_20[0].unused,uVar7,0);
        }
      }
    }
  }
  FUN_60618cd0(&local_20[0].unused);
LAB_6061af4d:
  if (*(HMODULE *)((int)this + 0x24) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)((int)this + 0x24));
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  SetErrorMode(local_2c);
  return iVar5;
}


