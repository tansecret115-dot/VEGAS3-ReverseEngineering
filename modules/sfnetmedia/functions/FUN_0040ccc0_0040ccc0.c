/* Module: sfnetmedia.dll
   Function: FUN_0040ccc0
   Address: 0040ccc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0040ccc0(void *this,undefined4 param_1,undefined4 param_2,HWND param_3)

{
  undefined4 *puVar1;
  LPSTR lpString;
  int iVar2;
  HWND hWndTo;
  uint uVar3;
  tagRECT local_20;
  int local_10;
  int local_c;
  int local_4;
  
  uVar3 = (uint)(*(int *)((int)this + 0xa0) == 0);
  *(uint *)((int)this + 0xa0) = uVar3;
  if (uVar3 == 0) {
    uVar3 = 0x7e;
  }
  else {
    uVar3 = 0x7f;
  }
  puVar1 = (undefined4 *)FUN_004012d0();
  lpString = FUN_00418380(puVar1,uVar3);
  SetWindowTextA(param_3,lpString);
  uVar3 = 0x3f2;
  iVar2 = FUN_00401310();
  FUN_0041a200(iVar2,uVar3);
  FUN_0040cf00(this,&local_10);
  iVar2 = *(int *)((int)this + 0xa8);
  if (*(int *)((int)this + 0xa8) <= local_4 - local_c) {
    iVar2 = local_4 - local_c;
  }
  GetWindowRect(*(HWND *)((int)this + 4),&local_20);
  hWndTo = GetParent(param_3);
  MapWindowPoints(*(HWND *)((int)this + 4),hWndTo,(LPPOINT)&local_20,2);
  MoveWindow(*(HWND *)((int)this + 4),local_20.left,local_20.top,local_20.right - local_20.left,
             (local_20.bottom - local_20.top) + 1,0);
  if (*(int *)((int)this + 0xa0) == 0) {
    iVar2 = (local_20.bottom - local_20.top) - iVar2;
  }
  else {
    iVar2 = (local_20.bottom - local_20.top) + iVar2;
  }
  MoveWindow(*(HWND *)((int)this + 4),local_20.left,local_20.top,local_20.right - local_20.left,
             iVar2,1);
  return 0;
}


