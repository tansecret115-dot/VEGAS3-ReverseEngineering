/* Module: hhupd.exe
   Function: FUN_01003519
   Address: 01003519
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01003519(void)

{
  DWORD DVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  undefined4 uVar3;
  int iVar4;
  _STARTUPINFOA *p_Var5;
  CHAR local_388 [512];
  CHAR local_188 [260];
  _STARTUPINFOA local_84;
  undefined4 local_40;
  undefined *local_3c;
  LPSTR local_38;
  undefined1 *local_34;
  CHAR *local_30;
  short local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  char *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  LPSTR local_8;
  
  local_c = 0;
  local_18 = 0;
  local_20 = 0;
  DAT_0100b704 = 0;
  if ((DAT_0100aaa8 == 0) &&
     ((DVar1 = FUN_01003d7d("REBOOT",(undefined4 *)&DAT_0100b6cc,4), DVar1 == 0 || (4 < DVar1)))) {
LAB_0100380d:
    FUN_01003c23((HWND)0x0,0x4b1,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
    DAT_0100b704 = 0x80070714;
LAB_010038d5:
    uVar3 = 0;
  }
  else {
    local_10 = 0;
    do {
      local_c = 0;
      p_Var5 = &local_84;
      for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
        p_Var5->cb = 0;
        p_Var5 = (_STARTUPINFOA *)&p_Var5->lpReserved;
      }
      local_84.cb = 0x44;
      if (DAT_0100acc2 == '\0') {
        DVar1 = FUN_01003d7d("SHOWWINDOW",&local_14,4);
        if ((DVar1 == 0) || (4 < DVar1)) goto LAB_0100380d;
        if (local_14 == 1) {
          local_84.dwFlags = 1;
          local_84.wShowWindow = 0;
        }
        else if (local_14 == 2) {
          local_84.dwFlags = 1;
          local_84.wShowWindow = 6;
        }
        else if (local_14 == 3) {
          local_84.dwFlags = 1;
          local_84.wShowWindow = 3;
        }
        if (local_10 == 0) {
          if (DAT_0100aab8 != 0) {
            if ((DAT_0100aab8 & 1) == 0) {
              if ((DAT_0100aab8 & 2) != 0) {
                local_1c = "USRQCMD";
              }
            }
            else {
              local_1c = "ADMQCMD";
            }
            DVar1 = FUN_01003d7d(local_1c,(undefined4 *)local_188,0x104);
            if (DVar1 == 0) goto LAB_0100380d;
            iVar4 = lstrcmpiA(local_188,"<None>");
            if (iVar4 != 0) {
              local_18 = 1;
            }
          }
          if ((local_18 == 0) &&
             (DVar1 = FUN_01003d7d("RUNPROGRAM",(undefined4 *)local_188,0x104), DVar1 == 0))
          goto LAB_0100380d;
        }
      }
      else {
        lstrcpyA(local_188,&DAT_0100acc2);
      }
      if (local_10 == 1) {
        DVar1 = FUN_01003d7d("POSTRUNPROGRAM",(undefined4 *)local_188,0x104);
        if (DVar1 == 0) goto LAB_0100380d;
        if ((DAT_0100acc2 != '\0') || (iVar4 = lstrcmpiA(local_188,"<None>"), iVar4 == 0)) break;
      }
      iVar4 = FUN_010017f8(local_188,&local_8,&local_c);
      if (iVar4 == 0) goto LAB_010038d5;
      if (((local_20 == 0) && (DAT_0100bc04 != 1)) && (DAT_0100aaa0 != 0)) {
        if (local_c == 0) {
          local_20 = 1;
          FUN_01001c76();
          goto LAB_010036fe;
        }
LAB_01003707:
        if (DAT_0100a2fc == 0) {
          FUN_01003c23((HWND)0x0,0x4c7,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
LAB_01003886:
          LocalFree(local_8);
          DAT_0100b704 = 0x8007042b;
        }
        else {
          if ((local_c == 0) || ((DAT_0100b6d4 & 4) == 0)) goto LAB_010037d0;
          hModule = (HMODULE)FUN_01005886("advpack.dll");
          if (hModule == (HMODULE)0x0) {
            FUN_01003c23((HWND)0x0,0x4c8,"advpack.dll",(LPCSTR)0x0,0x10,0);
          }
          else {
            pFVar2 = GetProcAddress(hModule,s_DoInfInstall_0100a2e8);
            if (pFVar2 != (FARPROC)0x0) {
              local_38 = local_8;
              local_30 = local_188;
              local_2c = DAT_0100bc04;
              local_40 = 0;
              local_28 = (uint)DAT_0100aab8;
              local_3c = &DAT_0100adf4;
              local_34 = &DAT_0100ae84;
              if (DAT_0100aab0 != 0) {
                local_28 = (uint)CONCAT12(1,DAT_0100aab8);
              }
              if ((DAT_0100b6d4 & 8) != 0) {
                local_28 = local_28 | 0x20000;
              }
              if ((DAT_0100b6d4 & 0x10) != 0) {
                local_28 = local_28 | 0x40000;
              }
              local_24 = DAT_0100b6d8;
              iVar4 = (*pFVar2)(&local_40);
              if (iVar4 == 0) {
                FreeLibrary(hModule);
                goto LAB_01003886;
              }
              FreeLibrary(hModule);
              FUN_0100567a(0);
              goto LAB_010037e4;
            }
            FUN_01003c23((HWND)0x0,0x4c9,s_DoInfInstall_0100a2e8,(LPCSTR)0x0,0x10,0);
            FreeLibrary(hModule);
          }
          LocalFree(local_8);
          DAT_0100b704 = FUN_010056b9();
        }
        goto LAB_010038d5;
      }
LAB_010036fe:
      if (local_c != 0) goto LAB_01003707;
LAB_010037d0:
      iVar4 = FUN_010038dc(local_8,&local_84);
      if (iVar4 == 0) {
        DVar1 = GetLastError();
        FormatMessageA(0x1000,(LPCVOID)0x0,DVar1,0,local_388,0x200,(va_list *)0x0);
        FUN_01003c23((HWND)0x0,0x4c4,local_8,local_388,0x10,0);
        LocalFree(local_8);
        goto LAB_010038d5;
      }
LAB_010037e4:
      LocalFree(local_8);
      local_10 = local_10 + 1;
    } while (local_10 < 2);
    uVar3 = 1;
    if (DAT_0100a350 != 0) {
      FUN_01001e6b();
    }
  }
  return uVar3;
}


