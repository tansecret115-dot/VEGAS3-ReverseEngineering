/* Module: rmme3260.dll
   Function: FUN_66248fe0
   Address: 66248fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66248fe0(int param_1)

{
  HWND hWnd;
  int *piVar1;
  undefined4 *puVar2;
  tagRECT local_28;
  HGDIOBJ local_18;
  HGDIOBJ local_14;
  HGDIOBJ local_10;
  HGDIOBJ local_c;
  HDC local_8;
  
  FUN_6624b840((uint *)(param_1 + 0x48),(uint *)(param_1 + 0xd40),(uint *)&local_8);
  local_14 = GetStockObject(4);
  local_c = SelectObject(local_8,local_14);
  local_18 = GetStockObject(8);
  local_10 = SelectObject(local_8,local_18);
  Rectangle(local_8,0,0,*(int *)(param_1 + 0x3c),*(int *)(param_1 + 0x40));
  SelectObject(local_8,local_c);
  SelectObject(local_8,local_10);
  FUN_6624b8c0((uint *)(param_1 + 0x48),(uint *)(param_1 + 0xd40),(uint)local_8);
  piVar1 = (int *)(*(int *)(param_1 + 0xc) + 8);
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x1c))(piVar1);
  if ((puVar2 != (undefined4 *)0x0) && (hWnd = (HWND)*puVar2, hWnd != (HWND)0x0)) {
    local_8 = GetDC(hWnd);
    GetClientRect(hWnd,&local_28);
    local_c = SelectObject(local_8,local_14);
    local_10 = SelectObject(local_8,local_18);
    Rectangle(local_8,0,0,local_28.right + 1,local_28.bottom + 1);
    SelectObject(local_8,local_c);
    SelectObject(local_8,local_10);
    ReleaseDC(hWnd,local_8);
  }
  *(undefined4 *)(param_1 + 0x119c) = 1;
  return;
}


