/* Module: sipr3260.dll
   Function: FUN_632a1420
   Address: 632a1420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_632a1420(int param_1)

{
  short sVar1;
  void *this;
  undefined4 *this_00;
  FARPROC pFVar2;
  
  if (*(int *)(param_1 + 0x3d) == 0) {
    this = operator_new(0x18);
    if (this == (void *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      this_00 = FUN_632a25c0(this,s_espr3260_dll_632a50cc,2);
    }
    *(undefined4 **)(param_1 + 0x3d) = this_00;
    if (this_00 == (undefined4 *)0x0) {
      return 0x8004000f;
    }
    if (this_00[1] != 0) {
      return 0x8004000f;
    }
    pFVar2 = FUN_632a2810(this_00,s_OpenEncoder_632a50c0);
    *(FARPROC *)(param_1 + 0x51) = pFVar2;
    pFVar2 = FUN_632a2810(*(void **)(param_1 + 0x3d),s_CloseEncoder_632a50b0);
    *(FARPROC *)(param_1 + 0x55) = pFVar2;
    pFVar2 = FUN_632a2810(*(void **)(param_1 + 0x3d),s_spInitEncoder_632a50a0);
    *(FARPROC *)(param_1 + 0x6d) = pFVar2;
    pFVar2 = FUN_632a2810(*(void **)(param_1 + 0x3d),s_spEncode_632a5094);
    *(FARPROC *)(param_1 + 0x71) = pFVar2;
    pFVar2 = FUN_632a2810(*(void **)(param_1 + 0x3d),s_spFreeEncoder_632a5084);
    *(FARPROC *)(param_1 + 0x75) = pFVar2;
    pFVar2 = FUN_632a2810(*(void **)(param_1 + 0x3d),s_spSetFlavor_632a5020);
    *(FARPROC *)(param_1 + 0x69) = pFVar2;
  }
  if (*(int *)(param_1 + 0x45) != 0) {
    return 0;
  }
  if (*(code **)(param_1 + 0x51) == (code *)0x0) {
    return 0x8004000f;
  }
  sVar1 = (**(code **)(param_1 + 0x51))(param_1 + 0x45);
  if (sVar1 != 0) {
    return 0x80004005;
  }
  return 0;
}


