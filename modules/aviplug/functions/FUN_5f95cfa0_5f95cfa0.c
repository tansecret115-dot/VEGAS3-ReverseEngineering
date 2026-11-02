/* Module: aviplug.dll
   Function: FUN_5f95cfa0
   Address: 5f95cfa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f95cfa0(void *this,int param_1)

{
  bool bVar1;
  HWND hWnd;
  WPARAM wParam;
  LRESULT LVar2;
  BOOL BVar3;
  
  FUN_5f95b3d0(this,param_1,(int *)&DAT_5f9f2ca8);
  bVar1 = false;
  hWnd = GetDlgItem(*(HWND *)((int)this + 0x10),0x3e9);
  wParam = SendMessageA(hWnd,0x147,0,0);
  if (wParam != 0xffffffff) {
    LVar2 = SendMessageA(hWnd,0x150,wParam,0);
    if (((LVar2 != 0) && (*(int *)(LVar2 + 0x80) != 1)) && (*(int *)(LVar2 + 0x80) != 3)) {
      bVar1 = true;
    }
  }
  if ((param_1 == 0) || (bVar1)) {
    BVar3 = 0;
  }
  else {
    BVar3 = 1;
  }
  FUN_5f95b3d0(this,BVar3,(int *)&DAT_5f9f2cc0);
  if ((param_1 != 0) && (bVar1)) {
    FUN_5f95b3d0(this,1,(int *)&DAT_5f9f2cb4);
    return;
  }
  FUN_5f95b3d0(this,0,(int *)&DAT_5f9f2cb4);
  return;
}


