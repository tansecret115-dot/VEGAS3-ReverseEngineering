/* Module: mpegin.dll
   Function: FUN_10005ce0
   Address: 10005ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_10005ce0(int *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  
  uVar6 = param_1[5] & 7;
  iVar3 = param_1[5] - uVar6;
  param_1[5] = iVar3;
  param_1[2] = param_1[2] << (sbyte)uVar6;
  if ((param_1[0x1f] < param_1[0x13]) ||
     ((param_1[0x1f] <= param_1[0x13] && ((uint)param_1[0x1e] < (uint)param_1[0x12])))) {
    if (iVar3 < 0x19) {
      if ((param_1[0xb] == 0) || ((uint)param_1[1] < param_1[3] - 4U)) {
        if ((uint)param_1[1] < param_1[4] - 4U) {
          do {
            iVar3 = param_1[0x21];
            param_1[0x1e] = param_1[0x20];
            param_1[0x20] = param_1[0x22];
            param_1[0x21] = param_1[0x23];
            pbVar1 = (byte *)param_1[1];
            param_1[0x28] = param_1[0x29];
            param_1[0x29] = param_1[0x2a];
            param_1[0x2a] = param_1[0x2b];
            param_1[0x1f] = iVar3;
            param_1[0x2b] = param_1[3] - (int)pbVar1;
            param_1[0x16] = param_1[0x18];
            param_1[0x17] = param_1[0x19];
            param_1[0x18] = param_1[0x1a];
            param_1[0x22] = param_1[0x24];
            param_1[0x19] = param_1[0x1b];
            param_1[0x1a] = param_1[0x1c];
            param_1[0x23] = param_1[0x25];
            uVar6 = param_1[8];
            param_1[0x1b] = param_1[0x1d];
            param_1[0x24] = uVar6;
            param_1[0x1c] = param_1[0x14];
            param_1[0x25] = param_1[9];
            param_1[0x1d] = param_1[0x15];
            bVar2 = *pbVar1;
            param_1[1] = (int)(pbVar1 + 1);
            param_1[2] = param_1[2] | (uint)bVar2 << (0x18U - (char)param_1[5] & 0x1f);
            iVar3 = param_1[5] + 8;
            param_1[8] = uVar6 + 1;
            param_1[5] = iVar3;
            param_1[9] = param_1[9] + (uint)(0xfffffffe < uVar6);
          } while (iVar3 < 0x19);
        }
        else {
          do {
            if ((uint)param_1[4] <= (uint)param_1[1]) {
              FUN_10005690(param_1);
            }
            iVar3 = param_1[0x22];
            param_1[0x1e] = param_1[0x20];
            param_1[0x1f] = param_1[0x21];
            pbVar1 = (byte *)param_1[1];
            param_1[0x22] = param_1[0x24];
            param_1[0x28] = param_1[0x29];
            param_1[0x29] = param_1[0x2a];
            param_1[0x2a] = param_1[0x2b];
            param_1[0x20] = iVar3;
            param_1[0x2b] = param_1[3] - (int)pbVar1;
            param_1[0x16] = param_1[0x18];
            param_1[0x17] = param_1[0x19];
            param_1[0x18] = param_1[0x1a];
            param_1[0x19] = param_1[0x1b];
            param_1[0x21] = param_1[0x23];
            uVar6 = param_1[8];
            param_1[0x1a] = param_1[0x1c];
            param_1[0x23] = param_1[0x25];
            param_1[0x1b] = param_1[0x1d];
            param_1[0x24] = uVar6;
            param_1[0x1c] = param_1[0x14];
            param_1[0x25] = param_1[9];
            param_1[0x1d] = param_1[0x15];
            bVar2 = *pbVar1;
            param_1[1] = (int)(pbVar1 + 1);
            param_1[8] = uVar6 + 1;
            iVar3 = param_1[5] + 8;
            param_1[2] = param_1[2] | (uint)bVar2 << (0x18U - (char)param_1[5] & 0x1f);
            param_1[9] = param_1[9] + (uint)(0xfffffffe < uVar6);
            param_1[5] = iVar3;
          } while (iVar3 < 0x19);
        }
      }
      else {
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
          bVar2 = FUN_10005780(param_1);
          iVar3 = param_1[5];
          iVar4 = iVar3 + 8;
          param_1[5] = iVar4;
          param_1[2] = param_1[2] | (uint)bVar2 << (0x18U - (char)iVar3 & 0x1f);
        } while (iVar4 < 0x19);
      }
    }
    uVar6 = param_1[2];
    pbVar1 = (byte *)param_1[4];
    while( true ) {
      if ((uVar6 & param_2) == param_3) {
        param_1[2] = uVar6;
        return uVar6;
      }
      if ((param_1[0x13] < param_1[0x1f]) ||
         ((param_1[0x13] <= param_1[0x1f] && ((uint)param_1[0x12] <= (uint)param_1[0x1e])))) break;
      if (param_1[0x11] != 0) {
        return 0;
      }
      if (param_1[0xb] == 0) {
LAB_100061a5:
        pbVar7 = (byte *)param_1[1];
        if (pbVar7 < pbVar1 + -4) {
          iVar3 = param_1[0x21];
          param_1[0x1e] = param_1[0x20];
          param_1[0x20] = param_1[0x22];
          param_1[0x21] = param_1[0x23];
          param_1[0x1f] = iVar3;
          param_1[0x28] = param_1[0x29];
          param_1[0x22] = param_1[0x24];
          uVar5 = param_1[8];
          param_1[0x23] = param_1[0x25];
          iVar3 = param_1[9];
          param_1[0x29] = param_1[0x2a];
          param_1[0x24] = uVar5;
          param_1[0x25] = iVar3;
          param_1[0x2a] = param_1[0x2b];
        }
        else {
          if (pbVar1 <= pbVar7) {
            FUN_10005690(param_1);
          }
          param_1[0x1e] = param_1[0x20];
          iVar4 = param_1[0x23];
          param_1[0x1f] = param_1[0x21];
          param_1[0x20] = param_1[0x22];
          param_1[0x22] = param_1[0x24];
          iVar3 = param_1[9];
          param_1[0x23] = param_1[0x25];
          pbVar7 = (byte *)param_1[1];
          param_1[0x28] = param_1[0x29];
          param_1[0x21] = iVar4;
          uVar5 = param_1[8];
          param_1[0x29] = param_1[0x2a];
          param_1[0x24] = uVar5;
          param_1[0x25] = iVar3;
          param_1[0x2a] = param_1[0x2b];
        }
        param_1[0x2b] = param_1[3] - (int)pbVar7;
        param_1[0x16] = param_1[0x18];
        param_1[0x17] = param_1[0x19];
        param_1[0x18] = param_1[0x1a];
        param_1[0x19] = param_1[0x1b];
        param_1[0x1a] = param_1[0x1c];
        param_1[0x1b] = param_1[0x1d];
        param_1[0x1c] = param_1[0x14];
        param_1[0x1d] = param_1[0x15];
        bVar2 = *pbVar7;
        param_1[1] = (int)(pbVar7 + 1);
        uVar6 = uVar6 << 8 | (uint)bVar2;
        param_1[8] = uVar5 + 1;
        param_1[9] = iVar3 + (uint)(0xfffffffe < uVar5);
      }
      else {
        if ((uint)param_1[1] < param_1[3] - 4U) goto LAB_100061a5;
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
        bVar2 = FUN_10005780(param_1);
        uVar6 = uVar6 << 8 | (uint)bVar2;
      }
    }
  }
  param_1[0x11] = 1;
  return 0;
}


