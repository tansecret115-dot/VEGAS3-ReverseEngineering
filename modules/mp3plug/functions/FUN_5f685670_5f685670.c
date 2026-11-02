/* Module: mp3plug.dll
   Function: FUN_5f685670
   Address: 5f685670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f685670(HWND param_1)

{
  HWND pHVar1;
  int iVar2;
  HWND pHVar3;
  LONG LVar4;
  LONG LVar5;
  int cy;
  tagRECT *ptVar6;
  int iVar7;
  BOOL bEnable;
  UINT UVar8;
  tagPOINT local_38;
  tagRECT local_30;
  tagRECT local_20;
  tagRECT local_10;
  
  GetWindowRect(param_1,&local_20);
  ptVar6 = &local_10;
  pHVar1 = GetDlgItem(param_1,0x424);
  GetWindowRect(pHVar1,ptVar6);
  ptVar6 = &local_30;
  pHVar1 = GetDlgItem(param_1,1);
  GetWindowRect(pHVar1,ptVar6);
  iVar2 = (local_10.bottom - local_10.top) + (local_30.top - local_30.bottom);
  SetWindowPos(param_1,(HWND)0x0,0,0,local_20.right - local_20.left,
               (local_20.bottom - local_20.top) - iVar2,6);
  if ((DAT_5f74d33c == 0) && (DAT_5f74d340 == -0x127)) {
    iVar7 = 0;
    pHVar1 = GetDlgItem(param_1,0x424);
    ShowWindow(pHVar1,iVar7);
  }
  iVar7 = 0;
  pHVar1 = GetDlgItem(param_1,0x425);
  ShowWindow(pHVar1,iVar7);
  bEnable = 0;
  pHVar1 = GetDlgItem(param_1,0x425);
  EnableWindow(pHVar1,bEnable);
  ptVar6 = &local_30;
  pHVar1 = GetDlgItem(param_1,1);
  GetWindowRect(pHVar1,ptVar6);
  local_38.y = local_30.top - iVar2;
  local_38.x = local_30.left;
  ScreenToClient(param_1,&local_38);
  UVar8 = 5;
  cy = 0;
  iVar7 = 0;
  pHVar3 = (HWND)0x0;
  LVar4 = local_38.x;
  LVar5 = local_38.y;
  pHVar1 = GetDlgItem(param_1,1);
  SetWindowPos(pHVar1,pHVar3,LVar4,LVar5,iVar7,cy,UVar8);
  ptVar6 = &local_30;
  pHVar1 = GetDlgItem(param_1,2);
  GetWindowRect(pHVar1,ptVar6);
  local_38.y = local_30.top - iVar2;
  local_38.x = local_30.left;
  ScreenToClient(param_1,&local_38);
  UVar8 = 5;
  iVar7 = 0;
  iVar2 = 0;
  pHVar3 = (HWND)0x0;
  LVar4 = local_38.x;
  LVar5 = local_38.y;
  pHVar1 = GetDlgItem(param_1,2);
  SetWindowPos(pHVar1,pHVar3,LVar4,LVar5,iVar2,iVar7,UVar8);
  return 1;
}


