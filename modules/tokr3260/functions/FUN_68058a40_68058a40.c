/* Module: tokr3260.dll
   Function: FUN_68058a40
   Address: 68058a40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_68058a40(uint param_1,int param_2,int param_3,uint *param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint *puVar7;
  
  uVar1 = *param_4;
  uVar4 = (int)uVar1 >> 0x1f;
  pbVar6 = (byte *)(((int)(uVar1 + (uVar4 & 7)) >> 3) + param_3);
  iVar5 = 8 - (((uVar1 ^ uVar4) - uVar4 & 7 ^ uVar4) - uVar4);
  bVar2 = (&DAT_6805b1f0)[iVar5 * 4] & *pbVar6;
  iVar5 = param_2 - iVar5;
  *param_4 = uVar1 + param_2;
  if (0 < iVar5) {
    puVar7 = (uint *)(&DAT_6805b1f0 + iVar5 * 4);
    do {
      bVar3 = (byte)iVar5;
      iVar5 = iVar5 + -8;
      *pbVar6 = (byte)((int)param_1 >> (bVar3 & 0x1f)) | bVar2;
      param_1 = param_1 & ~*puVar7;
      pbVar6 = pbVar6 + 1;
      bVar2 = 0;
      puVar7 = puVar7 + -8;
    } while (0 < iVar5);
    *pbVar6 = (char)param_1 << (-(char)iVar5 & 0x1fU);
    return;
  }
  *pbVar6 = (char)param_1 << (-(char)iVar5 & 0x1fU) | bVar2;
  return;
}


