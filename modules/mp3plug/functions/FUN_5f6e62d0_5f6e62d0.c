/* Module: mp3plug.dll
   Function: FUN_5f6e62d0
   Address: 5f6e62d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6e62d0(int *param_1,uint param_2,int param_3)

{
  uint *puVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iStack_28;
  int iStack_20;
  
  if (param_3 != 0) {
    iStack_28 = param_1[8];
    cVar3 = (char)param_3;
    if (iStack_28 != 0) {
      if (iStack_28 < param_3) {
        uVar7 = param_2 >> (cVar3 - (char)iStack_28 & 0x1fU);
      }
      else {
        iStack_28 = param_3;
        uVar7 = param_2;
      }
      if (0 < iStack_28) {
        iVar4 = 0;
        do {
          uVar2 = *(ushort *)(param_1 + 9);
          *(ushort *)(param_1 + 9) = uVar2 * 2;
          if (((*(ushort *)((int)param_1 + 0x26) & uVar2) != 0) !=
              ((uVar7 & 1 << ((char)iStack_28 - 1U & 0x1f)) != 0)) {
            *(ushort *)(param_1 + 9) = *(ushort *)(param_1 + 9) ^ *(ushort *)(param_1 + 10);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iStack_28);
      }
      param_1[8] = param_1[8] - iStack_28;
    }
    uVar7 = param_1[2];
    if (param_3 < (int)(param_1[3] - uVar7)) {
      uVar5 = 1 << ((byte)uVar7 & 0x1f);
      uVar7 = uVar7 >> 5;
      for (uVar6 = 1 << (cVar3 - 1U & 0x1f); uVar6 != 0; uVar6 = uVar6 >> 1) {
        if ((param_2 & uVar6) == 0) {
          puVar1 = (uint *)(*param_1 + uVar7 * 4);
          *puVar1 = *puVar1 & (uVar5 ^ 0xffffffff);
        }
        else {
          puVar1 = (uint *)(*param_1 + uVar7 * 4);
          *puVar1 = *puVar1 | uVar5;
        }
        if ((uVar5 & 0x80000000) == 0) {
          uVar5 = uVar5 * 2;
        }
        else {
          uVar5 = 1;
          uVar7 = uVar7 + 1;
        }
      }
      param_1[2] = param_1[2] + param_3;
    }
    else {
      uVar7 = 1 << (cVar3 - 1U & 0x1f);
      iStack_20 = 0;
      if (0 < param_3) {
        do {
          uVar5 = 1 << ((byte)param_1[2] & 0x1f);
          uVar6 = (uint)param_1[2] >> 5;
          if ((param_2 & uVar7) == 0) {
            puVar1 = (uint *)(*param_1 + uVar6 * 4);
            *puVar1 = *puVar1 & (uVar5 ^ 0xffffffff);
          }
          else {
            puVar1 = (uint *)(*param_1 + uVar6 * 4);
            *puVar1 = *puVar1 | uVar5;
          }
          iVar4 = param_1[2];
          param_1[2] = iVar4 + 1;
          if (iVar4 + 1 == param_1[3]) {
            param_1[2] = 0;
          }
          uVar7 = uVar7 >> 1;
          iStack_20 = iStack_20 + 1;
        } while (iStack_20 < param_3);
      }
    }
  }
  return 1;
}


