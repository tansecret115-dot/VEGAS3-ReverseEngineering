/* Module: sipr3260.dll
   Function: FUN_632a12b0
   Address: 632a12b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_632a12b0(int param_1)

{
  short sVar1;
  void *this;
  undefined4 *this_00;
  FARPROC pFVar2;
  
  if (*(int *)(param_1 + 0x39) == 0) {
    this = operator_new(0x18);
    if (this == (void *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      this_00 = FUN_632a25c0(this,s_dspr3260_dll_632a5074,2);
    }
    *(undefined4 **)(param_1 + 0x39) = this_00;
    if (this_00 == (undefined4 *)0x0) {
      return 0x8004000f;
    }
    if (this_00[1] != 0) {
      return 0x8004000f;
    }
    pFVar2 = FUN_632a2810(this_00,s_OpenDecoder_632a5068);
    *(FARPROC *)(param_1 + 0x49) = pFVar2;
    pFVar2 = FUN_632a2810(*(void **)(param_1 + 0x39),s_CloseDecoder_632a5058);
    *(FARPROC *)(param_1 + 0x4d) = pFVar2;
    pFVar2 = FUN_632a2810(*(void **)(param_1 + 0x39),s_spInitDecoder_632a5048);
    *(FARPROC *)(param_1 + 0x5d) = pFVar2;
    pFVar2 = FUN_632a2810(*(void **)(param_1 + 0x39),s_spDecode_632a503c);
    *(FARPROC *)(param_1 + 0x61) = pFVar2;
    pFVar2 = FUN_632a2810(*(void **)(param_1 + 0x39),s_spFreeDecoder_632a502c);
    *(FARPROC *)(param_1 + 0x65) = pFVar2;
    pFVar2 = FUN_632a2810(*(void **)(param_1 + 0x39),s_spSetFlavor_632a5020);
    *(FARPROC *)(param_1 + 0x59) = pFVar2;
  }
  if (*(int *)(param_1 + 0x41) != 0) {
    return 0;
  }
  if (*(code **)(param_1 + 0x49) == (code *)0x0) {
    return 0x8004000f;
  }
  sVar1 = (**(code **)(param_1 + 0x49))(param_1 + 0x41);
  if (sVar1 != 0) {
    return 0x80004005;
  }
  return 0;
}


