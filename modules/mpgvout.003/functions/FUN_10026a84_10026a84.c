/* Module: mpgvout.003
   Function: FUN_10026a84
   Address: 10026a84
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_10026a84(int param_1,int param_2,int param_3,int param_4,int param_5,double *param_6,
            double *param_7)

{
  byte *pbVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  
  dVar3 = 0.0;
  iVar6 = 0;
  dVar2 = dVar3;
  dVar5 = dVar3;
  if (0 < param_5) {
    do {
      iVar7 = 0;
      iVar6 = iVar6 + 1;
      if (0 < param_4) {
        do {
          dVar4 = (double)*(byte *)(iVar7 + param_1);
          pbVar1 = (byte *)(iVar7 + param_2);
          dVar3 = dVar3 + dVar4;
          iVar7 = iVar7 + 1;
          dVar5 = dVar4 * dVar4 + dVar5;
          dVar4 = dVar4 - (double)*pbVar1;
          dVar2 = dVar4 * dVar4 + dVar2;
        } while (iVar7 < param_4);
      }
      param_2 = param_3 + param_2;
      param_1 = param_3 + param_1;
    } while (iVar6 < param_5);
  }
  dVar4 = (double)(param_4 * param_5);
  dVar2 = dVar2 / dVar4;
  if ((byte)((byte)((ushort)((ushort)NAN(dVar2) << 10) >> 8) |
            (byte)((ushort)((ushort)(dVar2 == 0.0) << 0xe) >> 8)) == 0x40) {
    dVar2 = _DAT_10026a7c;
  }
  dVar3 = dVar5 / dVar4 - (dVar3 / dVar4) * (dVar3 / dVar4);
  if ((byte)((byte)((ushort)((ushort)NAN(dVar3) << 10) >> 8) |
            (byte)((ushort)((ushort)(dVar3 == 0.0) << 0xe) >> 8)) == 0x40) {
    *param_6 = _DAT_10026a7c;
  }
  else {
    *param_6 = dVar3;
  }
  *param_7 = dVar2;
  return;
}


