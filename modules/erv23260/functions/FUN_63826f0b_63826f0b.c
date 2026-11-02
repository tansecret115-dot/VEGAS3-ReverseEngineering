/* Module: erv23260.dll
   Function: FUN_63826f0b
   Address: 63826f0b
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_63826f0b(byte param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EBP;
  int unaff_ESI;
  uint unaff_EDI;
  uint uVar5;
  int iVar6;
  
  iVar6 = -1;
  bVar2 = 1;
  uVar4 = (uint)param_1;
  uVar5 = unaff_EDI >> 2;
  uVar3 = *(uint *)(unaff_ESI + -0x80 + uVar4 * 4);
  do {
    *(uint *)(uVar5 * 4) = uVar3;
    uVar3 = uVar3 >> 0x10;
    *(byte *)(uVar5 * 4 + 3) = bVar2;
    iVar6 = (iVar6 + 0x7f7f) - uVar3;
    if (iVar6 == 0) {
      uVar5 = uVar5 + (0x7f7f < uVar3);
      break;
    }
    pbVar1 = (byte *)(uVar4 + unaff_EBP);
    uVar5 = uVar5 + (0x7f7f < uVar3);
    uVar4 = (uint)*pbVar1;
    bVar2 = (bVar2 | (0x7f7f < uVar3) * -2) + 2;
    uVar3 = *(uint *)(unaff_ESI + -0x80 + uVar4 * 4);
  } while (*pbVar1 != 0);
  pbVar1 = (byte *)(uVar5 * 4 + -1 + ((int)((uVar5 * 4 + -1) - unaff_EDI) >> 0x1f) * -4);
  *pbVar1 = *pbVar1 | 0x80;
  return;
}


