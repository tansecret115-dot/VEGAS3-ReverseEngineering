/* Module: vegas30.exe
   Function: FUN_004fb160
   Address: 004fb160
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL FUN_004fb160(undefined4 *param_1,int param_2)

{
  int iVar1;
  BOOL BVar2;
  HWND pHVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  tagSCROLLINFO local_1c;
  
  if (param_1[0x5d] == 0) {
    return 0;
  }
  if (param_1[0x5a] == 0) {
    return 0;
  }
  local_1c.cbSize = 0x1c;
  local_1c.fMask = 0x17;
  local_1c.nMin = 0;
  iVar4 = (param_2 / (int)param_1[0x5c]) * param_1[0x5b];
  local_1c.nMax = 0;
  local_1c.nPage = 0;
  local_1c.nPos = 0;
  local_1c.nTrackPos = 0;
  pHVar3 = (HWND)param_1[10];
  if (pHVar3 == (HWND)0x0) {
    pHVar3 = (HWND)*param_1;
    iVar6 = 1;
  }
  else {
    iVar6 = 2;
  }
  BVar2 = GetScrollInfo(pHVar3,iVar6,&local_1c);
  bVar5 = iVar4 - local_1c.nPos == 0;
  if (!bVar5 && local_1c.nPos <= iVar4) {
    iVar6 = param_1[0x5b];
    iVar1 = param_1[9];
    if (iVar6 + iVar4 <= iVar1 + local_1c.nPos) {
      return iVar6 + iVar4;
    }
    BVar2 = iVar1 / iVar6;
    iVar4 = iVar4 + (iVar1 % iVar6 - iVar1) + iVar6;
    bVar5 = iVar4 == local_1c.nPos;
    if (iVar4 < local_1c.nPos) {
      return BVar2;
    }
  }
  if (!bVar5) {
    pHVar3 = (HWND)param_1[10];
    local_1c.fMask = 4;
    if (pHVar3 == (HWND)0x0) {
      pHVar3 = (HWND)*param_1;
      iVar6 = 1;
    }
    else {
      iVar6 = 2;
    }
    local_1c.nPos = iVar4;
    SetScrollInfo(pHVar3,iVar6,&local_1c,1);
    FUN_004fa690(param_1);
    BVar2 = InvalidateRect((HWND)*param_1,(RECT *)0x0,0);
  }
  return BVar2;
}


