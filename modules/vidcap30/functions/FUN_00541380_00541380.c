/* Module: vidcap30.exe
   Function: FUN_00541380
   Address: 00541380
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00541380(int param_1)

{
  int iVar1;
  CHAR local_400 [1024];
  
  if ((*(int *)(param_1 + 4) == 1) && (*(int *)(param_1 + 0x1c) != 0)) {
    GetWindowTextA(*(HWND *)(param_1 + 8),local_400,0x400);
    iVar1 = FUN_00541360(param_1,local_400,3);
    if (iVar1 != 0) {
      FUN_00540a60(param_1,7);
    }
  }
  if (*(uint *)(param_1 + 4) < 3) {
    FUN_005413f0(param_1,0);
  }
  return;
}


