/* Module: extmondrv.dll
   Function: FUN_00409ef0
   Address: 00409ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00409ef0(int *param_1)

{
  undefined **ppuVar1;
  int iVar2;
  
  iVar2 = 0;
  ppuVar1 = (undefined **)&DAT_0044e4e0;
  do {
    if ((undefined *)*param_1 == *ppuVar1) {
      return (&DAT_0044e3d8)[iVar2 * 0x46];
    }
    ppuVar1 = ppuVar1 + 0x46;
    iVar2 = iVar2 + 1;
  } while (ppuVar1 < &PTR_FUN_0044e940);
  return 0;
}


