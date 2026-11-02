/* Module: mp3plug.dll
   Function: FUN_5f6dc040
   Address: 5f6dc040
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6dc040(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = 0;
    if (0 < *param_1) {
      do {
        FUN_5f6ec5b0(param_1[iVar1 + 0xd]);
        FUN_5f6ecde0((int *)param_1[iVar1 + 9]);
        FUN_5f6ed7f0(param_1[iVar1 + 0xb]);
        FUN_5f6ee4e0(param_1[iVar1 + 0xf]);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *param_1);
    }
    if (param_1[2] != 0) {
      FUN_5f6eecf0(param_1[0x11]);
    }
    if (param_1[3] != 0) {
      FUN_5f6f02d0(param_1[0x12]);
    }
    FUN_5f6ec3f0(param_1[8]);
    FUN_5f6d97a0((int)param_1);
  }
  return;
}


