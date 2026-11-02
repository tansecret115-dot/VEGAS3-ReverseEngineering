/* Module: vidcap30.exe
   Function: FUN_0045c8e0
   Address: 0045c8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0045c8e0(int param_1,LPCSTR param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  lstrcpynA((LPSTR)(param_1 + 0x28),param_2,0x104);
  *(undefined1 *)(param_1 + 299) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return;
}


