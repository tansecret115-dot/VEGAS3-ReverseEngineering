/* Module: encn3260.dll
   Function: FUN_664a66f0
   Address: 664a66f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x664a676e) */

int FUN_664a66f0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  HWND hWnd;
  int *this;
  undefined4 *puVar2;
  int iVar3;
  tagRECT local_1c;
  int local_c;
  int *local_8;
  
  this = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1[0x1b] + 0xb4));
  piVar1 = (int *)param_1[0x24];
  param_1 = (int *)0x0;
  local_c = 0;
  local_8 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    param_1 = (int *)(**(code **)(*piVar1 + 0x14))(piVar1,this[0x33],this[0x34],&param_2);
  }
  if (param_1 == (int *)0x0) {
    this[0x33] = param_2;
    this[0x34] = param_3;
    FUN_664aaba0(this);
    local_c = this[0x14];
    local_8 = this + 0x13;
    while (local_c != 0) {
      puVar2 = (undefined4 *)FUN_664bab80(local_c);
      (**(code **)(*(int *)*puVar2 + 0xc))((int *)*puVar2,this + 0x33);
      FUN_664bab40(&local_c);
    }
    hWnd = (HWND)this[0x51];
    if (hWnd != (HWND)0x0) {
      GetWindowRect(hWnd,&local_1c);
      FUN_664ab270(this,hWnd,param_2,param_3,local_1c.right - local_1c.left,
                   local_1c.bottom - local_1c.top,this[0x38]);
    }
  }
  if ((int *)this[0x1b] == this) {
    FUN_664aa7e0((int *)this[0x1b]);
  }
  if ((void *)this[0x1b] != (void *)0x0) {
    FUN_664aa6d0((void *)this[0x1b],1,0);
  }
  FUN_664b2840((void *)this[0x1d],0,0);
  iVar3 = FUN_664a7460((int)this);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x204) = 0;
    *(undefined4 *)(iVar3 + 0x208) = 0;
    *(undefined4 *)(iVar3 + 0x20c) = 0;
    *(undefined4 *)(iVar3 + 0x210) = 0;
    *(undefined4 *)(iVar3 + 0x214) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(this[0x1b] + 0xb4));
  return (int)param_1;
}


