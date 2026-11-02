/* Module: mpgvout.dll
   Function: entry
   Address: 100017a4
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 entry(HMODULE param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  ulonglong uVar7;
  char *pcVar8;
  uint local_114 [68];
  
  if (param_2 != 1) {
    if (param_2 != 0) {
      if (param_2 == 2) {
        if (DAT_1000300c == 0xffffffff) {
          DAT_1000300c = GetProfileIntA("Debug","MPGVOUT",0);
        }
        if ((DAT_1000300c & 0x10) == 0) {
          return 1;
        }
        pcVar8 = "DLL_THREAD_ATTACH(0x%08X)";
      }
      else if (param_2 == 3) {
        if (DAT_1000300c == 0xffffffff) {
          DAT_1000300c = GetProfileIntA("Debug","MPGVOUT",0);
        }
        if ((DAT_1000300c & 0x10) == 0) {
          return 1;
        }
        pcVar8 = "DLL_THREAD_DETACH(0x%08X)";
      }
      else {
        if (DAT_1000300c == 0xffffffff) {
          DAT_1000300c = GetProfileIntA("Debug","MPGVOUT",0);
        }
        if ((DAT_1000300c & 0x10) == 0) {
          return 1;
        }
        pcVar8 = "DLL_UNKNOWN_RAISON(0x%08X)";
      }
      FUN_1000106c(pcVar8);
      return 1;
    }
    if (DAT_1000300c == 0xffffffff) {
      DAT_1000300c = GetProfileIntA("Debug","MPGVOUT",0);
    }
    if ((DAT_1000300c & 0x10) != 0) {
      FUN_1000106c("DLL_PROCESS_DETACH(0x%08X)");
    }
    if (DAT_10003014 == (HMODULE)0x0) {
      return 1;
    }
    FreeLibrary(DAT_10003014);
    return 1;
  }
  if (DAT_1000300c == 0xffffffff) {
    DAT_1000300c = GetProfileIntA("Debug","MPGVOUT",0);
  }
  if ((DAT_1000300c & 0x10) != 0) {
    FUN_1000106c("DLL_PROCESS_ATTACH(0x%08X)");
  }
  uVar7 = FUN_10002220();
  if (DAT_1000300c == 0xffffffff) {
    DAT_1000300c = GetProfileIntA("Debug","MPGVOUT",0);
  }
  if ((DAT_1000300c & 0x10) != 0) {
    FUN_1000106c("CPU_flags: 0x%08X");
  }
  GetModuleFileNameA(param_1,(LPSTR)local_114,0x104);
  if (DAT_1000300c == 0xffffffff) {
    DAT_1000300c = GetProfileIntA("Debug","MPGVOUT",0);
  }
  puVar2 = local_114;
  if ((DAT_1000300c & 0x10) != 0) {
    FUN_1000106c("ModuleName: %s");
  }
  do {
    puVar5 = puVar2;
    uVar1 = *puVar5;
    if ((char)uVar1 == '\0') goto LAB_100018de;
    if ((char)(uVar1 >> 8) == '\0') goto LAB_100018dd;
    if ((uVar1 & 0xff0000) == 0) goto LAB_100018dc;
    puVar2 = puVar5 + 1;
  } while ((uVar1 & 0xff000000) != 0);
  puVar5 = (uint *)((int)puVar5 + 1);
LAB_100018dc:
  puVar5 = (uint *)((int)puVar5 + 1);
LAB_100018dd:
  puVar5 = (uint *)((int)puVar5 + 1);
LAB_100018de:
  iVar6 = (int)puVar5 - (int)local_114;
  if (iVar6 < 0xc) {
    iVar6 = 0;
  }
  else {
    iVar6 = iVar6 + -0xb;
  }
  if ((uVar7 & 0x300) == 0) {
    if ((char)uVar7 < '\0') {
      if (DAT_1000300c == 0xffffffff) {
        DAT_1000300c = GetProfileIntA("Debug","MPGVOUT",0);
      }
      if ((DAT_1000300c & 0x10) != 0) {
        FUN_1000106c("3DNOW:mpgvout.003");
      }
      puVar4 = &DAT_10001338;
      uVar3 = DAT_10001338;
    }
    else if (((uint)uVar7 & 0x60) == 0x60) {
      if (DAT_1000300c == 0xffffffff) {
        DAT_1000300c = GetProfileIntA("Debug","MPGVOUT",0);
      }
      if ((DAT_1000300c & 0x10) != 0) {
        FUN_1000106c("MMX/CMOV(PII):mpgvout.002");
      }
      puVar4 = &DAT_1000135e;
      uVar3 = DAT_1000135e;
    }
    else {
      if ((uVar7 & 0x20) == 0) goto LAB_10001a57;
      if (DAT_1000300c == 0xffffffff) {
        DAT_1000300c = GetProfileIntA("Debug","MPGVOUT",0);
      }
      if ((DAT_1000300c & 0x10) != 0) {
        FUN_1000106c("MMX:mpgvout.001");
      }
      puVar4 = &DAT_1000137a;
      uVar3 = DAT_1000137a;
    }
  }
  else {
    if (DAT_1000300c == 0xffffffff) {
      DAT_1000300c = GetProfileIntA("Debug","MPGVOUT",0);
    }
    if ((DAT_1000300c & 0x10) != 0) {
      FUN_1000106c("SSE/3DNOWEXT:mpgvout.004");
    }
    puVar4 = &DAT_1000131a;
    uVar3 = DAT_1000131a;
  }
  *(undefined4 *)((int)local_114 + iVar6) = uVar3;
  *(undefined4 *)((int)local_114 + iVar6 + 4) = puVar4[1];
  *(undefined4 *)((int)local_114 + iVar6 + 8) = puVar4[2];
LAB_10001a57:
  if (DAT_1000300c == 0xffffffff) {
    DAT_1000300c = GetProfileIntA("Debug","MPGVOUT",0);
  }
  if ((DAT_1000300c & 0x10) != 0) {
    FUN_1000106c("LibraryName: %s");
  }
  DAT_10003014 = LoadLibraryA((LPCSTR)local_114);
  if (DAT_10003014 != (HMODULE)0x0) {
    DAT_10003018 = GetProcAddress(DAT_10003014,"mpegOutVideoDefaults");
    if (DAT_10003018 == (FARPROC)0x0) {
      if (DAT_1000300c == 0xffffffff) {
        DAT_1000300c = GetProfileIntA("Debug","MPGVOUT",0);
      }
      if ((DAT_1000300c & 1) != 0) {
        FUN_10001108("not in the library:mpegOutVideoDefaults");
      }
    }
    DAT_1000301c = GetProcAddress(DAT_10003014,"mpegOutVideoCheckSettings");
    if (DAT_1000301c == (FARPROC)0x0) {
      if (DAT_1000300c == 0xffffffff) {
        DAT_1000300c = GetProfileIntA("Debug","MPGVOUT",0);
      }
      if ((DAT_1000300c & 1) != 0) {
        FUN_10001108("not in the library:mpegOutVideoCheckSettings");
      }
    }
    DAT_10003020 = GetProcAddress(DAT_10003014,"mpegOutVideoGetLastErrString");
    if (DAT_10003020 == (FARPROC)0x0) {
      if (DAT_1000300c == 0xffffffff) {
        DAT_1000300c = GetProfileIntA("Debug","MPGVOUT",0);
      }
      if ((DAT_1000300c & 1) != 0) {
        FUN_10001108("not in the library:mpegOutVideoGetLastErrString");
      }
    }
    DAT_10003024 = GetProcAddress(DAT_10003014,"mpegOutVideoPerformance");
    if (DAT_10003024 == (FARPROC)0x0) {
      if (DAT_1000300c == 0xffffffff) {
        DAT_1000300c = GetProfileIntA("Debug","MPGVOUT",0);
      }
      if ((DAT_1000300c & 1) != 0) {
        FUN_10001108("not in the library:mpegOutVideoPerformance");
      }
    }
    DAT_10003028 = GetProcAddress(DAT_10003014,"mpegOutVideoNew");
    if (DAT_10003028 == (FARPROC)0x0) {
      if (DAT_1000300c == 0xffffffff) {
        DAT_1000300c = GetProfileIntA("Debug","MPGVOUT",0);
      }
      if ((DAT_1000300c & 1) != 0) {
        FUN_10001108("not in the library:mpegOutVideoNew");
      }
    }
    DAT_1000302c = GetProcAddress(DAT_10003014,"mpegOutVideoFree");
    if (DAT_1000302c == (FARPROC)0x0) {
      if (DAT_1000300c == 0xffffffff) {
        DAT_1000300c = GetProfileIntA("Debug","MPGVOUT",0);
      }
      if ((DAT_1000300c & 1) != 0) {
        FUN_10001108("not in the library:mpegOutVideoFree");
      }
    }
    DAT_10003030 = GetProcAddress(DAT_10003014,"mpegOutVideoInit");
    if (DAT_10003030 == (FARPROC)0x0) {
      if (DAT_1000300c == 0xffffffff) {
        DAT_1000300c = GetProfileIntA("Debug","MPGVOUT",0);
      }
      if ((DAT_1000300c & 1) != 0) {
        FUN_10001108("not in the library:mpegOutVideoInit");
      }
    }
    DAT_10003034 = GetProcAddress(DAT_10003014,"mpegOutVideoDone");
    if (DAT_10003034 == (FARPROC)0x0) {
      if (DAT_1000300c == 0xffffffff) {
        DAT_1000300c = GetProfileIntA("Debug","MPGVOUT",0);
      }
      if ((DAT_1000300c & 1) != 0) {
        FUN_10001108("not in the library:mpegOutVideoDone");
      }
    }
    DAT_10003038 = GetProcAddress(DAT_10003014,"mpegOutVideoPutFrame");
    if (DAT_10003038 == (FARPROC)0x0) {
      if (DAT_1000300c == 0xffffffff) {
        DAT_1000300c = GetProfileIntA("Debug","MPGVOUT",0);
      }
      if ((DAT_1000300c & 1) != 0) {
        FUN_10001108("not in the library:mpegOutVideoPutFrame");
      }
    }
    DAT_1000303c = GetProcAddress(DAT_10003014,"mpegOutVideoPut");
    if (DAT_1000303c == (FARPROC)0x0) {
      if (DAT_1000300c == 0xffffffff) {
        DAT_1000300c = GetProfileIntA("Debug","MPGVOUT",0);
      }
      if ((DAT_1000300c & 1) != 0) {
        FUN_10001108("not in the library:mpegOutVideoPut");
      }
    }
    DAT_10003040 = GetProcAddress(DAT_10003014,"mpegOutVideoGetMaxBitrate");
    if (DAT_10003040 == (FARPROC)0x0) {
      if (DAT_1000300c == 0xffffffff) {
        DAT_1000300c = GetProfileIntA("Debug","MPGVOUT",0);
      }
      if ((DAT_1000300c & 1) != 0) {
        FUN_10001108("not in the library:mpegOutVideoGetMaxBitrate");
      }
    }
    DAT_10003044 = GetProcAddress(DAT_10003014,"mpegOutVideoPutFrameV");
    if (DAT_10003044 == (FARPROC)0x0) {
      if (DAT_1000300c == 0xffffffff) {
        DAT_1000300c = GetProfileIntA("Debug","MPGVOUT",0);
      }
      if ((DAT_1000300c & 1) != 0) {
        FUN_10001108("not in the library:mpegOutVideoPutFrameV");
      }
    }
    return 1;
  }
  if (DAT_1000300c == 0xffffffff) {
    DAT_1000300c = GetProfileIntA("Debug","MPGVOUT",0);
  }
  if ((DAT_1000300c & 1) != 0) {
    FUN_10001108("Library %s not found");
  }
  return 0;
}


