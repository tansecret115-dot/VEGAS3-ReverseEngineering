/* Module: mp3plug.dll
   Function: FUN_5f6f85e0
   Address: 5f6f85e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6f85e0(int *param_1,byte *param_2,int param_3)

{
  short sVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  byte bVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  
  if (param_3 != 0) {
    uVar4 = param_1[4];
    if (uVar4 == (((uint)((int)uVar4 >> 2) >> 0x1d) + uVar4 & 0xfffffff8)) {
      iVar7 = 0;
      if (0 < param_3) {
        while (uVar4 != (((uint)((int)uVar4 >> 3) >> 0x1c) + uVar4 & 0xfffffff0)) {
          param_1[7] = param_1[7] + -8;
          if (param_1[9] == 0) {
            uVar4 = param_1[4];
          }
          else {
            FUN_5f6f84c0();
            sVar1 = *(short *)(param_1[1] + param_1[6] * 2);
            param_1[9] = 0;
            uVar4 = param_1[4];
            *(short *)(param_1 + 2) = sVar1 << (0x10U - (char)uVar4 & 0x1f);
          }
          bVar5 = (byte)((ushort)(short)param_1[2] >> 8);
          if (uVar4 < 8) {
            iVar8 = param_1[6];
            param_1[6] = iVar8 + 1;
            if (iVar8 + 1 == *param_1) {
              param_1[6] = 0;
            }
            iVar8 = param_1[6];
            if (iVar8 == param_1[5]) {
              FUN_5f6f84c0();
              iVar8 = param_1[6];
            }
            uVar2 = *(ushort *)(param_1[1] + iVar8 * 2);
            iVar8 = 0x10 - (8 - uVar4);
            *(ushort *)(param_1 + 2) = uVar2 << ((byte)(8 - uVar4) & 0x1f);
            param_1[4] = iVar8;
            bVar5 = bVar5 | (byte)((int)(uint)uVar2 >> ((byte)iVar8 & 0x1f));
            param_1[9] = 0;
          }
          else {
            *(short *)(param_1 + 2) = (short)param_1[2] << 8;
            param_1[4] = uVar4 - 8;
          }
          param_2[iVar7] = bVar5;
          iVar7 = iVar7 + 1;
          if (param_3 <= iVar7) break;
          uVar4 = param_1[4];
        }
      }
      FUN_5f6f84c0();
      for (; iVar7 <= param_3 + -2; iVar7 = iVar7 + 2) {
        param_1[7] = param_1[7] + -0x10;
        if (param_1[4] == 0) {
          iVar8 = param_1[6];
          param_1[6] = iVar8 + 1;
          if (iVar8 + 1 == *param_1) {
            param_1[6] = 0;
          }
        }
        else {
          param_1[4] = 0;
        }
        uVar3 = *(undefined2 *)(param_1[1] + param_1[6] * 2);
        param_2[iVar7 + 1] = (byte)uVar3;
        param_2[iVar7] = (byte)((ushort)uVar3 >> 8);
      }
      for (; iVar7 < param_3; iVar7 = iVar7 + 1) {
        param_1[7] = param_1[7] + -8;
        if (param_1[9] == 0) {
          uVar4 = param_1[4];
        }
        else {
          FUN_5f6f84c0();
          sVar1 = *(short *)(param_1[1] + param_1[6] * 2);
          param_1[9] = 0;
          uVar4 = param_1[4];
          *(short *)(param_1 + 2) = sVar1 << (0x10U - (char)uVar4 & 0x1f);
        }
        bVar5 = (byte)((ushort)(short)param_1[2] >> 8);
        if (uVar4 < 8) {
          iVar8 = param_1[6];
          param_1[6] = iVar8 + 1;
          if (iVar8 + 1 == *param_1) {
            param_1[6] = 0;
          }
          iVar8 = param_1[6];
          if (iVar8 == param_1[5]) {
            FUN_5f6f84c0();
            iVar8 = param_1[6];
          }
          uVar2 = *(ushort *)(param_1[1] + iVar8 * 2);
          iVar8 = 0x10 - (8 - uVar4);
          *(ushort *)(param_1 + 2) = uVar2 << ((byte)(8 - uVar4) & 0x1f);
          param_1[4] = iVar8;
          bVar5 = bVar5 | (byte)((int)(uint)uVar2 >> ((byte)iVar8 & 0x1f));
          param_1[9] = 0;
        }
        else {
          *(short *)(param_1 + 2) = (short)param_1[2] << 8;
          param_1[4] = uVar4 - 8;
        }
        param_2[iVar7] = bVar5;
      }
    }
    else if (0 < param_3) {
      pbVar6 = param_2 + param_3;
      do {
        param_1[7] = param_1[7] + -8;
        if (param_1[9] == 0) {
          uVar4 = param_1[4];
        }
        else {
          FUN_5f6f84c0();
          sVar1 = *(short *)(param_1[1] + param_1[6] * 2);
          param_1[9] = 0;
          uVar4 = param_1[4];
          *(short *)(param_1 + 2) = sVar1 << (0x10U - (char)uVar4 & 0x1f);
        }
        bVar5 = (byte)((ushort)(short)param_1[2] >> 8);
        if (uVar4 < 8) {
          iVar7 = param_1[6];
          param_1[6] = iVar7 + 1;
          if (iVar7 + 1 == *param_1) {
            param_1[6] = 0;
          }
          iVar7 = param_1[6];
          if (iVar7 == param_1[5]) {
            FUN_5f6f84c0();
            iVar7 = param_1[6];
          }
          uVar2 = *(ushort *)(param_1[1] + iVar7 * 2);
          iVar7 = 0x10 - (8 - uVar4);
          *(ushort *)(param_1 + 2) = uVar2 << ((byte)(8 - uVar4) & 0x1f);
          param_1[4] = iVar7;
          bVar5 = bVar5 | (byte)((int)(uint)uVar2 >> ((byte)iVar7 & 0x1f));
          param_1[9] = 0;
        }
        else {
          *(short *)(param_1 + 2) = (short)param_1[2] << 8;
          param_1[4] = uVar4 - 8;
        }
        *param_2 = bVar5;
        param_2 = param_2 + 1;
      } while ((int)param_2 < (int)pbVar6);
    }
  }
  return;
}


