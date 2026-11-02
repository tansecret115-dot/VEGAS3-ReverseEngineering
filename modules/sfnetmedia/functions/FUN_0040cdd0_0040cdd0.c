/* Module: sfnetmedia.dll
   Function: FUN_0040cdd0
   Address: 0040cdd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040cdd0(int param_1)

{
  HWND hWnd;
  HWND hWndTo;
  undefined4 *puVar1;
  tagRECT *lpPoints;
  UINT cPoints;
  uint uVar2;
  tagRECT local_30;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  LPSTR local_14;
  undefined4 local_c;
  undefined4 local_4;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),600);
  if ((hWnd != (HWND)0x0) && (*(int *)(param_1 + 0xa0) != 0)) {
    GetWindowRect(hWnd,&local_30);
    lpPoints = &local_30;
    cPoints = 2;
    hWndTo = GetParent(hWnd);
    MapWindowPoints((HWND)0x0,hWndTo,(LPPOINT)lpPoints,cPoints);
    uVar2 = 0x72;
    local_20 = 0x2f;
    local_1c = 0;
    puVar1 = (undefined4 *)FUN_004012d0();
    local_14 = FUN_00418380(puVar1,uVar2);
    local_4 = 0;
    local_c = 0;
    local_18 = (local_30.right - local_30.left) + -0x86;
    SendMessageA(hWnd,0x101a,0,(LPARAM)&local_20);
    uVar2 = 0x71;
    local_1c = 2;
    puVar1 = (undefined4 *)FUN_004012d0();
    local_14 = FUN_00418380(puVar1,uVar2);
    local_4 = 2;
    local_c = 2;
    local_18 = 0x5a;
    SendMessageA(hWnd,0x101a,2,(LPARAM)&local_20);
    uVar2 = 0x73;
    local_1c = 2;
    puVar1 = (undefined4 *)FUN_004012d0();
    local_14 = FUN_00418380(puVar1,uVar2);
    local_4 = 1;
    local_c = 1;
    local_18 = 0x28;
    SendMessageA(hWnd,0x101a,1,(LPARAM)&local_20);
    SendMessageA(hWnd,0x101e,2,0xfffe);
  }
  return;
}


