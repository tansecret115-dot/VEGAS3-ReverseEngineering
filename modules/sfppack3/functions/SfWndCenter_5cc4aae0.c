/* Module: sfppack3.dll
   Function: SfWndCenter
   Address: 5cc4aae0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfWndCenter(struct HWND__ *,struct HWND__ *,struct tagPOINT *,unsigned int) */

int SfWndCenter(HWND__ *param_1,HWND__ *param_2,tagPOINT *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  HWND hWnd;
  BOOL BVar3;
  uint uVar4;
  int X;
  int Y;
  tagRECT local_20;
  tagRECT local_10;
  
                    /* 0x1aae0  2  ?SfWndCenter@@YGHPAUHWND__@@0PAUtagPOINT@@I@Z */
  iVar1 = GetSystemMetrics(0);
  iVar2 = GetSystemMetrics(1);
  hWnd = GetParent(param_1);
  BVar3 = IsIconic(hWnd);
  if (BVar3 == 0) {
    param_2 = hWnd;
    if (hWnd != (HWND)0x0) {
      GetClientRect(hWnd,&local_20);
      MapWindowPoints(hWnd,(HWND)0x0,(LPPOINT)&local_20,2);
      goto LAB_5cc4ab5b;
    }
  }
  else {
    param_2 = (HWND__ *)0x0;
  }
  local_20.left = 0;
  local_20.top = local_20.left;
  local_20.right = iVar1;
  local_20.bottom = iVar2;
LAB_5cc4ab5b:
  GetWindowRect(param_1,&local_10);
  X = ((local_20.right - (local_10.right - local_10.left)) + local_20.left) / 2;
  Y = ((local_20.bottom - local_20.top) / 3 - (local_10.bottom - local_10.top) / 3) + local_20.top;
  if (param_2 == hWnd) {
    uVar4 = GetWindowLongA(param_1,-0x10);
    if ((uVar4 & 0x40000000) != 0) {
      X = X - local_20.left;
      Y = Y - local_20.top;
    }
  }
  iVar1 = iVar1 - (local_10.right - local_10.left);
  if (X < 0) {
    X = 0;
  }
  else if (iVar1 < X) {
    X = iVar1;
  }
  iVar2 = iVar2 - (local_10.bottom - local_10.top);
  if (Y < 0) {
    Y = 0;
  }
  else if (iVar2 < Y) {
    Y = iVar2;
  }
  BVar3 = SetWindowPos(param_1,(HWND)0x0,X,Y,0,0,0x15);
  return BVar3;
}


