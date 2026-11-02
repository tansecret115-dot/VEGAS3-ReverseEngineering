/* Module: encn3260.dll
   Function: FUN_664b3c40
   Address: 664b3c40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664b3c40(int param_1)

{
  HWND hWnd;
  int *piVar1;
  undefined4 *puVar2;
  HDC hdc;
  HGDIOBJ pvVar3;
  int left;
  int top;
  tagRECT local_24;
  int local_14;
  int local_10;
  HGDIOBJ local_c;
  HGDIOBJ local_8;
  
  piVar1 = (int *)(*(int *)(param_1 + 0xc) + 8);
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x1c))(piVar1);
  if ((puVar2 != (undefined4 *)0x0) && (hWnd = (HWND)*puVar2, hWnd != (HWND)0x0)) {
    hdc = GetDC(hWnd);
    GetClientRect(hWnd,&local_24);
    (**(code **)(**(int **)(param_1 + 0xc) + 0x34))(*(int **)(param_1 + 0xc),&local_14);
    pvVar3 = GetStockObject(4);
    local_8 = SelectObject(hdc,pvVar3);
    pvVar3 = GetStockObject(8);
    local_c = SelectObject(hdc,pvVar3);
    if (local_14 < local_24.right) {
      Rectangle(hdc,0,0,((local_24.right - local_14) + 1) / 2 + 1,local_24.bottom + 1);
      top = 0;
      left = local_24.right - ((local_24.right - local_14) + 1) / 2;
    }
    else {
      Rectangle(hdc,0,0,local_24.right + 1,((local_24.bottom - local_10) + 1) / 2 + 1);
      top = local_24.bottom - ((local_24.bottom - local_10) + 1) / 2;
      left = 0;
    }
    Rectangle(hdc,left,top,local_24.right + 1,local_24.bottom + 1);
    SelectObject(hdc,local_8);
    SelectObject(hdc,local_c);
    ReleaseDC(hWnd,hdc);
  }
  return;
}


