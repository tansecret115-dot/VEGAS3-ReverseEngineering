/* Module: vegas30k.dll
   Function: FUN_0114efb0
   Address: 0114efb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0114efb0(int param_1)

{
  int iVar1;
  CHAR local_400 [1024];
  
  if ((*(int *)(param_1 + 4) == 1) && (*(int *)(param_1 + 0x1c) != 0)) {
    GetWindowTextA(*(HWND *)(param_1 + 8),local_400,0x400);
    iVar1 = FUN_0114ef90(param_1,local_400,3);
    if (iVar1 != 0) {
      FUN_0114e690(param_1,7);
    }
  }
  if (*(uint *)(param_1 + 4) < 3) {
    FUN_0114f020(param_1,0);
  }
  return;
}


