/* Module: erv23260.dll
   Function: FUN_63826f10
   Address: 63826f10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_63826f10(byte param_1)

{
  byte *pbVar1;
  byte in_AL;
  uint uVar2;
  uint uVar3;
  int unaff_EBP;
  int unaff_ESI;
  uint unaff_EDI;
  uint uVar4;
  int in_MM5_Da;
  
  uVar3 = (uint)param_1;
  uVar4 = unaff_EDI >> 2;
  uVar2 = *(uint *)(unaff_ESI + -0x80 + uVar3 * 4);
  do {
    *(uint *)(uVar4 * 4) = uVar2;
    uVar2 = uVar2 >> 0x10;
    *(byte *)(uVar4 * 4 + 3) = in_AL;
    in_MM5_Da = (in_MM5_Da + 0x7f7f) - uVar2;
    if (in_MM5_Da == 0) {
      uVar4 = uVar4 + (0x7f7f < uVar2);
      break;
    }
    pbVar1 = (byte *)(uVar3 + unaff_EBP);
    uVar4 = uVar4 + (0x7f7f < uVar2);
    uVar3 = (uint)*pbVar1;
    in_AL = (in_AL | (0x7f7f < uVar2) * -2) + 2;
    uVar2 = *(uint *)(unaff_ESI + -0x80 + uVar3 * 4);
  } while (*pbVar1 != 0);
  pbVar1 = (byte *)(uVar4 * 4 + -1 + ((int)((uVar4 * 4 + -1) - unaff_EDI) >> 0x1f) * -4);
  *pbVar1 = *pbVar1 | 0x80;
  return;
}


