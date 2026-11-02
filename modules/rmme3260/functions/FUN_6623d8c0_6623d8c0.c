/* Module: rmme3260.dll
   Function: FUN_6623d8c0
   Address: 6623d8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6623d8c0(int *param_1)

{
  HWND hWnd;
  int *this;
  
  if (param_1[0x4f] == 0) {
    return 0x80004005;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1[0x19] + 0xb4));
  hWnd = (HWND)param_1[0x4f];
  (**(code **)(*param_1 + 0x10))(param_1);
  DestroyWindow(hWnd);
  param_1[0x4f] = 0;
  FUN_66242230();
  this = (int *)param_1[0x19];
  if ((this != (int *)0x0) && (this != param_1 + -2)) {
    FUN_66240340(this,1,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1[0x19] + 0xb4));
  return 0;
}


