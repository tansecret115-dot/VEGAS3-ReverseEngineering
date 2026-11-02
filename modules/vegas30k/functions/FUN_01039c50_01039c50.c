/* Module: vegas30k.dll
   Function: FUN_01039c50
   Address: 01039c50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x0103ac10) */
/* WARNING: Removing unreachable block (ram,0x0103ab83) */
/* WARNING: Removing unreachable block (ram,0x0103a1a5) */

void FUN_01039c50(HWND param_1)

{
  WPARAM wParam;
  int iVar1;
  int iVar2;
  LCID Locale;
  HDC hdc;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  LPARAM lParam;
  _OSVERSIONINFOA local_238;
  CHAR local_1a4 [248];
  undefined4 local_ac;
  undefined4 local_a8;
  CHAR local_a4;
  undefined4 uStack_a3;
  undefined1 local_86;
  uint local_24;
  undefined4 local_20;
  int local_10;
  uint local_8;
  
  puVar10 = &stack0xfffffffc;
  SfMEditPrintF();
  lParam = 0;
  wParam = _SfGetUIFont_4();
  SendMessageA(param_1,0x30,wParam,lParam);
  local_238.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_238);
  SfMEditPrintF();
  _local_a4 = 0x20202020;
  lstrcpynA((LPSTR)((int)&uStack_a3 + 3),"Platform",0x1b);
  pcVar8 = lstrlenA_exref;
  local_86 = 0;
  iVar1 = lstrlenA(&local_a4);
  (&local_a4)[iVar1] = ':';
  iVar2 = iVar1 + 1;
  local_10 = iVar2;
  if (iVar2 < 0x1d) {
    uVar4 = 0x1d - iVar2;
    puVar11 = (undefined4 *)((int)&uStack_a3 + iVar1);
    local_8 = uVar4;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar11 = 0x20202020;
      puVar11 = puVar11 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar11 = 0x20;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    iVar2 = local_10 + uVar4;
  }
  (&local_a4)[iVar2] = '\0';
  _SfGetOS_8();
  SfMEditPrintF();
  _local_a4 = 0x20202020;
  lstrcpynA((LPSTR)((int)&uStack_a3 + 3),"Version",0x1b);
  local_86 = 0;
  iVar1 = lstrlenA(&local_a4);
  (&local_a4)[iVar1] = ':';
  iVar2 = iVar1 + 1;
  local_10 = iVar2;
  if (iVar2 < 0x1d) {
    uVar4 = 0x1d - iVar2;
    puVar11 = (undefined4 *)((int)&uStack_a3 + iVar1);
    local_8 = uVar4;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar11 = 0x20202020;
      puVar11 = puVar11 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar11 = 0x20;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    iVar2 = local_10 + uVar4;
  }
  (&local_a4)[iVar2] = '\0';
  if (local_238.szCSDVersion[0] == '\0') {
    SfMEditPrintF();
  }
  else {
    SfMEditPrintF();
  }
  _local_a4 = 0x20202020;
  lstrcpynA((LPSTR)((int)&uStack_a3 + 3),"Language",0x1b);
  local_86 = 0;
  iVar1 = lstrlenA(&local_a4);
  (&local_a4)[iVar1] = ':';
  iVar2 = iVar1 + 1;
  local_10 = iVar2;
  if (iVar2 < 0x1d) {
    uVar4 = 0x1d - iVar2;
    puVar11 = (undefined4 *)((int)&uStack_a3 + iVar1);
    local_8 = uVar4;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar11 = 0x20202020;
      puVar11 = puVar11 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar11 = 0x20;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    iVar2 = local_10 + uVar4;
  }
  (&local_a4)[iVar2] = '\0';
  local_1a4[0] = '\0';
  Locale = FUN_010c5c10();
  if (Locale != 0) {
    GetLocaleInfoA(Locale,0x1001,local_1a4,0x80);
  }
  SfMEditPrintF();
  _local_a4 = 0x20202020;
  lstrcpynA((LPSTR)((int)&uStack_a3 + 3),"System Locale",0x1b);
  local_86 = 0;
  iVar1 = lstrlenA(&local_a4);
  (&local_a4)[iVar1] = ':';
  iVar2 = iVar1 + 1;
  local_10 = iVar2;
  if (iVar2 < 0x1d) {
    uVar4 = 0x1d - iVar2;
    puVar11 = (undefined4 *)((int)&uStack_a3 + iVar1);
    local_8 = uVar4;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar11 = 0x20202020;
      puVar11 = puVar11 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar11 = 0x20;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    iVar2 = local_10 + uVar4;
  }
  (&local_a4)[iVar2] = '\0';
  local_1a4[0] = '\0';
  GetLocaleInfoA(0x800,0x1001,local_1a4,0x80);
  SfMEditPrintF();
  _local_a4 = 0x20202020;
  lstrcpynA((LPSTR)((int)&uStack_a3 + 3),"User Locale",0x1b);
  local_86 = 0;
  iVar1 = lstrlenA(&local_a4);
  (&local_a4)[iVar1] = ':';
  iVar2 = iVar1 + 1;
  local_10 = iVar2;
  if (iVar2 < 0x1d) {
    uVar4 = 0x1d - iVar2;
    puVar11 = (undefined4 *)((int)&uStack_a3 + iVar1);
    local_8 = uVar4;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar11 = 0x20202020;
      puVar11 = puVar11 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar11 = 0x20;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    iVar2 = local_10 + uVar4;
  }
  (&local_a4)[iVar2] = '\0';
  local_1a4[0] = '\0';
  GetLocaleInfoA(0x400,0x1001,local_1a4,0x80);
  SfMEditPrintF();
  local_24 = _SfGetCPUSupport_4();
  SfMEditPrintF();
  _local_a4 = 0x20202020;
  lstrcpynA((LPSTR)((int)&uStack_a3 + 3),"Class",0x1b);
  local_86 = 0;
  iVar1 = lstrlenA(&local_a4);
  (&local_a4)[iVar1] = ':';
  iVar2 = iVar1 + 1;
  local_10 = iVar2;
  if (iVar2 < 0x1d) {
    uVar4 = 0x1d - iVar2;
    puVar11 = (undefined4 *)((int)&uStack_a3 + iVar1);
    local_8 = uVar4;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar11 = 0x20202020;
      puVar11 = puVar11 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar11 = 0x20;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    iVar2 = local_10 + uVar4;
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
  SfMEditPrintF();
  local_10 = FUN_01055fd0();
  if (-1 < local_10) {
    _local_a4 = 0x20202020;
    lstrcpynA((LPSTR)((int)&uStack_a3 + 3),"Identifier",0x1b);
    local_86 = 0;
    iVar1 = lstrlenA(&local_a4);
    (&local_a4)[iVar1] = ':';
    iVar2 = iVar1 + 1;
    if (iVar2 < 0x1d) {
      uVar5 = 0x1d - iVar2;
      puVar11 = (undefined4 *)((int)&uStack_a3 + iVar1);
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar11 = 0x20202020;
        puVar11 = puVar11 + 1;
      }
      iVar2 = iVar2 + uVar5;
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar11 = 0x20;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
    }
    (&local_a4)[iVar2] = '\0';
    puVar11 = (undefined4 *)cpuid_basic_info(0);
    local_ac = *puVar11;
    local_a8 = puVar11[1];
    local_20 = puVar11[2];
    local_8 = puVar11[3];
    puVar10 = (undefined1 *)
              CONCAT22((short)((uint)&stack0xfffffffc >> 0x10),(short)&stack0xfffffffc);
    uVar6 = *(undefined4 *)(puVar10 + -0xa4);
    puVar10[-0xac] = 0;
    puVar10[-0xb8] = (char)uVar6;
    puVar10[-0xb5] = (char)((uint)uVar6 >> 0x18);
    uVar7 = *(undefined4 *)(puVar10 + -0x1c);
    puVar10[-0xb7] = (char)((uint)uVar6 >> 8);
    puVar10[-0xb6] = (char)((uint)uVar6 >> 0x10);
    puVar10[-0xb4] = (char)uVar7;
    puVar10[-0xb1] = (char)((uint)uVar7 >> 0x18);
    uVar6 = *(undefined4 *)(puVar10 + -4);
    puVar10[-0xb3] = (char)((uint)uVar7 >> 8);
    puVar10[-0xb2] = (char)((uint)uVar7 >> 0x10);
    puVar10[-0xb0] = (char)uVar6;
    puVar10[-0xad] = (char)((uint)uVar6 >> 0x18);
    puVar10[-0xaf] = (char)((uint)uVar6 >> 8);
    puVar10[-0xae] = (char)((uint)uVar6 >> 0x10);
    SfMEditPrintF();
    param_1 = *(HWND *)(puVar10 + 8);
    pcVar8 = lstrlenA_exref;
  }
  GetSystemInfo((LPSYSTEM_INFO)(puVar10 + -0x100));
  *(undefined4 *)(puVar10 + -0xa0) = 0x20202020;
  lstrcpynA(puVar10 + -0x9c,"Number of processors",0x1b);
  puVar10[-0x82] = 0;
  iVar1 = (*pcVar8)();
  puVar10[iVar1 + -0xa0] = 0x3a;
  iVar2 = iVar1 + 1;
  *(int *)(puVar10 + -0x14) = iVar2;
  if (iVar2 < 0x1d) {
    uVar4 = 0x1d - iVar2;
    *(uint *)(puVar10 + -0x10) = uVar4;
    puVar11 = (undefined4 *)(puVar10 + iVar1 + -0x9f);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar11 = 0x20202020;
      puVar11 = puVar11 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar11 = 0x20;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    iVar2 = *(int *)(puVar10 + -0x14) + uVar4;
  }
  puVar10[iVar2 + -0xa0] = 0;
  SfMEditPrintF();
  *(undefined4 *)(puVar10 + -0xa0) = 0x20202020;
  lstrcpynA(puVar10 + -0x9c,"MMX available",0x1b);
  puVar10[-0x82] = 0;
  iVar1 = (*pcVar8)();
  puVar10[iVar1 + -0xa0] = 0x3a;
  iVar2 = iVar1 + 1;
  *(int *)(puVar10 + -0x10) = iVar2;
  if (iVar2 < 0x1d) {
    uVar4 = 0x1d - iVar2;
    *(uint *)(puVar10 + -0x14) = uVar4;
    puVar11 = (undefined4 *)(puVar10 + iVar1 + -0x9f);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar11 = 0x20202020;
      puVar11 = puVar11 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar11 = 0x20;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    iVar2 = *(int *)(puVar10 + -0x10) + uVar4;
  }
  puVar10[iVar2 + -0xa0] = 0;
  SfMEditPrintF();
  *(undefined4 *)(puVar10 + -0xa0) = 0x20202020;
  lstrcpynA(puVar10 + -0x9c,"SSE available",0x1b);
  puVar10[-0x82] = 0;
  iVar1 = (*pcVar8)();
  puVar10[iVar1 + -0xa0] = 0x3a;
  iVar2 = iVar1 + 1;
  *(int *)(puVar10 + -0x10) = iVar2;
  if (iVar2 < 0x1d) {
    uVar4 = 0x1d - iVar2;
    *(uint *)(puVar10 + -0x14) = uVar4;
    puVar11 = (undefined4 *)(puVar10 + iVar1 + -0x9f);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar11 = 0x20202020;
      puVar11 = puVar11 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar11 = 0x20;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    iVar2 = *(int *)(puVar10 + -0x10) + uVar4;
  }
  puVar10[iVar2 + -0xa0] = 0;
  SfMEditPrintF();
  *(undefined4 *)(puVar10 + -0xa0) = 0x20202020;
  lstrcpynA(puVar10 + -0x9c,"SSE2 available",0x1b);
  puVar10[-0x82] = 0;
  iVar1 = (*pcVar8)();
  puVar10[iVar1 + -0xa0] = 0x3a;
  iVar2 = iVar1 + 1;
  *(int *)(puVar10 + -0x10) = iVar2;
  if (iVar2 < 0x1d) {
    uVar4 = 0x1d - iVar2;
    *(uint *)(puVar10 + -0x14) = uVar4;
    puVar11 = (undefined4 *)(puVar10 + iVar1 + -0x9f);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar11 = 0x20202020;
      puVar11 = puVar11 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar11 = 0x20;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    iVar2 = *(int *)(puVar10 + -0x10) + uVar4;
  }
  puVar10[iVar2 + -0xa0] = 0;
  SfMEditPrintF();
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,8);
  *(int *)(puVar10 + -8) = iVar1;
  iVar1 = GetDeviceCaps(hdc,10);
  *(int *)(puVar10 + -0x18) = iVar1;
  iVar1 = GetDeviceCaps(hdc,0xc);
  *(int *)(puVar10 + -0xbc) = iVar1;
  ReleaseDC((HWND)0x0,hdc);
  SfMEditPrintF();
  *(undefined4 *)(puVar10 + -0xa0) = 0x20202020;
  lstrcpynA(puVar10 + -0x9c,"Primary",0x1b);
  puVar10[-0x82] = 0;
  iVar1 = (*pcVar8)();
  puVar10[iVar1 + -0xa0] = 0x3a;
  iVar2 = iVar1 + 1;
  *(int *)(puVar10 + -0x10) = iVar2;
  if (iVar2 < 0x1d) {
    uVar4 = 0x1d - iVar2;
    *(uint *)(puVar10 + -0x14) = uVar4;
    puVar11 = (undefined4 *)(puVar10 + iVar1 + -0x9f);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar11 = 0x20202020;
      puVar11 = puVar11 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar11 = 0x20;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    iVar2 = *(int *)(puVar10 + -0x10) + uVar4;
  }
  puVar10[iVar2 + -0xa0] = 0;
  SfMEditPrintF(param_1,"%s%dx%dx%d",puVar10 + -0xa0);
  *(undefined4 *)(puVar10 + -0xdc) = 0x20;
  GlobalMemoryStatus((LPMEMORYSTATUS)(puVar10 + -0xdc));
  SfMEditPrintF();
  *(undefined4 *)(puVar10 + -0xa0) = 0x20202020;
  lstrcpynA(puVar10 + -0x9c,"Physical memory",0x1b);
  puVar10[-0x82] = 0;
  iVar1 = (*pcVar8)();
  puVar10[iVar1 + -0xa0] = 0x3a;
  iVar2 = iVar1 + 1;
  *(int *)(puVar10 + -8) = iVar2;
  if (iVar2 < 0x1d) {
    uVar4 = 0x1d - iVar2;
    *(uint *)(puVar10 + -0x18) = uVar4;
    puVar11 = (undefined4 *)(puVar10 + iVar1 + -0x9f);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar11 = 0x20202020;
      puVar11 = puVar11 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar11 = 0x20;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    iVar2 = *(int *)(puVar10 + -8) + uVar4;
  }
  puVar10[iVar2 + -0xa0] = 0;
  SfMEditPrintF(param_1,"%s$.1z MB");
  *(undefined4 *)(puVar10 + -0xa0) = 0x20202020;
  lstrcpynA(puVar10 + -0x9c,"Paging memory available",0x1b);
  puVar10[-0x82] = 0;
  iVar1 = (*pcVar8)();
  puVar10[iVar1 + -0xa0] = 0x3a;
  iVar2 = iVar1 + 1;
  *(int *)(puVar10 + -8) = iVar2;
  if (iVar2 < 0x1d) {
    uVar4 = 0x1d - iVar2;
    *(uint *)(puVar10 + -0x18) = uVar4;
    puVar11 = (undefined4 *)(puVar10 + iVar1 + -0x9f);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar11 = 0x20202020;
      puVar11 = puVar11 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar11 = 0x20;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    iVar2 = *(int *)(puVar10 + -8) + uVar4;
  }
  puVar10[iVar2 + -0xa0] = 0;
  SfMEditPrintF(param_1,"%s$.1z MB",puVar10 + -0xa0);
  *(undefined4 *)(puVar10 + -0xa0) = 0x20202020;
  lstrcpynA(puVar10 + -0x9c,"Virtual memory possible",0x1b);
  puVar10[-0x82] = 0;
  iVar1 = (*pcVar8)();
  puVar10[iVar1 + -0xa0] = 0x3a;
  iVar2 = iVar1 + 1;
  *(int *)(puVar10 + -8) = iVar2;
  if (iVar2 < 0x1d) {
    uVar4 = 0x1d - iVar2;
    *(uint *)(puVar10 + -0x18) = uVar4;
    puVar11 = (undefined4 *)(puVar10 + iVar1 + -0x9f);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar11 = 0x20202020;
      puVar11 = puVar11 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar11 = 0x20;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    iVar2 = *(int *)(puVar10 + -8) + uVar4;
  }
  puVar10[iVar2 + -0xa0] = 0;
  SfMEditPrintF(param_1,"%s$.1z MB",puVar10 + -0xa0,*(uint *)(puVar10 + -0xc4) / 0x19000);
  if (*(int *)(puVar10 + 0x10) != 0) {
    SfMEditPrintF(param_1,"\r\nDebug");
    *(undefined4 *)(puVar10 + -0xa0) = 0x20202020;
    lstrcpynA(puVar10 + -0x9c,"Active processor mask",0x1b);
    puVar10[-0x82] = 0;
    iVar1 = (*pcVar8)(puVar10 + -0xa0);
    puVar10[iVar1 + -0xa0] = 0x3a;
    iVar2 = iVar1 + 1;
    *(int *)(puVar10 + 0x10) = iVar2;
    if (iVar2 < 0x1d) {
      uVar4 = 0x1d - iVar2;
      *(uint *)(puVar10 + -8) = uVar4;
      puVar11 = (undefined4 *)(puVar10 + iVar1 + -0x9f);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar11 = 0x20202020;
        puVar11 = puVar11 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar11 = 0x20;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      iVar2 = *(int *)(puVar10 + 0x10) + uVar4;
    }
    puVar10[iVar2 + -0xa0] = 0;
    SfMEditPrintF(param_1,"%s%.08Xh",puVar10 + -0xa0,*(undefined4 *)(puVar10 + -0xf0));
    *(undefined4 *)(puVar10 + -0xa0) = 0x20202020;
    FUN_0103b900(puVar10 + -0x9c,"Memory load (current)",0x1b);
    iVar1 = (*pcVar8)(puVar10 + -0xa0);
    puVar10[iVar1 + -0xa0] = 0x3a;
    iVar2 = iVar1 + 1;
    *(int *)(puVar10 + 0x10) = iVar2;
    if (iVar2 < 0x1d) {
      uVar4 = 0x1d - iVar2;
      *(uint *)(puVar10 + -8) = uVar4;
      puVar11 = (undefined4 *)(puVar10 + iVar1 + -0x9f);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar11 = 0x20202020;
        puVar11 = puVar11 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar11 = 0x20;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      iVar2 = *(int *)(puVar10 + 0x10) + uVar4;
    }
    puVar10[iVar2 + -0xa0] = 0;
    SfMEditPrintF(param_1,"%s%d %%",puVar10 + -0xa0,*(undefined4 *)(puVar10 + -0xd8));
    *(undefined4 *)(puVar10 + -0xa0) = 0x20202020;
    FUN_0103b900(puVar10 + -0x9c,"Page size",0x1b);
    iVar1 = (*pcVar8)(puVar10 + -0xa0);
    puVar10[iVar1 + -0xa0] = 0x3a;
    iVar2 = iVar1 + 1;
    *(int *)(puVar10 + 0x10) = iVar2;
    if (iVar2 < 0x1d) {
      uVar4 = 0x1d - iVar2;
      *(uint *)(puVar10 + -8) = uVar4;
      puVar11 = (undefined4 *)(puVar10 + iVar1 + -0x9f);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar11 = 0x20202020;
        puVar11 = puVar11 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar11 = 0x20;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      iVar2 = *(int *)(puVar10 + 0x10) + uVar4;
    }
    puVar10[iVar2 + -0xa0] = 0;
    SfMEditPrintF(param_1,"%s$u KB",puVar10 + -0xa0,*(uint *)(puVar10 + -0xfc) >> 10);
    *(undefined4 *)(puVar10 + -0xa0) = 0x20202020;
    FUN_0103b900(puVar10 + -0x9c,"Allocation granularity",0x1b);
    iVar1 = (*pcVar8)(puVar10 + -0xa0);
    puVar10[iVar1 + -0xa0] = 0x3a;
    iVar2 = iVar1 + 1;
    *(int *)(puVar10 + 0x10) = iVar2;
    if (iVar2 < 0x1d) {
      uVar4 = 0x1d - iVar2;
      *(uint *)(puVar10 + -8) = uVar4;
      puVar11 = (undefined4 *)(puVar10 + iVar1 + -0x9f);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar11 = 0x20202020;
        puVar11 = puVar11 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar11 = 0x20;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      iVar2 = *(int *)(puVar10 + 0x10) + uVar4;
    }
    puVar10[iVar2 + -0xa0] = 0;
    SfMEditPrintF(param_1,"%s$u KB",puVar10 + -0xa0,*(uint *)(puVar10 + -0xe4) >> 10);
    *(undefined4 *)(puVar10 + -0xa0) = 0x20202020;
    FUN_0103b900(puVar10 + -0x9c,"Min. app address",0x1b);
    iVar1 = (*pcVar8)(puVar10 + -0xa0);
    puVar10[iVar1 + -0xa0] = 0x3a;
    iVar2 = iVar1 + 1;
    if (iVar2 < 0x1d) {
      uVar4 = 0x1d - iVar2;
      *(uint *)(puVar10 + 0x10) = uVar4;
      puVar11 = (undefined4 *)(puVar10 + iVar1 + -0x9f);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar11 = 0x20202020;
        puVar11 = puVar11 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar11 = 0x20;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      iVar2 = iVar2 + uVar4;
    }
    uVar6 = *(undefined4 *)(puVar10 + -0xf8);
    puVar10[iVar2 + -0xa0] = 0;
    SfMEditPrintF(param_1,"%s%.08Xh",puVar10 + -0xa0,uVar6);
    FUN_0103b930("Max. app address",puVar10 + -0xa0,0x80);
    SfMEditPrintF(param_1,"%s%.08Xh",puVar10 + -0xa0,*(undefined4 *)(puVar10 + -0xf4));
    FUN_0103b930("CMOV available",puVar10 + -0xa0,0x80);
    uVar4 = *(uint *)(puVar10 + -0x20);
    puVar3 = &DAT_011dcb9c;
    if ((uVar4 & 0x100) == 0) {
      puVar3 = &DAT_011dcb98;
    }
    SfMEditPrintF(param_1,&DAT_011db124,puVar10 + -0xa0,puVar3);
    FUN_0103b930("FCOMI available",puVar10 + -0xa0,0x80);
    puVar3 = &DAT_011dcb9c;
    if ((uVar4 & 0x200) == 0) {
      puVar3 = &DAT_011dcb98;
    }
    SfMEditPrintF(param_1,&DAT_011db124,puVar10 + -0xa0,puVar3);
    FUN_0103b930("RDTSC available",puVar10 + -0xa0,0x80);
    puVar3 = &DAT_011dcb9c;
    if ((uVar4 & 0x400) == 0) {
      puVar3 = &DAT_011dcb98;
    }
    SfMEditPrintF(param_1,&DAT_011db124,puVar10 + -0xa0,puVar3);
    iVar1 = *(int *)(puVar10 + -0xc);
    if (-1 < iVar1) {
      FUN_0103b930("CPU ID level supported",puVar10 + -0xa0,0x80);
      SfMEditPrintF(param_1,&DAT_011dcc38,puVar10 + -0xa0,iVar1);
    }
    if (0 < iVar1) {
      puVar11 = (undefined4 *)cpuid_Version_info(1);
      uVar9 = puVar11[1];
      uVar7 = puVar11[2];
      uVar6 = puVar11[3];
      *(undefined4 *)(puVar10 + -0xa8) = *puVar11;
      *(undefined4 *)(puVar10 + -0xa4) = uVar9;
      *(undefined4 *)(puVar10 + -4) = uVar6;
      *(undefined4 *)(puVar10 + -0x1c) = uVar7;
      FUN_0103b930("Version info (EAX)",puVar10 + -0xa0,0x80);
      param_1 = *(HWND *)(puVar10 + 8);
      SfMEditPrintF(param_1,"%s%.08Xh",puVar10 + -0xa0,*(undefined4 *)(puVar10 + -0xa8));
      FUN_0103b930("Features (EDX)",puVar10 + -0xa0,0x80);
      SfMEditPrintF(param_1,"%s%.08Xh",puVar10 + -0xa0,*(undefined4 *)(puVar10 + -0x1c));
      iVar1 = *(int *)(puVar10 + -0xc);
    }
    if (1 < iVar1) {
      puVar11 = (undefined4 *)cpuid_cache_tlb_info(2);
      uVar9 = puVar11[1];
      uVar7 = puVar11[2];
      uVar6 = puVar11[3];
      *(undefined4 *)(puVar10 + -0xa8) = *puVar11;
      *(undefined4 *)(puVar10 + -0xa4) = uVar9;
      *(undefined4 *)(puVar10 + -4) = uVar6;
      *(undefined4 *)(puVar10 + -0x1c) = uVar7;
      FUN_0103b930("Cache/TLB (EAX)",puVar10 + -0xa0,0x80);
      param_1 = *(HWND *)(puVar10 + 8);
      SfMEditPrintF(param_1,"%s%.08Xh",puVar10 + -0xa0,*(undefined4 *)(puVar10 + -0xa8));
      FUN_0103b930("Cache/TLB (EBX)",puVar10 + -0xa0,0x80);
      SfMEditPrintF(param_1,"%s%.08Xh",puVar10 + -0xa0,*(undefined4 *)(puVar10 + -0xa4));
      FUN_0103b930("Cache/TLB (ECX)",puVar10 + -0xa0,0x80);
      SfMEditPrintF(param_1,"%s%.08Xh",puVar10 + -0xa0,*(undefined4 *)(puVar10 + -4));
      FUN_0103b930("Cache/TLB (EDX)",puVar10 + -0xa0,0x80);
      SfMEditPrintF(param_1,"%s%.08Xh",puVar10 + -0xa0,*(undefined4 *)(puVar10 + -0x1c));
    }
  }
  iVar1 = *(int *)(puVar10 + 0xc);
  if (iVar1 != 0) {
    SfMEditPrintF(param_1,&DAT_011dc964);
    SendMessageA(param_1,0xb1,0xffffffff,-1);
    SendMessageA(param_1,0xc2,0,iVar1);
  }
  return;
}


