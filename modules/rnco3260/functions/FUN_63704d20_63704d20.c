/* Module: rnco3260.dll
   Function: FUN_63704d20
   Address: 63704d20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63704d20(uint *param_1,uint *param_2,uint *param_3,undefined4 param_4,ushort *param_5,
            uint *param_6)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint *puVar8;
  uint local_8;
  
  if (param_6 != (uint *)0x0) {
    uVar5 = (uint)*param_5;
    puVar6 = param_5 + 1;
    puVar3 = param_1 + 2;
    uVar5 = (uVar5 & 0x7e0 | (uVar5 & 0x1f) << 0xe) << 5 | (uVar5 & 0xf800) >> 8;
    local_8 = (int)param_6 - 1;
    uVar7 = ((*param_1 ^ uVar5) >> 1 & 0x7f7f7f) + (*param_1 & uVar5);
    *param_3 = uVar5;
    puVar8 = param_3 + 1;
    *param_2 = uVar7;
    param_1 = param_2 + 1;
    param_6 = puVar3;
    if (1 < (int)local_8) {
      param_3 = (uint *)(local_8 >> 1);
      do {
        uVar2 = (uint)*puVar6;
        uVar2 = (uVar2 & 0x7e0 | (uVar2 & 0x1f) << 0xe) << 5 | (uVar2 & 0xf800) >> 8;
        puVar8[1] = uVar2;
        *puVar8 = ((uVar2 ^ uVar5) >> 1) + (uVar2 & uVar5);
        uVar4 = ((*param_6 ^ uVar2) >> 1 & 0x7f7f7f) + (*param_6 & uVar2);
        *param_1 = ((uVar4 ^ uVar7) >> 1 & 0x7f7f7f) + (uVar4 & uVar7);
        param_1[1] = uVar4;
        uVar5 = (uint)puVar6[1];
        uVar5 = (uVar5 & 0xf800) >> 8 | (uVar5 & 0x7e0 | (uVar5 & 0x1f) << 0xe) << 5;
        puVar8[3] = uVar5;
        puVar8[2] = ((uVar2 ^ uVar5) >> 1) + (uVar2 & uVar5);
        uVar7 = ((param_6[2] ^ uVar5) >> 1 & 0x7f7f7f) + (param_6[2] & uVar5);
        param_1[3] = uVar7;
        param_1[2] = ((uVar4 ^ uVar7) >> 1 & 0x7f7f7f) + (uVar4 & uVar7);
        puVar6 = puVar6 + 2;
        param_6 = param_6 + 4;
        puVar8 = puVar8 + 4;
        local_8 = local_8 - 2;
        param_1 = param_1 + 4;
        param_3 = (uint *)((int)param_3 + -1);
      } while (param_3 != (uint *)0x0);
    }
    if (local_8 != 0) {
      uVar1 = *puVar6;
      uVar2 = (uVar1 & 0x7e0 | (uVar1 & 0x1f) << 0xe) << 5 | uVar1 >> 8 & 0xf8;
      *puVar8 = ((uVar2 ^ uVar5) >> 1) + (uVar2 & uVar5);
      puVar8[1] = uVar2;
      puVar8[2] = uVar2;
      uVar5 = ((*param_6 ^ uVar2) >> 1 & 0x7f7f7f) + (*param_6 & uVar2);
      param_1[1] = uVar5;
      param_1[2] = uVar5;
      *param_1 = ((uVar5 ^ uVar7) >> 1 & 0x7f7f7f) + (uVar5 & uVar7);
      return;
    }
    *puVar8 = uVar5;
    *param_1 = uVar7;
  }
  return;
}


