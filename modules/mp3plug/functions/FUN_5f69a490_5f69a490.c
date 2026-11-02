/* Module: mp3plug.dll
   Function: FUN_5f69a490
   Address: 5f69a490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_5f69a490(undefined *param_1)

{
  undefined **ppuVar1;
  int iVar2;
  
  iVar2 = 0;
  ppuVar1 = (undefined **)&DAT_5f73d050;
  do {
    if (*ppuVar1 == param_1) {
      return &DAT_5f73d040 + iVar2 * 0x14;
    }
    ppuVar1 = ppuVar1 + 5;
    iVar2 = iVar2 + 1;
  } while (ppuVar1 < &PTR_s_The_reason_for_the_error_could_n_5f73d618);
  return (undefined1 *)0x0;
}


