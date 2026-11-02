/* Module: sfcdi.dll
   Function: FUN_5bf1bda0
   Address: 5bf1bda0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf1bda0(HWND param_1,int param_2)

{
  HDC hdc;
  LRESULT LVar1;
  uchar *_Source;
  int iVar2;
  int iVar3;
  char *pcVar4;
  WPARAM wParam;
  CHAR *pCVar5;
  uint *puVar6;
  tagSIZE *lpsz;
  uint local_330 [3];
  LPSTR local_324;
  uint local_310;
  tagSIZE local_30c;
  undefined4 local_304;
  WPARAM local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  uchar *local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  WPARAM local_2e4;
  tagRECT local_2dc;
  uchar local_2cc [20];
  CHAR local_2b8 [2];
  CHAR aCStack_2b6 [22];
  undefined1 local_2a0 [8];
  undefined4 local_298;
  uchar *local_28c;
  undefined1 local_278 [8];
  undefined4 local_270;
  uchar *local_264;
  uchar local_250 [80];
  uchar local_200 [512];
  
  pcVar4 = "XXXXXXXX XXXXXXXX XXXX";
  pCVar5 = local_2b8;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pCVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pCVar5 = pCVar5 + 4;
  }
  *(undefined2 *)pCVar5 = *(undefined2 *)pcVar4;
  pCVar5[2] = pcVar4[2];
  wParam = 0;
  GetClientRect(param_1,&local_2dc);
  hdc = GetDC(param_1);
  lpsz = &local_30c;
  iVar2 = lstrlenA(local_2b8);
  GetTextExtentPointA(hdc,local_2b8,iVar2,lpsz);
  iVar2 = local_30c.cx + 8;
  ReleaseDC(param_1,hdc);
  puVar6 = local_330;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_330[0] = 3;
  LVar1 = SendMessageA(param_1,0x1019,0,(LPARAM)local_330);
  if ((LVar1 == 0) || (LVar1 = SendMessageA(param_1,0x1019,1,(LPARAM)local_330), LVar1 == 0)) {
    puVar6 = local_330;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    local_330[0] = 0xf;
    local_330[1] = 0;
    local_330[2] = iVar2;
    local_324 = FUN_5bf283e0(DAT_5bf65fc4,0x924);
    SendMessageA(param_1,0x101b,0,(LPARAM)local_330);
    local_330[2] = (uint)(local_2dc.right - iVar2) >> 1;
    local_330[1] = 0;
    local_324 = FUN_5bf283e0(DAT_5bf65fc4,0x925);
    SendMessageA(param_1,0x101b,1,(LPARAM)local_330);
    local_330[2] = (uint)(local_2dc.right - iVar2) >> 1;
    local_330[1] = 0;
    local_324 = FUN_5bf283e0(DAT_5bf65fc4,0x926);
    SendMessageA(param_1,0x101b,2,(LPARAM)local_330);
  }
  SendMessageA(param_1,0x1009,0,0);
  local_310 = **(uint **)(param_2 + 0x3c);
  if (local_310 != 0) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)(param_2 + 0x3c) + 8) + wParam * 4);
      if ((*(uint *)(iVar2 + 0x1a0) & 0x6000) == 0) {
        _Source = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0x928);
      }
      else {
        _Source = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0x927);
      }
      _mbscpy(local_2cc,_Source);
      if (*(int *)(iVar2 + 0x1ac) < 1) {
        FUN_5bf25750(local_200,"%s");
      }
      else {
        FUN_5bf25750(local_200,(BYTE *)"%c: %s");
      }
      FUN_5bf283e0(DAT_5bf65fc4,0x927);
      FUN_5bf25750(local_250,"%s");
      local_2f0 = local_200;
      local_304 = 0xd;
      local_2fc = 0;
      local_2f8 = 0;
      local_2f4 = 0;
      local_2ec = 0x104;
      local_2e8 = 0;
      local_300 = wParam;
      local_2e4 = wParam;
      SendMessageA(param_1,0x1007,0,(LPARAM)&local_304);
      local_264 = local_2cc;
      local_270 = 1;
      SendMessageA(param_1,0x102e,wParam,(LPARAM)local_278);
      local_28c = local_250;
      local_298 = 2;
      SendMessageA(param_1,0x102e,wParam,(LPARAM)local_2a0);
      wParam = wParam + 1;
    } while (wParam < local_310);
  }
  return;
}


