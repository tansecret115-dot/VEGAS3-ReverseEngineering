/* Module: encn3260.dll
   Function: FUN_664a9870
   Address: 664a9870
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664a9870(void *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  HDC hdc;
  int iVar3;
  int *piVar4;
  void *this;
  tagRECT local_34;
  tagRECT local_24;
  int local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  local_14 = GetSystemMetrics(2);
  uVar1 = GetSystemMetrics(3);
  local_c = uVar1;
  if (*(int *)((int)param_1 + 0x68) == 0) {
    FUN_664a97e0(param_1,&local_24);
  }
  else {
    GetRgnBox(*(HRGN *)(*(int *)((int)param_1 + 0x68) + 0x138),&local_24);
  }
  local_8 = 0;
  puVar2 = (undefined4 *)(**(code **)(*(int *)((int)param_1 + 8) + 0x1c))((int)param_1 + 8);
  if ((HWND)*puVar2 != (HWND)0x0) {
    hdc = GetDC((HWND)*puVar2);
    iVar3 = GetClipBox(hdc,&local_34);
    if (iVar3 != 1) {
      local_8 = 1;
    }
    ReleaseDC((HWND)*puVar2,hdc);
    uVar1 = local_c;
  }
  this = param_1;
  if (*(void **)((int)param_1 + 0x68) != (void *)0x0) {
    this = *(void **)((int)param_1 + 0x68);
  }
  piVar4 = FUN_664a7f60(this,&local_10);
  local_24.left = local_24.left + *piVar4;
  local_24.right = local_24.right + *piVar4;
  local_24.top = local_24.top + piVar4[1];
  local_24.bottom = local_24.bottom + piVar4[1];
  if (*(HWND *)((int)param_1 + 0x1f0) != (HWND)0x0) {
    if ((local_8 == 0) || (*(int *)((int)param_1 + 0xe0) == 0)) {
      iVar3 = 0;
    }
    else {
      iVar3 = 5;
    }
    FUN_664ab3b0(param_1,*(HWND *)((int)param_1 + 0x1f0),iVar3);
    FUN_664ab270(param_1,*(HWND *)((int)param_1 + 0x1f0),local_24.left,local_24.bottom - uVar1,
                 local_24.right - local_24.left,uVar1,1);
  }
  if (*(HWND *)((int)param_1 + 500) != (HWND)0x0) {
    if ((local_8 == 0) || (*(int *)((int)param_1 + 0xe0) == 0)) {
      iVar3 = 0;
    }
    else {
      iVar3 = 5;
    }
    FUN_664ab3b0(param_1,*(HWND *)((int)param_1 + 500),iVar3);
    FUN_664ab270(param_1,*(HWND *)((int)param_1 + 500),local_24.right - local_14,local_24.top,
                 local_14,(local_24.bottom - (-(uint)(*(int *)((int)param_1 + 0x1f0) != 0) & uVar1))
                          - local_24.top,1);
  }
  return;
}


