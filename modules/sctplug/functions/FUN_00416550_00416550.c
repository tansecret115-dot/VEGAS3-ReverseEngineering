/* Module: sctplug.dll
   Function: FUN_00416550
   Address: 00416550
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x00417510) */
/* WARNING: Removing unreachable block (ram,0x00417483) */
/* WARNING: Removing unreachable block (ram,0x00416aa5) */

void FUN_00416550(HWND param_1)

{
  HFONT wParam;
  int iVar1;
  int iVar2;
  LCID Locale;
  HDC hdc;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  LPARAM lParam;
  _OSVERSIONINFOA local_238;
  CHAR local_1a4 [128];
  CHAR local_124 [120];
  undefined4 local_ac;
  undefined4 local_a8;
  CHAR local_a4;
  undefined4 uStack_a3;
  undefined1 local_86;
  uint local_24;
  undefined4 local_20;
  int local_10;
  uint local_8;
  
  puVar9 = &stack0xfffffffc;
  FUN_00413d30(param_1,(BYTE *)0x0);
  lParam = 0;
  wParam = FUN_0042bc60(0x66);
  SendMessageA(param_1,0x30,(WPARAM)wParam,lParam);
  local_238.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_238);
  FUN_00413d30(param_1,(BYTE *)"Operating System");
  _local_a4 = 0x20202020;
  lstrcpynA((LPSTR)((int)&uStack_a3 + 3),"Platform",0x1b);
  pcVar7 = lstrlenA_exref;
  local_86 = 0;
  iVar1 = lstrlenA(&local_a4);
  (&local_a4)[iVar1] = ':';
  iVar2 = iVar1 + 1;
  local_10 = iVar2;
  if (iVar2 < 0x1d) {
    uVar3 = 0x1d - iVar2;
    puVar10 = (undefined4 *)((int)&uStack_a3 + iVar1);
    local_8 = uVar3;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar10 = 0x20202020;
      puVar10 = puVar10 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar10 = 0x20;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    iVar2 = local_10 + uVar3;
  }
  (&local_a4)[iVar2] = '\0';
  FUN_0040e420(local_124,0x20);
  FUN_00413d30(param_1,"%s%s");
  _local_a4 = 0x20202020;
  lstrcpynA((LPSTR)((int)&uStack_a3 + 3),"Version",0x1b);
  local_86 = 0;
  iVar1 = lstrlenA(&local_a4);
  (&local_a4)[iVar1] = ':';
  iVar2 = iVar1 + 1;
  local_10 = iVar2;
  if (iVar2 < 0x1d) {
    uVar3 = 0x1d - iVar2;
    puVar10 = (undefined4 *)((int)&uStack_a3 + iVar1);
    local_8 = uVar3;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar10 = 0x20202020;
      puVar10 = puVar10 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar10 = 0x20;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    iVar2 = local_10 + uVar3;
  }
  (&local_a4)[iVar2] = '\0';
  if (local_238.szCSDVersion[0] == '\0') {
    FUN_00413d30(param_1,(BYTE *)"%s%d.%.02d.%.03d");
  }
  else {
    FUN_00413d30(param_1,(BYTE *)"%s%d.%.02d.%.03d (%s)");
  }
  _local_a4 = 0x20202020;
  lstrcpynA((LPSTR)((int)&uStack_a3 + 3),"Language",0x1b);
  local_86 = 0;
  iVar1 = lstrlenA(&local_a4);
  (&local_a4)[iVar1] = ':';
  iVar2 = iVar1 + 1;
  local_10 = iVar2;
  if (iVar2 < 0x1d) {
    uVar3 = 0x1d - iVar2;
    puVar10 = (undefined4 *)((int)&uStack_a3 + iVar1);
    local_8 = uVar3;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar10 = 0x20202020;
      puVar10 = puVar10 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar10 = 0x20;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    iVar2 = local_10 + uVar3;
  }
  (&local_a4)[iVar2] = '\0';
  local_1a4[0] = '\0';
  Locale = FUN_0040e300();
  if (Locale != 0) {
    GetLocaleInfoA(Locale,0x1001,local_1a4,0x80);
  }
  FUN_00413d30(param_1,"%s%s");
  _local_a4 = 0x20202020;
  lstrcpynA((LPSTR)((int)&uStack_a3 + 3),"System Locale",0x1b);
  local_86 = 0;
  iVar1 = lstrlenA(&local_a4);
  (&local_a4)[iVar1] = ':';
  iVar2 = iVar1 + 1;
  local_10 = iVar2;
  if (iVar2 < 0x1d) {
    uVar3 = 0x1d - iVar2;
    puVar10 = (undefined4 *)((int)&uStack_a3 + iVar1);
    local_8 = uVar3;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar10 = 0x20202020;
      puVar10 = puVar10 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar10 = 0x20;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    iVar2 = local_10 + uVar3;
  }
  (&local_a4)[iVar2] = '\0';
  local_1a4[0] = '\0';
  GetLocaleInfoA(0x800,0x1001,local_1a4,0x80);
  FUN_00413d30(param_1,"%s%s");
  _local_a4 = 0x20202020;
  lstrcpynA((LPSTR)((int)&uStack_a3 + 3),"User Locale",0x1b);
  local_86 = 0;
  iVar1 = lstrlenA(&local_a4);
  (&local_a4)[iVar1] = ':';
  iVar2 = iVar1 + 1;
  local_10 = iVar2;
  if (iVar2 < 0x1d) {
    uVar3 = 0x1d - iVar2;
    puVar10 = (undefined4 *)((int)&uStack_a3 + iVar1);
    local_8 = uVar3;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar10 = 0x20202020;
      puVar10 = puVar10 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar10 = 0x20;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    iVar2 = local_10 + uVar3;
  }
  (&local_a4)[iVar2] = '\0';
  local_1a4[0] = '\0';
  GetLocaleInfoA(0x400,0x1001,local_1a4,0x80);
  FUN_00413d30(param_1,"%s%s");
  local_24 = FUN_0040eac0(0);
  FUN_00413d30(param_1,(BYTE *)"\r\nProcessor");
  _local_a4 = 0x20202020;
  lstrcpynA((LPSTR)((int)&uStack_a3 + 3),"Class",0x1b);
  local_86 = 0;
  iVar1 = lstrlenA(&local_a4);
  (&local_a4)[iVar1] = ':';
  iVar2 = iVar1 + 1;
  local_10 = iVar2;
  if (iVar2 < 0x1d) {
    uVar3 = 0x1d - iVar2;
    puVar10 = (undefined4 *)((int)&uStack_a3 + iVar1);
    local_8 = uVar3;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar10 = 0x20202020;
      puVar10 = puVar10 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar10 = 0x20;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    iVar2 = local_10 + uVar3;
  }
  (&local_a4)[iVar2] = '\0';
  switch(local_24 & 0xf) {
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
  }
  FUN_00413d30(param_1,"%s%s");
  uVar11 = FUN_0040e8a0();
  local_10 = (int)uVar11;
  if (-1 < local_10) {
    _local_a4 = 0x20202020;
    lstrcpynA((LPSTR)((int)&uStack_a3 + 3),"Identifier",0x1b);
    local_86 = 0;
    iVar1 = lstrlenA(&local_a4);
    (&local_a4)[iVar1] = ':';
    iVar2 = iVar1 + 1;
    if (iVar2 < 0x1d) {
      uVar4 = 0x1d - iVar2;
      puVar10 = (undefined4 *)((int)&uStack_a3 + iVar1);
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar10 = 0x20202020;
        puVar10 = puVar10 + 1;
      }
      iVar2 = iVar2 + uVar4;
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar10 = 0x20;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
    }
    (&local_a4)[iVar2] = '\0';
    puVar10 = (undefined4 *)cpuid_basic_info(0);
    local_ac = *puVar10;
    local_a8 = puVar10[1];
    local_20 = puVar10[2];
    local_8 = puVar10[3];
    puVar9 = (undefined1 *)CONCAT22((short)((uint)&stack0xfffffffc >> 0x10),(short)&stack0xfffffffc)
    ;
    uVar5 = *(undefined4 *)(puVar9 + -0xa4);
    puVar9[-0xac] = 0;
    puVar9[-0xb8] = (char)uVar5;
    puVar9[-0xb5] = (char)((uint)uVar5 >> 0x18);
    uVar6 = *(undefined4 *)(puVar9 + -0x1c);
    puVar9[-0xb7] = (char)((uint)uVar5 >> 8);
    puVar9[-0xb6] = (char)((uint)uVar5 >> 0x10);
    puVar9[-0xb4] = (char)uVar6;
    puVar9[-0xb1] = (char)((uint)uVar6 >> 0x18);
    uVar5 = *(undefined4 *)(puVar9 + -4);
    puVar9[-0xb3] = (char)((uint)uVar6 >> 8);
    puVar9[-0xb2] = (char)((uint)uVar6 >> 0x10);
    puVar9[-0xb0] = (char)uVar5;
    puVar9[-0xad] = (char)((uint)uVar5 >> 0x18);
    puVar9[-0xaf] = (char)((uint)uVar5 >> 8);
    puVar9[-0xae] = (char)((uint)uVar5 >> 0x10);
    FUN_00413d30(*(HWND *)(puVar9 + 8),"%s%s");
    param_1 = *(HWND *)(puVar9 + 8);
    pcVar7 = lstrlenA_exref;
  }
  GetSystemInfo((LPSYSTEM_INFO)(puVar9 + -0x100));
  *(undefined4 *)(puVar9 + -0xa0) = 0x20202020;
  lstrcpynA(puVar9 + -0x9c,"Number of processors",0x1b);
  puVar9[-0x82] = 0;
  iVar1 = (*pcVar7)();
  puVar9[iVar1 + -0xa0] = 0x3a;
  iVar2 = iVar1 + 1;
  *(int *)(puVar9 + -0x14) = iVar2;
  if (iVar2 < 0x1d) {
    uVar3 = 0x1d - iVar2;
    *(uint *)(puVar9 + -0x10) = uVar3;
    puVar10 = (undefined4 *)(puVar9 + iVar1 + -0x9f);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar10 = 0x20202020;
      puVar10 = puVar10 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar10 = 0x20;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    iVar2 = *(int *)(puVar9 + -0x14) + uVar3;
  }
  puVar9[iVar2 + -0xa0] = 0;
  FUN_00413d30(param_1,"%s$u");
  *(undefined4 *)(puVar9 + -0xa0) = 0x20202020;
  lstrcpynA(puVar9 + -0x9c,"MMX available",0x1b);
  puVar9[-0x82] = 0;
  iVar1 = (*pcVar7)();
  puVar9[iVar1 + -0xa0] = 0x3a;
  iVar2 = iVar1 + 1;
  *(int *)(puVar9 + -0x10) = iVar2;
  if (iVar2 < 0x1d) {
    uVar3 = 0x1d - iVar2;
    *(uint *)(puVar9 + -0x14) = uVar3;
    puVar10 = (undefined4 *)(puVar9 + iVar1 + -0x9f);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar10 = 0x20202020;
      puVar10 = puVar10 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar10 = 0x20;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    iVar2 = *(int *)(puVar9 + -0x10) + uVar3;
  }
  puVar9[iVar2 + -0xa0] = 0;
  FUN_00413d30(param_1,"%s%s");
  *(undefined4 *)(puVar9 + -0xa0) = 0x20202020;
  lstrcpynA(puVar9 + -0x9c,"SSE available",0x1b);
  puVar9[-0x82] = 0;
  iVar1 = (*pcVar7)();
  puVar9[iVar1 + -0xa0] = 0x3a;
  iVar2 = iVar1 + 1;
  *(int *)(puVar9 + -0x10) = iVar2;
  if (iVar2 < 0x1d) {
    uVar3 = 0x1d - iVar2;
    *(uint *)(puVar9 + -0x14) = uVar3;
    puVar10 = (undefined4 *)(puVar9 + iVar1 + -0x9f);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar10 = 0x20202020;
      puVar10 = puVar10 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar10 = 0x20;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    iVar2 = *(int *)(puVar9 + -0x10) + uVar3;
  }
  puVar9[iVar2 + -0xa0] = 0;
  FUN_00413d30(param_1,"%s%s");
  *(undefined4 *)(puVar9 + -0xa0) = 0x20202020;
  lstrcpynA(puVar9 + -0x9c,"SSE2 available",0x1b);
  puVar9[-0x82] = 0;
  iVar1 = (*pcVar7)();
  puVar9[iVar1 + -0xa0] = 0x3a;
  iVar2 = iVar1 + 1;
  *(int *)(puVar9 + -0x10) = iVar2;
  if (iVar2 < 0x1d) {
    uVar3 = 0x1d - iVar2;
    *(uint *)(puVar9 + -0x14) = uVar3;
    puVar10 = (undefined4 *)(puVar9 + iVar1 + -0x9f);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar10 = 0x20202020;
      puVar10 = puVar10 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar10 = 0x20;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    iVar2 = *(int *)(puVar9 + -0x10) + uVar3;
  }
  puVar9[iVar2 + -0xa0] = 0;
  FUN_00413d30(param_1,"%s%s");
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,8);
  *(int *)(puVar9 + -8) = iVar1;
  iVar1 = GetDeviceCaps(hdc,10);
  *(int *)(puVar9 + -0x18) = iVar1;
  iVar1 = GetDeviceCaps(hdc,0xc);
  *(int *)(puVar9 + -0xbc) = iVar1;
  ReleaseDC((HWND)0x0,hdc);
  FUN_00413d30(param_1,(BYTE *)"\r\nDisplay");
  *(undefined4 *)(puVar9 + -0xa0) = 0x20202020;
  lstrcpynA(puVar9 + -0x9c,"Primary",0x1b);
  puVar9[-0x82] = 0;
  iVar1 = (*pcVar7)();
  puVar9[iVar1 + -0xa0] = 0x3a;
  iVar2 = iVar1 + 1;
  *(int *)(puVar9 + -0x10) = iVar2;
  if (iVar2 < 0x1d) {
    uVar3 = 0x1d - iVar2;
    *(uint *)(puVar9 + -0x14) = uVar3;
    puVar10 = (undefined4 *)(puVar9 + iVar1 + -0x9f);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar10 = 0x20202020;
      puVar10 = puVar10 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar10 = 0x20;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    iVar2 = *(int *)(puVar9 + -0x10) + uVar3;
  }
  puVar9[iVar2 + -0xa0] = 0;
  FUN_00413d30(param_1,(BYTE *)"%s%dx%dx%d");
  *(undefined4 *)(puVar9 + -0xdc) = 0x20;
  GlobalMemoryStatus((LPMEMORYSTATUS)(puVar9 + -0xdc));
  FUN_00413d30(param_1,(BYTE *)"\r\nMemory");
  *(undefined4 *)(puVar9 + -0xa0) = 0x20202020;
  lstrcpynA(puVar9 + -0x9c,"Physical memory",0x1b);
  puVar9[-0x82] = 0;
  iVar1 = (*pcVar7)();
  puVar9[iVar1 + -0xa0] = 0x3a;
  iVar2 = iVar1 + 1;
  *(int *)(puVar9 + -8) = iVar2;
  if (iVar2 < 0x1d) {
    uVar3 = 0x1d - iVar2;
    *(uint *)(puVar9 + -0x18) = uVar3;
    puVar10 = (undefined4 *)(puVar9 + iVar1 + -0x9f);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar10 = 0x20202020;
      puVar10 = puVar10 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar10 = 0x20;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    iVar2 = *(int *)(puVar9 + -8) + uVar3;
  }
  puVar9[iVar2 + -0xa0] = 0;
  FUN_00413d30(param_1,(BYTE *)"%s$.1z MB");
  *(undefined4 *)(puVar9 + -0xa0) = 0x20202020;
  lstrcpynA(puVar9 + -0x9c,"Paging memory available",0x1b);
  puVar9[-0x82] = 0;
  iVar1 = (*pcVar7)();
  puVar9[iVar1 + -0xa0] = 0x3a;
  iVar2 = iVar1 + 1;
  *(int *)(puVar9 + -8) = iVar2;
  if (iVar2 < 0x1d) {
    uVar3 = 0x1d - iVar2;
    *(uint *)(puVar9 + -0x18) = uVar3;
    puVar10 = (undefined4 *)(puVar9 + iVar1 + -0x9f);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar10 = 0x20202020;
      puVar10 = puVar10 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar10 = 0x20;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    iVar2 = *(int *)(puVar9 + -8) + uVar3;
  }
  puVar9[iVar2 + -0xa0] = 0;
  FUN_00413d30(param_1,(BYTE *)"%s$.1z MB");
  *(undefined4 *)(puVar9 + -0xa0) = 0x20202020;
  lstrcpynA(puVar9 + -0x9c,"Virtual memory possible",0x1b);
  puVar9[-0x82] = 0;
  iVar1 = (*pcVar7)();
  puVar9[iVar1 + -0xa0] = 0x3a;
  iVar2 = iVar1 + 1;
  *(int *)(puVar9 + -8) = iVar2;
  if (iVar2 < 0x1d) {
    uVar3 = 0x1d - iVar2;
    *(uint *)(puVar9 + -0x18) = uVar3;
    puVar10 = (undefined4 *)(puVar9 + iVar1 + -0x9f);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar10 = 0x20202020;
      puVar10 = puVar10 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar10 = 0x20;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    iVar2 = *(int *)(puVar9 + -8) + uVar3;
  }
  puVar9[iVar2 + -0xa0] = 0;
  FUN_00413d30(param_1,(BYTE *)"%s$.1z MB");
  if (*(int *)(puVar9 + 0x10) != 0) {
    FUN_00413d30(param_1,(BYTE *)"\r\nDebug");
    *(undefined4 *)(puVar9 + -0xa0) = 0x20202020;
    lstrcpynA(puVar9 + -0x9c,"Active processor mask",0x1b);
    puVar9[-0x82] = 0;
    iVar1 = (*pcVar7)(puVar9 + -0xa0);
    puVar9[iVar1 + -0xa0] = 0x3a;
    iVar2 = iVar1 + 1;
    *(int *)(puVar9 + 0x10) = iVar2;
    if (iVar2 < 0x1d) {
      uVar3 = 0x1d - iVar2;
      *(uint *)(puVar9 + -8) = uVar3;
      puVar10 = (undefined4 *)(puVar9 + iVar1 + -0x9f);
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar10 = 0x20202020;
        puVar10 = puVar10 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar10 = 0x20;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      iVar2 = *(int *)(puVar9 + 0x10) + uVar3;
    }
    puVar9[iVar2 + -0xa0] = 0;
    FUN_00413d30(param_1,(BYTE *)"%s%.08Xh");
    *(undefined4 *)(puVar9 + -0xa0) = 0x20202020;
    FUN_00418200(puVar9 + -0x9c,"Memory load (current)",0x1b);
    iVar1 = (*pcVar7)(puVar9 + -0xa0);
    puVar9[iVar1 + -0xa0] = 0x3a;
    iVar2 = iVar1 + 1;
    *(int *)(puVar9 + 0x10) = iVar2;
    if (iVar2 < 0x1d) {
      uVar3 = 0x1d - iVar2;
      *(uint *)(puVar9 + -8) = uVar3;
      puVar10 = (undefined4 *)(puVar9 + iVar1 + -0x9f);
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar10 = 0x20202020;
        puVar10 = puVar10 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar10 = 0x20;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      iVar2 = *(int *)(puVar9 + 0x10) + uVar3;
    }
    puVar9[iVar2 + -0xa0] = 0;
    FUN_00413d30(param_1,(BYTE *)"%s%d %%");
    *(undefined4 *)(puVar9 + -0xa0) = 0x20202020;
    FUN_00418200(puVar9 + -0x9c,"Page size",0x1b);
    iVar1 = (*pcVar7)(puVar9 + -0xa0);
    puVar9[iVar1 + -0xa0] = 0x3a;
    iVar2 = iVar1 + 1;
    *(int *)(puVar9 + 0x10) = iVar2;
    if (iVar2 < 0x1d) {
      uVar3 = 0x1d - iVar2;
      *(uint *)(puVar9 + -8) = uVar3;
      puVar10 = (undefined4 *)(puVar9 + iVar1 + -0x9f);
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar10 = 0x20202020;
        puVar10 = puVar10 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar10 = 0x20;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      iVar2 = *(int *)(puVar9 + 0x10) + uVar3;
    }
    puVar9[iVar2 + -0xa0] = 0;
    FUN_00413d30(param_1,(BYTE *)"%s$u KB");
    *(undefined4 *)(puVar9 + -0xa0) = 0x20202020;
    FUN_00418200(puVar9 + -0x9c,"Allocation granularity",0x1b);
    iVar1 = (*pcVar7)(puVar9 + -0xa0);
    puVar9[iVar1 + -0xa0] = 0x3a;
    iVar2 = iVar1 + 1;
    *(int *)(puVar9 + 0x10) = iVar2;
    if (iVar2 < 0x1d) {
      uVar3 = 0x1d - iVar2;
      *(uint *)(puVar9 + -8) = uVar3;
      puVar10 = (undefined4 *)(puVar9 + iVar1 + -0x9f);
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar10 = 0x20202020;
        puVar10 = puVar10 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar10 = 0x20;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      iVar2 = *(int *)(puVar9 + 0x10) + uVar3;
    }
    puVar9[iVar2 + -0xa0] = 0;
    FUN_00413d30(param_1,(BYTE *)"%s$u KB");
    *(undefined4 *)(puVar9 + -0xa0) = 0x20202020;
    FUN_00418200(puVar9 + -0x9c,"Min. app address",0x1b);
    iVar1 = (*pcVar7)(puVar9 + -0xa0);
    puVar9[iVar1 + -0xa0] = 0x3a;
    iVar2 = iVar1 + 1;
    if (iVar2 < 0x1d) {
      uVar3 = 0x1d - iVar2;
      *(uint *)(puVar9 + 0x10) = uVar3;
      puVar10 = (undefined4 *)(puVar9 + iVar1 + -0x9f);
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar10 = 0x20202020;
        puVar10 = puVar10 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar10 = 0x20;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      iVar2 = iVar2 + uVar3;
    }
    puVar9[iVar2 + -0xa0] = 0;
    FUN_00413d30(param_1,(BYTE *)"%s%.08Xh");
    FUN_00418230("Max. app address",puVar9 + -0xa0,0x80);
    FUN_00413d30(param_1,(BYTE *)"%s%.08Xh");
    FUN_00418230("CMOV available",puVar9 + -0xa0,0x80);
    FUN_00413d30(param_1,"%s%s");
    FUN_00418230("FCOMI available",puVar9 + -0xa0,0x80);
    FUN_00413d30(param_1,"%s%s");
    FUN_00418230("RDTSC available",puVar9 + -0xa0,0x80);
    FUN_00413d30(param_1,"%s%s");
    iVar1 = *(int *)(puVar9 + -0xc);
    if (-1 < iVar1) {
      FUN_00418230("CPU ID level supported",puVar9 + -0xa0,0x80);
      FUN_00413d30(param_1,"%s%d");
    }
    if (0 < iVar1) {
      puVar10 = (undefined4 *)cpuid_Version_info(1);
      uVar8 = puVar10[1];
      uVar6 = puVar10[2];
      uVar5 = puVar10[3];
      *(undefined4 *)(puVar9 + -0xa8) = *puVar10;
      *(undefined4 *)(puVar9 + -0xa4) = uVar8;
      *(undefined4 *)(puVar9 + -4) = uVar5;
      *(undefined4 *)(puVar9 + -0x1c) = uVar6;
      FUN_00418230("Version info (EAX)",puVar9 + -0xa0,0x80);
      param_1 = *(HWND *)(puVar9 + 8);
      FUN_00413d30(param_1,(BYTE *)"%s%.08Xh");
      FUN_00418230("Features (EDX)",puVar9 + -0xa0,0x80);
      FUN_00413d30(param_1,(BYTE *)"%s%.08Xh");
      iVar1 = *(int *)(puVar9 + -0xc);
    }
    if (1 < iVar1) {
      puVar10 = (undefined4 *)cpuid_cache_tlb_info(2);
      uVar8 = puVar10[1];
      uVar6 = puVar10[2];
      uVar5 = puVar10[3];
      *(undefined4 *)(puVar9 + -0xa8) = *puVar10;
      *(undefined4 *)(puVar9 + -0xa4) = uVar8;
      *(undefined4 *)(puVar9 + -4) = uVar5;
      *(undefined4 *)(puVar9 + -0x1c) = uVar6;
      FUN_00418230("Cache/TLB (EAX)",puVar9 + -0xa0,0x80);
      param_1 = *(HWND *)(puVar9 + 8);
      FUN_00413d30(param_1,(BYTE *)"%s%.08Xh");
      FUN_00418230("Cache/TLB (EBX)",puVar9 + -0xa0,0x80);
      FUN_00413d30(param_1,(BYTE *)"%s%.08Xh");
      FUN_00418230("Cache/TLB (ECX)",puVar9 + -0xa0,0x80);
      FUN_00413d30(param_1,(BYTE *)"%s%.08Xh");
      FUN_00418230("Cache/TLB (EDX)",puVar9 + -0xa0,0x80);
      FUN_00413d30(param_1,(BYTE *)"%s%.08Xh");
    }
  }
  iVar1 = *(int *)(puVar9 + 0xc);
  if (iVar1 != 0) {
    FUN_00413d30(param_1,"\r\n");
    SendMessageA(param_1,0xb1,0xffffffff,-1);
    SendMessageA(param_1,0xc2,0,iVar1);
  }
  return;
}


