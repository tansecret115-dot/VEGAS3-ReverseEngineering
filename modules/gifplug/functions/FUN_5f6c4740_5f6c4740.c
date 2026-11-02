/* Module: gifplug.dll
   Function: FUN_5f6c4740
   Address: 5f6c4740
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_5f6c4740(int param_1)

{
  undefined1 uVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (*(short *)(param_1 + 0x343) == 0) {
    if (*(short *)(param_1 + 0x341) == 0) {
      *(int *)(param_1 + 0x447) = param_1 + 0x346;
      uVar5 = FUN_5f6c3fa0(param_1);
      sVar3 = (short)uVar5;
      *(short *)(param_1 + 0x341) = sVar3;
      if ((sVar3 != 0) && (uVar4 = 0, sVar3 != 0)) {
        do {
          uVar5 = FUN_5f6c3fa0(param_1);
          uVar6 = (uint)uVar4;
          uVar4 = uVar4 + 1;
          *(char *)(uVar6 + 0x346 + param_1) = (char)uVar5;
        } while (uVar4 < *(ushort *)(param_1 + 0x341));
      }
    }
    uVar1 = **(undefined1 **)(param_1 + 0x447);
    *(short *)(param_1 + 0x341) = *(short *)(param_1 + 0x341) + -1;
    *(undefined1 *)(param_1 + 0x345) = uVar1;
    *(undefined1 **)(param_1 + 0x447) = *(undefined1 **)(param_1 + 0x447) + 1;
    *(undefined2 *)(param_1 + 0x343) = 8;
  }
  uVar5 = (uint)(*(byte *)(param_1 + 0x345) >> (8U - (char)*(ushort *)(param_1 + 0x343) & 0x1f));
  if (*(ushort *)(param_1 + 0x343) < *(ushort *)(param_1 + 0x335)) {
    do {
      if (*(short *)(param_1 + 0x341) == 0) {
        *(int *)(param_1 + 0x447) = param_1 + 0x346;
        uVar6 = FUN_5f6c3fa0(param_1);
        sVar3 = (short)uVar6;
        *(short *)(param_1 + 0x341) = sVar3;
        if ((sVar3 != 0) && (uVar4 = 0, sVar3 != 0)) {
          do {
            uVar6 = FUN_5f6c3fa0(param_1);
            uVar7 = (uint)uVar4;
            uVar4 = uVar4 + 1;
            *(char *)(uVar7 + 0x346 + param_1) = (char)uVar6;
          } while (uVar4 < *(ushort *)(param_1 + 0x341));
        }
      }
      bVar2 = **(byte **)(param_1 + 0x447);
      *(byte **)(param_1 + 0x447) = *(byte **)(param_1 + 0x447) + 1;
      sVar3 = *(short *)(param_1 + 0x343);
      *(byte *)(param_1 + 0x345) = bVar2;
      uVar4 = sVar3 + 8;
      *(ushort *)(param_1 + 0x343) = uVar4;
      uVar5 = uVar5 | (uint)bVar2 << ((byte)sVar3 & 0x1f);
      *(short *)(param_1 + 0x341) = *(short *)(param_1 + 0x341) + -1;
    } while (uVar4 < *(ushort *)(param_1 + 0x335));
  }
  *(short *)(param_1 + 0x343) = *(short *)(param_1 + 0x343) - *(ushort *)(param_1 + 0x335);
  return *(uint *)(param_1 + 1099 + (uint)*(ushort *)(param_1 + 0x335) * 4) & uVar5;
}


