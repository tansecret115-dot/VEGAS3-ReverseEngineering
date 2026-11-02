/* Module: vegas30k.dll
   Function: FUN_010622c0
   Address: 010622c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010622c0(int param_1,int param_2,byte *param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  short *psVar9;
  byte local_5;
  
  iVar2 = param_2;
  if (param_5 == 1) {
    bVar6 = *param_3;
    bVar4 = param_3[1];
    if (1 < param_4) {
      param_4 = param_4 + -1;
      do {
        bVar5 = param_3[2];
        if ((char)bVar5 <= (char)bVar6) {
          bVar6 = bVar5;
        }
        if ((char)bVar4 <= (char)param_3[3]) {
          bVar4 = param_3[3];
        }
        param_4 = param_4 + -1;
        param_3 = param_3 + 2;
      } while (param_4 != 0);
    }
    *(ushort *)(param_2 + param_1 * 4) = (ushort)bVar6 << 8;
    *(ushort *)(param_2 + 2 + param_1 * 4) = (ushort)bVar4 << 8;
    return param_1 + 1;
  }
  if (param_5 != 2) {
    if (0 < param_5) {
      param_2 = param_5;
      pbVar8 = param_3 + param_5 * 2;
      pbVar7 = param_3;
      psVar9 = (short *)(iVar2 + param_1 * 4);
      do {
        bVar6 = *pbVar7;
        bVar4 = pbVar8[param_5 * -2 + 1];
        if (1 < param_4) {
          param_3 = (byte *)(param_4 + -1);
          pbVar3 = pbVar8;
          do {
            if ((char)*pbVar3 <= (char)bVar6) {
              bVar6 = *pbVar3;
            }
            if ((char)bVar4 <= (char)pbVar3[1]) {
              bVar4 = pbVar3[1];
            }
            pbVar3 = pbVar3 + param_5 * 2;
            param_3 = (byte *)((int)param_3 + -1);
          } while (param_3 != (byte *)0x0);
        }
        *psVar9 = (ushort)bVar6 << 8;
        psVar9[1] = (ushort)bVar4 << 8;
        pbVar7 = pbVar7 + 2;
        pbVar8 = pbVar8 + 2;
        param_2 = param_2 + -1;
        psVar9 = psVar9 + 2;
      } while (param_2 != 0);
    }
    return param_1 + param_5;
  }
  bVar6 = *param_3;
  bVar4 = param_3[1];
  local_5 = param_3[2];
  bVar5 = param_3[3];
  if (1 < param_4) {
    param_4 = param_4 + -1;
    do {
      bVar1 = param_3[4];
      if ((char)bVar1 <= (char)bVar6) {
        bVar6 = bVar1;
      }
      if ((char)bVar4 <= (char)param_3[5]) {
        bVar4 = param_3[5];
      }
      if ((char)param_3[6] <= (char)local_5) {
        local_5 = param_3[6];
      }
      if ((char)bVar5 <= (char)param_3[7]) {
        bVar5 = param_3[7];
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 4;
    } while (param_4 != 0);
  }
  *(ushort *)(param_2 + param_1 * 4) = (ushort)bVar6 << 8;
  *(ushort *)(param_2 + 2 + param_1 * 4) = (ushort)bVar4 << 8;
  *(ushort *)(param_2 + 4 + param_1 * 4) = (ushort)local_5 << 8;
  *(ushort *)(param_2 + 6 + param_1 * 4) = (ushort)bVar5 << 8;
  return param_1 + 2;
}


