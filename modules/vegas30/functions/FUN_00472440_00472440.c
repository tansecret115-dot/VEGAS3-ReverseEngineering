/* Module: vegas30.exe
   Function: FUN_00472440
   Address: 00472440
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00472440(void *param_1,LPARAM param_2)

{
  BOOL BVar1;
  
  if (param_1 != (void *)0x0) {
    BVar1 = IsBadReadPtr(param_1,0xe98);
    if ((BVar1 == 0) && (*(HWND *)((int)param_1 + 4) != (HWND)0x0)) {
      PostMessageA(*(HWND *)((int)param_1 + 4),0x111,0xa7ab,param_2);
    }
  }
  return;
}


