/* Module: sftrans1.dll
   Function: FUN_0045d670
   Address: 0045d670
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0045d670(int param_1)

{
  char cVar1;
  uint uVar2;
  
  if (((*(uint *)(param_1 + 0x4c) & 0x1000000) != 0) && (cVar1 = FUN_0045bdc0(), cVar1 != '\0')) {
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    do {
      cVar1 = FUN_0045bdc0();
      if (cVar1 != '\0') {
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x7c));
  }
  return;
}


