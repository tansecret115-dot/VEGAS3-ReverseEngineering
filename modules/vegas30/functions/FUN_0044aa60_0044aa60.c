/* Module: vegas30.exe
   Function: FUN_0044aa60
   Address: 0044aa60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044aa60(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004452b0(param_1);
  if ((piVar1 == (int *)0x0) || (*piVar1 == 0)) {
    PostMessageA(*(HWND *)(param_1 + 8),0x10,0,0);
  }
  return;
}


