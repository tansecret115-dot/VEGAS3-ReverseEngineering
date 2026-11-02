/* Module: vegas30.exe
   Function: FUN_004fa690
   Address: 004fa690
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fa690(undefined4 *param_1)

{
  LPRECT lpRect;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  HWND pHVar4;
  BOOL BVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  tagSCROLLINFO *ptVar9;
  bool bVar10;
  int local_40;
  SCROLLINFO local_38;
  tagSCROLLINFO local_1c;
  
  puVar2 = param_1;
  lpRect = (LPRECT)(param_1 + 4);
  GetClientRect((HWND)*param_1,lpRect);
  local_38.cbSize = lpRect->left;
  param_1[8] = param_1[6] - lpRect->left;
  local_38.fMask = param_1[5];
  iVar8 = param_1[6];
  param_1[9] = param_1[7] - param_1[5];
  iVar7 = param_1[7];
  iVar3 = GetSystemMetrics(2);
  iVar3 = iVar8 - iVar3;
  if ((HWND)param_1[10] == (HWND)0x0) {
    pHVar4 = CreateWindowExA(4,"Scrollbar",(LPCSTR)0x0,0x50000001,iVar3,local_38.fMask,iVar8 - iVar3
                             ,iVar7 - local_38.fMask,(HWND)*param_1,(HMENU)0x0,DAT_006471fc,
                             (LPVOID)0x0);
    param_1[10] = pHVar4;
  }
  else {
    SetWindowPos((HWND)param_1[10],(HWND)0x0,iVar3,local_38.fMask,iVar8 - iVar3,
                 iVar7 - local_38.fMask,0x214);
  }
  BVar5 = IsWindowVisible((HWND)param_1[10]);
  if (BVar5 != 0) {
    param_1[6] = iVar3;
    param_1[8] = iVar3 - param_1[4];
  }
  puVar6 = (undefined4 *)_SfGetUIFontSize_4(100);
  param_1[0x56] = *puVar6;
  param_1[0x57] = puVar6[1];
  if ((int *)param_1[0x5f] == (int *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)param_1[0x5f];
    if (iVar8 != 0) {
      _SfGetUIFont_4(100);
      param_1[0x5a] = param_1[0x58] + 8;
      param_1[0x5b] = param_1[0x59] + 0x12 + param_1[0x57] * 2;
    }
  }
  param_1 = (undefined4 *)iVar8;
  ptVar9 = &local_1c;
  for (iVar8 = 7; iVar8 != 0; iVar8 = iVar8 + -1) {
    ptVar9->cbSize = 0;
    ptVar9 = (tagSCROLLINFO *)&ptVar9->fMask;
  }
  local_1c.cbSize = 0x1c;
  local_1c.fMask = 0x17;
  if ((HWND)puVar2[10] == (HWND)0x0) {
    GetScrollInfo((HWND)*puVar2,1,&local_1c);
    bVar10 = local_1c.nMax <= local_1c.nMin;
  }
  else {
    GetScrollInfo((HWND)puVar2[10],2,&local_1c);
    BVar5 = IsWindowVisible((HWND)puVar2[10]);
    bVar10 = BVar5 == 0;
  }
  if (bVar10) {
    iVar8 = 0;
  }
  else {
    iVar8 = GetSystemMetrics(2);
  }
  iVar7 = (puVar2[8] + iVar8) / (int)puVar2[0x5a];
  iVar8 = 1;
  if (0 < iVar7) {
    iVar8 = iVar7;
  }
  if ((int)puVar2[9] / (int)puVar2[0x5b] < (iVar8 + -1 + (int)param_1) / iVar8) {
    if (bVar10) {
      iVar8 = GetSystemMetrics(2);
    }
    else {
      iVar8 = 0;
    }
    iVar7 = (puVar2[8] - iVar8) / (int)puVar2[0x5a];
    iVar8 = 1;
    if (0 < iVar7) {
      iVar8 = iVar7;
    }
    local_38.nPage = puVar2[9];
    local_38.cbSize = 0x1c;
    local_38.fMask = 3;
    local_38.nMin = 0;
    local_38.nMax =
         ((iVar8 + -1 + (int)param_1) / iVar8) * puVar2[0x5b] + -1 +
         (int)local_38.nPage % (int)puVar2[0x5b];
    pHVar4 = (HWND)puVar2[10];
    if (pHVar4 == (HWND)0x0) {
      pHVar4 = (HWND)*puVar2;
      iVar8 = 1;
    }
    else {
      iVar8 = 2;
    }
    SetScrollInfo(pHVar4,iVar8,&local_38,1);
    if (bVar10) {
      if ((HWND)puVar2[10] == (HWND)0x0) {
        return;
      }
      ShowWindow((HWND)puVar2[10],8);
      iVar7 = GetSystemMetrics(2);
      iVar8 = puVar2[6];
      puVar2[6] = iVar8 - iVar7;
      puVar2[8] = (iVar8 - iVar7) - puVar2[4];
    }
  }
  else if (!bVar10) {
    local_38.cbSize = 0x1c;
    local_38.fMask = 3;
    local_38.nMin = 0;
    local_38.nMax = 0;
    local_38.nPage = 0;
    if ((HWND)puVar2[10] == (HWND)0x0) {
      SetScrollInfo((HWND)*puVar2,1,&local_38,1);
      return;
    }
    SetScrollInfo((HWND)puVar2[10],2,&local_38,1);
    ShowWindow((HWND)puVar2[10],0);
    iVar7 = GetSystemMetrics(2);
    iVar8 = puVar2[6];
    puVar2[6] = iVar8 + iVar7;
    puVar2[8] = (iVar8 + iVar7) - puVar2[4];
  }
  iVar8 = 0;
  puVar2[0x5c] = 0;
  local_1c.nPos = -local_1c.nPos;
  puVar2[0x5d] = 1;
  local_40 = 0;
  if (0 < (int)param_1) {
    do {
      iVar7 = puVar2[0x5a];
      iVar3 = *(int *)(*(int *)(puVar2[0x5f] + 8) + local_40 * 4);
      iVar1 = puVar2[0x5b];
      *(int *)(iVar3 + 0x108) = iVar8;
      *(int *)(iVar3 + 0x10c) = local_1c.nPos;
      *(int *)(iVar3 + 0x110) = iVar7 + iVar8;
      *(int *)(iVar3 + 0x114) = iVar1 + local_1c.nPos;
      iVar7 = puVar2[0x58];
      *(int *)(iVar3 + 0x13c) = puVar2[0x59] + 4 + local_1c.nPos;
      *(int *)(iVar3 + 0x130) = iVar8 + 4;
      *(int *)(iVar3 + 0x134) = local_1c.nPos + 4;
      *(int *)(iVar3 + 0x138) = iVar7 + 4 + iVar8;
      iVar7 = puVar2[0x59];
      iVar1 = puVar2[0x58];
      *(int *)(iVar3 + 0x144) = local_1c.nPos + 4;
      *(int *)(iVar3 + 0x140) = iVar1 + 8 + iVar8;
      *(int *)(iVar3 + 0x148) = iVar8 + 8 + iVar1 * 2;
      *(int *)(iVar3 + 0x14c) = iVar7 + 4 + local_1c.nPos;
      *(int *)(iVar3 + 0x124) = *(int *)(iVar3 + 0x114) - (puVar2[0x57] * 2 + 4);
      *(int *)(iVar3 + 0x128) = *(int *)(iVar3 + 0x110) + -4;
      *(int *)(iVar3 + 0x120) = *(int *)(iVar3 + 0x108) + 4;
      *(int *)(iVar3 + 300) = *(int *)(iVar3 + 0x114) + -4;
      if (puVar2[0x5d] == 1) {
        puVar2[0x5c] = puVar2[0x5c] + 1;
      }
      iVar8 = iVar8 + puVar2[0x5a];
      if ((int)puVar2[6] < puVar2[0x5a] + iVar8) {
        local_1c.nPos = local_1c.nPos + puVar2[0x5b];
        iVar8 = 0;
        if (local_40 + 1 < (int)param_1) {
          puVar2[0x5d] = puVar2[0x5d] + 1;
        }
      }
      local_40 = local_40 + 1;
    } while (local_40 < (int)param_1);
  }
  if (param_1 != (undefined4 *)0x0) {
    iVar8 = puVar2[0x5d];
    if (iVar8 < 1) {
      iVar8 = 1;
    }
    puVar2[0x5d] = iVar8;
  }
  return;
}


