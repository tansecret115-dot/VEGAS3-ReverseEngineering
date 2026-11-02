/* Module: vegas30k.dll
   Function: FUN_0107dd60
   Address: 0107dd60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0107dd60(short *param_1,int param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar4 = 0;
  psVar3 = param_1;
  if (0 < param_3) {
    do {
      iVar6 = (int)*psVar3;
      if ((*(int *)(param_5 + iVar5 * 8) == 0) && (*(int *)(param_5 + 4 + iVar5 * 8) == 0x3ff00000))
      {
        iVar6 = iVar6 + (short)((ushort)*(byte *)(param_2 + iVar4) << 8 ^ 0x8000);
      }
      else {
        uVar2 = ftol();
        if (-0x81 < (int)uVar2) {
          if ((int)uVar2 < 0x80) {
            param_1 = (short *)(uVar2 & 0xff ^ 0x80);
            iVar6 = iVar6 + (int)param_1;
          }
          else {
            iVar6 = iVar6 + 0xff;
          }
        }
      }
      if (iVar6 < -0x8000) {
        sVar1 = -0x8000;
      }
      else {
        sVar1 = 0x7fff;
        if (iVar6 < 0x8000) {
          sVar1 = (short)iVar6;
        }
      }
      *psVar3 = sVar1;
      iVar5 = iVar5 + 1;
      if (param_4 == iVar5) {
        iVar5 = 0;
      }
      iVar4 = iVar4 + 1;
      psVar3 = psVar3 + 1;
    } while (iVar4 < param_3);
  }
  return;
}


