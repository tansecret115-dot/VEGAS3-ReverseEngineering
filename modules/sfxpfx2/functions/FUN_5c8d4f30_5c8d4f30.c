/* Module: sfxpfx2.dll
   Function: FUN_5c8d4f30
   Address: 5c8d4f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c8d4f30(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x80004005;
  if ((((*(int *)(param_1 + 0x7ec) != 0) && (*(int *)(param_1 + 0x7f4) != 0)) &&
      (*(int *)(param_1 + 0x7f0) != 0)) && (*(short *)(param_1 + 0x7e8) == 0)) {
    uVar1 = FUN_5c8d95c0(*(int *)(param_1 + 0x7f0));
    *(short *)(param_1 + 0x7f8) = (short)uVar1;
    if ((short)uVar1 == 0) {
      uVar2 = 0;
    }
    *(undefined4 *)(param_1 + 0x7f0) = 0;
    *(undefined4 *)(param_1 + 0x7fc) = 0;
    return uVar2;
  }
  return 0x80004005;
}


