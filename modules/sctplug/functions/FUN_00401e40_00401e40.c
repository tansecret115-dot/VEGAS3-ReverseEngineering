/* Module: sctplug.dll
   Function: FUN_00401e40
   Address: 00401e40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00401e40(int param_1)

{
  char cVar1;
  int iVar2;
  HWND pHVar3;
  WPARAM WVar4;
  LRESULT LVar5;
  HWND pHVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  CHAR *pCVar10;
  CHAR *pCVar11;
  char *pcVar12;
  CHAR local_400 [1024];
  
  pHVar6 = *(HWND *)(param_1 + 0x10);
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x30) + 0x424) + 0x3e);
  GetDlgItemTextA(pHVar6,0x4fb,local_400,0x400);
  iVar7 = 10;
  pCVar11 = (CHAR *)(iVar2 + 4);
  while (iVar7 != 0) {
    iVar7 = iVar7 + -1;
    builtin_memcpy(pCVar11,"    ",4);
    pCVar11 = pCVar11 + 4;
  }
  pCVar11[0] = ' ';
  pCVar11[1] = ' ';
  pCVar11[2] = ' ';
  uVar8 = 0xffffffff;
  pcVar12 = local_400;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  if (~uVar8 - 1 < 0x2c) {
    uVar8 = 0xffffffff;
    pcVar12 = local_400;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8 - 1;
  }
  else {
    uVar8 = 0x2b;
  }
  pCVar11 = local_400;
  pCVar10 = (CHAR *)(iVar2 + 4);
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pCVar10 = *(undefined4 *)pCVar11;
    pCVar11 = pCVar11 + 4;
    pCVar10 = pCVar10 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pCVar10 = *pCVar11;
    pCVar11 = pCVar11 + 1;
    pCVar10 = pCVar10 + 1;
  }
  GetDlgItemTextA(pHVar6,0x4f5,local_400,0x400);
  iVar7 = 8;
  pCVar11 = (CHAR *)(iVar2 + 0x10b);
  while (iVar7 != 0) {
    iVar7 = iVar7 + -1;
    builtin_memcpy(pCVar11,"    ",4);
    pCVar11 = pCVar11 + 4;
  }
  pCVar11[0] = ' ';
  pCVar11[1] = ' ';
  uVar8 = 0xffffffff;
  pcVar12 = local_400;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  if (~uVar8 - 1 < 0x23) {
    uVar8 = 0xffffffff;
    pcVar12 = local_400;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8 - 1;
  }
  else {
    uVar8 = 0x22;
  }
  pCVar11 = local_400;
  pCVar10 = (CHAR *)(iVar2 + 0x10b);
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pCVar10 = *(undefined4 *)pCVar11;
    pCVar11 = pCVar11 + 4;
    pCVar10 = pCVar10 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pCVar10 = *pCVar11;
    pCVar11 = pCVar11 + 1;
    pCVar10 = pCVar10 + 1;
  }
  GetDlgItemTextA(pHVar6,0x4f6,local_400,0x400);
  iVar7 = 8;
  pCVar11 = (CHAR *)(iVar2 + 0x12d);
  while (iVar7 != 0) {
    iVar7 = iVar7 + -1;
    builtin_memcpy(pCVar11,"    ",4);
    pCVar11 = pCVar11 + 4;
  }
  pCVar11[0] = ' ';
  pCVar11[1] = ' ';
  uVar8 = 0xffffffff;
  pcVar12 = local_400;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  if (~uVar8 - 1 < 0x23) {
    uVar8 = 0xffffffff;
    pcVar12 = local_400;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8 - 1;
  }
  else {
    uVar8 = 0x22;
  }
  pCVar11 = local_400;
  pCVar10 = (CHAR *)(iVar2 + 0x12d);
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pCVar10 = *(undefined4 *)pCVar11;
    pCVar11 = pCVar11 + 4;
    pCVar10 = pCVar10 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pCVar10 = *pCVar11;
    pCVar11 = pCVar11 + 1;
    pCVar10 = pCVar10 + 1;
  }
  GetDlgItemTextA(pHVar6,0x4fc,local_400,0x400);
  uVar8 = 0xffffffff;
  builtin_memcpy((CHAR *)(iVar2 + 0x2f),"    ",4);
  pcVar12 = local_400;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  if (~uVar8 - 1 < 5) {
    uVar8 = 0xffffffff;
    pcVar12 = local_400;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8 - 1;
  }
  else {
    uVar8 = 4;
  }
  pCVar11 = local_400;
  pCVar10 = (CHAR *)(iVar2 + 0x2f);
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pCVar10 = *(undefined4 *)pCVar11;
    pCVar11 = pCVar11 + 4;
    pCVar10 = pCVar10 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pCVar10 = *pCVar11;
    pCVar11 = pCVar11 + 1;
    pCVar10 = pCVar10 + 1;
  }
  GetDlgItemTextA(pHVar6,0x4fa,local_400,0x400);
  builtin_memcpy((CHAR *)(iVar2 + 0x158),"    ",4);
  *(undefined2 *)(iVar2 + 0x15c) = 0x2020;
  uVar8 = 0xffffffff;
  pcVar12 = local_400;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  if (~uVar8 - 1 < 7) {
    uVar8 = 0xffffffff;
    pcVar12 = local_400;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8 - 1;
  }
  else {
    uVar8 = 6;
  }
  pCVar11 = local_400;
  pCVar10 = (CHAR *)(iVar2 + 0x158);
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pCVar10 = *(undefined4 *)pCVar11;
    pCVar11 = pCVar11 + 4;
    pCVar10 = pCVar10 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pCVar10 = *pCVar11;
    pCVar11 = pCVar11 + 1;
    pCVar10 = pCVar10 + 1;
  }
  GetDlgItemTextA(pHVar6,0x4f7,local_400,0x400);
  pCVar11 = (CHAR *)(iVar2 + 0x14f);
  uVar8 = 0xffffffff;
  pCVar11[0] = ' ';
  pCVar11[1] = ' ';
  pcVar12 = local_400;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  if (~uVar8 - 1 < 3) {
    uVar8 = 0xffffffff;
    pcVar12 = local_400;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8 - 1;
  }
  else {
    uVar8 = 2;
  }
  pCVar10 = local_400;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pCVar11 = *(undefined4 *)pCVar10;
    pCVar10 = pCVar10 + 4;
    pCVar11 = pCVar11 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pCVar11 = *pCVar10;
    pCVar10 = pCVar10 + 1;
    pCVar11 = pCVar11 + 1;
  }
  GetDlgItemTextA(pHVar6,0x50c,local_400,0x400);
  builtin_memcpy((CHAR *)(iVar2 + 0x41),"    ",4);
  *(undefined2 *)(iVar2 + 0x45) = 0x2020;
  uVar8 = 0xffffffff;
  pcVar12 = local_400;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  if (~uVar8 - 1 < 7) {
    uVar8 = 0xffffffff;
    pcVar12 = local_400;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8 - 1;
  }
  else {
    uVar8 = 6;
  }
  pCVar11 = local_400;
  pCVar10 = (CHAR *)(iVar2 + 0x41);
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pCVar10 = *(undefined4 *)pCVar11;
    pCVar11 = pCVar11 + 4;
    pCVar10 = pCVar10 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pCVar10 = *pCVar11;
    pCVar11 = pCVar11 + 1;
    pCVar10 = pCVar10 + 1;
  }
  GetDlgItemTextA(pHVar6,0x50e,local_400,0x400);
  builtin_memcpy((CHAR *)(iVar2 + 0x47),"    ",4);
  *(undefined2 *)(iVar2 + 0x4b) = 0x2020;
  uVar8 = 0xffffffff;
  pcVar12 = local_400;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  if (~uVar8 - 1 < 7) {
    uVar8 = 0xffffffff;
    pcVar12 = local_400;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8 - 1;
  }
  else {
    uVar8 = 6;
  }
  pCVar11 = local_400;
  pCVar10 = (CHAR *)(iVar2 + 0x47);
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pCVar10 = *(undefined4 *)pCVar11;
    pCVar11 = pCVar11 + 4;
    pCVar10 = pCVar10 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pCVar10 = *pCVar11;
    pCVar11 = pCVar11 + 1;
    pCVar10 = pCVar10 + 1;
  }
  pHVar3 = GetDlgItem(pHVar6,0x50d);
  WVar4 = SendMessageA(pHVar3,0x147,0,0);
  if (WVar4 == 0xffffffff) {
    *(undefined1 *)(iVar2 + 0x4d) = 0;
  }
  else {
    LVar5 = SendMessageA(pHVar3,0x150,WVar4,0);
    *(char *)(iVar2 + 0x4d) = (char)LVar5;
  }
  pHVar3 = GetDlgItem(pHVar6,0x50f);
  WVar4 = SendMessageA(pHVar3,0x147,0,0);
  if (WVar4 == 0xffffffff) {
    *(undefined1 *)(iVar2 + 0x4e) = 0;
  }
  else {
    LVar5 = SendMessageA(pHVar3,0x150,WVar4,0);
    *(char *)(iVar2 + 0x4e) = (char)LVar5;
  }
  pHVar6 = GetDlgItem(pHVar6,0x4f8);
  WVar4 = SendMessageA(pHVar6,0x147,0,0);
  if (WVar4 == 0xffffffff) {
    *(undefined1 *)(iVar2 + 0x151) = 0;
  }
  else {
    LVar5 = SendMessageA(pHVar6,0x150,WVar4,0);
    *(char *)(iVar2 + 0x151) = (char)LVar5;
  }
  if (*(char *)(iVar2 + 0x151) == '\0') {
    GetWindowTextA(pHVar6,local_400,2);
    *(CHAR *)(iVar2 + 0x151) = local_400[0];
  }
  return;
}


