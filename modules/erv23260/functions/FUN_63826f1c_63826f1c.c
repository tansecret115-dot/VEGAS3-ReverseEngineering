/* Module: erv23260.dll
   Function: FUN_63826f1c
   Address: 63826f1c
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_63826f1c(void)

{
  byte *pbVar1;
  byte in_AL;
  uint uVar2;
  uint unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  uint unaff_EDI;
  uint uVar3;
  int in_MM5_Da;
  
  uVar3 = unaff_EDI >> 2;
  uVar2 = *(uint *)(unaff_ESI + -0x80 + unaff_EBX * 4);
  do {
    *(uint *)(uVar3 * 4) = uVar2;
    uVar2 = uVar2 >> 0x10;
    *(byte *)(uVar3 * 4 + 3) = in_AL;
    in_MM5_Da = (in_MM5_Da + 0x7f7f) - uVar2;
    if (in_MM5_Da == 0) {
      uVar3 = uVar3 + (0x7f7f < uVar2);
      break;
    }
    pbVar1 = (byte *)(unaff_EBX + unaff_EBP);
    uVar3 = uVar3 + (0x7f7f < uVar2);
    unaff_EBX = (uint)*pbVar1;
    in_AL = (in_AL | (0x7f7f < uVar2) * -2) + 2;
    uVar2 = *(uint *)(unaff_ESI + -0x80 + unaff_EBX * 4);
  } while (*pbVar1 != 0);
  pbVar1 = (byte *)(uVar3 * 4 + -1 + ((int)((uVar3 * 4 + -1) - unaff_EDI) >> 0x1f) * -4);
  *pbVar1 = *pbVar1 | 0x80;
  return;
}


