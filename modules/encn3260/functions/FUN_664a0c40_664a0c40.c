/* Module: encn3260.dll
   Function: FUN_664a0c40
   Address: 664a0c40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664a0c40(void *this,undefined4 *param_1)

{
  HWND hWndTo;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  tagRECT *lpPoints;
  UINT cPoints;
  tagRECT local_14;
  
  GetWindowRect(*(HWND *)((int)this + 0xf1),&local_14);
  lpPoints = &local_14;
  cPoints = 2;
  hWndTo = GetParent(*(HWND *)((int)this + 0xf1));
  MapWindowPoints((HWND)0x0,hWndTo,(LPPOINT)lpPoints,cPoints);
  uVar1 = ftol();
  uVar2 = ftol();
  uVar3 = ftol();
  uVar4 = ftol();
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  return param_1;
}


