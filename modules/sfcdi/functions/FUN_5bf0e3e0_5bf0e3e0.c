/* Module: sfcdi.dll
   Function: FUN_5bf0e3e0
   Address: 5bf0e3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf0e3e0(int param_1)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = (byte *)(param_1 + 0xc);
  iVar2 = 0;
  do {
    *pbVar1 = *pbVar1 ^ (&DAT_5bf63c18)[iVar2];
    pbVar1 = pbVar1 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x924);
  return;
}


