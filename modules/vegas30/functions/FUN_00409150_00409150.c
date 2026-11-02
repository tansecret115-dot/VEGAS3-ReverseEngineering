/* Module: vegas30.exe
   Function: FUN_00409150
   Address: 00409150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00409150(int *param_1,HWND param_2)

{
  int *dwNewLong;
  int iVar1;
  HANDLE hProcess;
  LONG LVar2;
  int *lpBaseAddress;
  SIZE_T dwSize;
  
  iVar1 = (**(code **)(*param_1 + 4))();
  dwNewLong = param_1 + 2;
  dwSize = 0xd;
  *dwNewLong = 0x42444c7;
  param_1[3] = (int)param_1;
  *(undefined1 *)(param_1 + 4) = 0xe9;
  *(int *)((int)param_1 + 0x11) = (iVar1 - (int)dwNewLong) + -0xd;
  lpBaseAddress = dwNewLong;
  hProcess = GetCurrentProcess();
  FlushInstructionCache(hProcess,lpBaseAddress,dwSize);
  LVar2 = SetWindowLongA(param_2,-4,(LONG)dwNewLong);
  if (LVar2 == 0) {
    return 0;
  }
  param_1[7] = LVar2;
  param_1[1] = (int)param_2;
  return 1;
}


