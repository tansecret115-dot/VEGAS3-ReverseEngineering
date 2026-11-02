/* Module: vegas30.exe
   Function: FUN_00481470
   Address: 00481470
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00481470(HWND param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  HDC pHVar3;
  HWND hWnd;
  int iVar4;
  int iVar5;
  tagRECT local_50;
  tagPAINTSTRUCT local_40;
  
  if (param_2 != (int *)0x0) {
    pHVar3 = BeginPaint(param_1,&local_40);
    hWnd = GetDlgItem(param_1,0x63c);
    GetWindowRect(hWnd,&local_50);
    MapWindowPoints((HWND)0x0,param_1,(LPPOINT)&local_50,2);
    iVar4 = DrawDibOpen();
    if (iVar4 != 0) {
      iVar5 = param_2[8];
      if ((iVar5 == 0) && (*(ushort *)((int)param_2 + 0xe) < 9)) {
        iVar5 = 1 << ((byte)*(ushort *)((int)param_2 + 0xe) & 0x1f);
      }
      iVar1 = param_2[1];
      iVar2 = param_2[2];
      DrawDibDraw(iVar4,pHVar3,((local_50.right - iVar1) - local_50.left) / 2 + local_50.left,
                  ((local_50.bottom - iVar2) - local_50.top) / 2 + local_50.top,iVar1,iVar2,param_2,
                  *param_2 + iVar5 * 4 + (int)param_2,0,0,iVar1,iVar2,0x1000);
      DrawDibClose(iVar4);
    }
    EndPaint(param_1,&local_40);
  }
  return;
}


