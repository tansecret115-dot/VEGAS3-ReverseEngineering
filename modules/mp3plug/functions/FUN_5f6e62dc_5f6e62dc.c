/* Module: mp3plug.dll
   Function: FUN_5f6e62dc
   Address: 5f6e62dc
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f6e62dc(int param_1,uint param_2)

{
  uint *puVar1;
  ushort uVar2;
  char cVar3;
  int *in_EAX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int local_28;
  int local_20;
  
  if (param_1 != 0) {
    iVar4 = in_EAX[8];
    cVar3 = (char)param_1;
    if (iVar4 != 0) {
      uVar7 = param_2;
      local_28 = param_1;
      if (iVar4 < param_1) {
        uVar7 = param_2 >> (cVar3 - (char)iVar4 & 0x1fU);
        local_28 = iVar4;
      }
      if (0 < local_28) {
        iVar4 = 0;
        do {
          uVar2 = *(ushort *)(in_EAX + 9);
          *(ushort *)(in_EAX + 9) = uVar2 * 2;
          if (((*(ushort *)((int)in_EAX + 0x26) & uVar2) != 0) !=
              ((uVar7 & 1 << ((char)local_28 - 1U & 0x1f)) != 0)) {
            *(ushort *)(in_EAX + 9) = *(ushort *)(in_EAX + 9) ^ *(ushort *)(in_EAX + 10);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < local_28);
      }
      in_EAX[8] = in_EAX[8] - local_28;
    }
    uVar7 = in_EAX[2];
    if (param_1 < (int)(in_EAX[3] - uVar7)) {
      uVar5 = 1 << ((byte)uVar7 & 0x1f);
      uVar7 = uVar7 >> 5;
      for (uVar6 = 1 << (cVar3 - 1U & 0x1f); uVar6 != 0; uVar6 = uVar6 >> 1) {
        if ((param_2 & uVar6) == 0) {
          puVar1 = (uint *)(*in_EAX + uVar7 * 4);
          *puVar1 = *puVar1 & (uVar5 ^ 0xffffffff);
        }
        else {
          puVar1 = (uint *)(*in_EAX + uVar7 * 4);
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
      in_EAX[2] = in_EAX[2] + param_1;
    }
    else {
      uVar7 = 1 << (cVar3 - 1U & 0x1f);
      local_20 = 0;
      if (0 < param_1) {
        do {
          uVar5 = 1 << ((byte)in_EAX[2] & 0x1f);
          uVar6 = (uint)in_EAX[2] >> 5;
          if ((param_2 & uVar7) == 0) {
            puVar1 = (uint *)(*in_EAX + uVar6 * 4);
            *puVar1 = *puVar1 & (uVar5 ^ 0xffffffff);
          }
          else {
            puVar1 = (uint *)(*in_EAX + uVar6 * 4);
            *puVar1 = *puVar1 | uVar5;
          }
          iVar4 = in_EAX[2];
          in_EAX[2] = iVar4 + 1;
          if (iVar4 + 1 == in_EAX[3]) {
            in_EAX[2] = 0;
          }
          uVar7 = uVar7 >> 1;
          local_20 = local_20 + 1;
        } while (local_20 < param_1);
      }
    }
  }
  return 1;
}


