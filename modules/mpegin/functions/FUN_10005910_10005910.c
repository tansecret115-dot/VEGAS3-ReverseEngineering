/* Module: mpegin.dll
   Function: FUN_10005910
   Address: 10005910
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10005910(int *param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  
  piVar4 = param_1;
  if ((param_1[0x13] <= param_1[0x1f]) &&
     ((param_1[0x13] < param_1[0x1f] || ((uint)param_1[0x12] <= (uint)param_1[0x1e])))) {
    param_1[0x11] = 1;
    return;
  }
  if (param_2 < 0x20) {
    param_1[2] = param_1[2] << ((byte)param_2 & 0x1f);
  }
  else {
    param_1[2] = 0;
  }
  iVar7 = param_1[5] - param_2;
  param_1[5] = iVar7;
  if (iVar7 < 0x19) {
    if ((param_1[0xb] != 0) && (param_1[3] - 4U <= (uint)param_1[1])) {
      iVar8 = 0x18 - iVar7;
      do {
        if ((uint)param_1[3] <= (uint)param_1[1]) {
          FUN_1000b0f0(param_1);
        }
        param_1[0x1e] = param_1[0x20];
        param_1[0x1f] = param_1[0x21];
        param_1[0x20] = param_1[0x22];
        param_1[0x22] = param_1[0x24];
        param_1[0x21] = param_1[0x23];
        param_1[0x23] = param_1[0x25];
        param_1[0x24] = param_1[8];
        param_1[0x28] = param_1[0x29];
        param_1[0x25] = param_1[9];
        param_1[0x29] = param_1[0x2a];
        param_1[0x2a] = param_1[0x2b];
        param_1[0x2b] = param_1[3] - param_1[1];
        param_1[0x16] = param_1[0x18];
        param_1[0x17] = param_1[0x19];
        param_1[0x18] = param_1[0x1a];
        param_1[0x19] = param_1[0x1b];
        param_1[0x1a] = param_1[0x1c];
        param_1[0x1c] = param_1[0x14];
        param_1[0x1b] = param_1[0x1d];
        param_1[0x1d] = param_1[0x15];
        bVar5 = FUN_10005780(param_1);
        iVar7 = iVar7 + 8;
        bVar6 = (byte)iVar8;
        iVar8 = iVar8 + -8;
        param_1[2] = param_1[2] | (uint)bVar5 << (bVar6 & 0x1f);
      } while (iVar7 < 0x19);
      param_1[5] = iVar7;
      return;
    }
    if ((uint)param_1[1] < param_1[4] - 4U) {
      iVar8 = 0x18 - iVar7;
      do {
        pbVar1 = (byte *)piVar4[1];
        piVar4[0x28] = piVar4[0x29];
        piVar4[0x29] = piVar4[0x2a];
        piVar4[0x2a] = piVar4[0x2b];
        piVar4[0x2b] = piVar4[3] - (int)pbVar1;
        piVar4[0x16] = piVar4[0x18];
        piVar4[0x17] = piVar4[0x19];
        piVar4[0x1e] = piVar4[0x20];
        piVar4[0x18] = piVar4[0x1a];
        piVar4[0x1f] = piVar4[0x21];
        piVar4[0x19] = piVar4[0x1b];
        piVar4[0x20] = piVar4[0x22];
        piVar4[0x1a] = piVar4[0x1c];
        piVar4[0x21] = piVar4[0x23];
        piVar4[0x1b] = piVar4[0x1d];
        piVar4[0x22] = piVar4[0x24];
        piVar4[0x23] = piVar4[0x25];
        uVar2 = piVar4[8];
        piVar4[0x1c] = piVar4[0x14];
        piVar4[0x24] = uVar2;
        piVar4[0x25] = piVar4[9];
        piVar4[0x1d] = piVar4[0x15];
        param_1 = (int *)(uint)*pbVar1;
        piVar4[1] = (int)(pbVar1 + 1);
        iVar7 = iVar7 + 8;
        bVar5 = (byte)iVar8;
        iVar8 = iVar8 + -8;
        piVar4[8] = uVar2 + 1;
        piVar4[2] = piVar4[2] | (int)param_1 << (bVar5 & 0x1f);
        piVar4[9] = piVar4[9] + (uint)(0xfffffffe < uVar2);
      } while (iVar7 < 0x19);
      piVar4[5] = iVar7;
      return;
    }
    iVar8 = 0x18 - iVar7;
    do {
      if ((uint)param_1[4] <= (uint)param_1[1]) {
        FUN_10005690(param_1);
      }
      param_1[0x1e] = param_1[0x20];
      iVar3 = param_1[0x23];
      param_1[0x1f] = param_1[0x21];
      param_1[0x20] = param_1[0x22];
      param_1[0x22] = param_1[0x24];
      param_1[0x23] = param_1[0x25];
      pbVar1 = (byte *)param_1[1];
      param_1[0x28] = param_1[0x29];
      uVar2 = param_1[8];
      param_1[0x29] = param_1[0x2a];
      param_1[0x2a] = param_1[0x2b];
      param_1[0x21] = iVar3;
      param_1[0x2b] = param_1[3] - (int)pbVar1;
      param_1[0x16] = param_1[0x18];
      param_1[0x17] = param_1[0x19];
      param_1[0x18] = param_1[0x1a];
      param_1[0x19] = param_1[0x1b];
      param_1[0x1a] = param_1[0x1c];
      param_1[0x24] = uVar2;
      param_1[0x1b] = param_1[0x1d];
      param_1[0x1c] = param_1[0x14];
      param_1[0x25] = param_1[9];
      param_1[0x1d] = param_1[0x15];
      bVar5 = *pbVar1;
      param_1[1] = (int)(pbVar1 + 1);
      bVar6 = (byte)iVar8;
      iVar7 = iVar7 + 8;
      iVar8 = iVar8 + -8;
      param_1[8] = uVar2 + 1;
      param_1[2] = param_1[2] | (uint)bVar5 << (bVar6 & 0x1f);
      param_1[9] = param_1[9] + (uint)(0xfffffffe < uVar2);
    } while (iVar7 < 0x19);
    param_1[5] = iVar7;
  }
  return;
}


