/* Module: vegas30.exe
   Function: FUN_004e86f0
   Address: 004e86f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004e86f0(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0058ec80();
  uVar2 = (uint)(iVar1 * 100) / DAT_006484e4;
  DAT_0064db10 = ((int)(DAT_0064db10 * 7 + ((int)(DAT_0064db10 * 7) >> 0x1f & 7U)) >> 3) +
                 ((int)(uVar2 + ((int)uVar2 >> 0x1f & 7U)) >> 3);
  if (((int)uVar2 < 0x1e) && ((int)DAT_0064db10 < 10)) {
    DAT_0064db10 = uVar2;
    return uVar2;
  }
  return DAT_0064db10;
}


