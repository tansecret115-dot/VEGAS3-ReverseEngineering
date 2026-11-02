/* Module: vidpcore.dll
   Function: FUN_5dea08d0
   Address: 5dea08d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5dea08d0(int param_1)

{
  char cVar1;
  uint uVar2;
  
  if (((*(uint *)(param_1 + 0x4c) & 0x1000000) != 0) && (cVar1 = FUN_5de9f020(), cVar1 != '\0')) {
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    do {
      cVar1 = FUN_5de9f020();
      if (cVar1 != '\0') {
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x7c));
  }
  return;
}


