/* Module: rnco3260.dll
   Function: FUN_637045b0
   Address: 637045b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_637045b0(uint *param_1,uint *param_2,uint *param_3,undefined4 param_4,uint *param_5,
            uint *param_6)

{
  uint3 uVar1;
  uint3 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint local_8;
  
  if (param_6 != (uint *)0x0) {
    puVar7 = param_1 + 2;
    uVar3 = (uint)CONCAT21(CONCAT11((char)*param_5,*(undefined1 *)((int)param_5 + 1)),
                           *(undefined1 *)((int)param_5 + 2));
    puVar4 = (undefined1 *)((int)param_5 + 3);
    param_5 = param_2 + 1;
    uVar8 = ((*param_1 ^ uVar3) >> 1 & 0x7f7f7f) + (*param_1 & uVar3);
    local_8 = (int)param_6 - 1;
    *param_3 = uVar3;
    *param_2 = uVar8;
    param_6 = param_3 + 1;
    param_1 = puVar7;
    if (1 < (int)local_8) {
      param_3 = (uint *)(local_8 >> 1);
      puVar5 = puVar4;
      do {
        uVar2 = CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]);
        uVar6 = (uint)uVar2;
        puVar4 = puVar5 + 6;
        *param_6 = ((uVar6 ^ uVar3) >> 1 & 0x7f7f7f) + (uVar6 & uVar3);
        param_6[1] = uVar6;
        uVar6 = ((*param_1 ^ uVar6) >> 1 & 0x7f7f7f) + (*param_1 & uVar6);
        *param_5 = ((uVar6 ^ uVar8) >> 1 & 0x7f7f7f) + (uVar6 & uVar8);
        param_5[1] = uVar6;
        uVar1 = CONCAT21(CONCAT11(puVar5[3],puVar5[4]),puVar5[5]);
        uVar3 = (uint)uVar1;
        param_6[3] = uVar3;
        param_6[2] = ((uint3)((uVar2 ^ uVar1) >> 1) & 0x7f7f7f) + (uint)(uVar2 & uVar1);
        param_6 = param_6 + 4;
        uVar8 = ((param_1[2] ^ uVar3) >> 1 & 0x7f7f7f) + (param_1[2] & uVar3);
        param_5[2] = ((uVar6 ^ uVar8) >> 1 & 0x7f7f7f) + (uVar6 & uVar8);
        param_1 = param_1 + 4;
        param_5[3] = uVar8;
        param_5 = param_5 + 4;
        local_8 = local_8 - 2;
        param_3 = (uint *)((int)param_3 + -1);
        puVar5 = puVar4;
      } while (param_3 != (uint *)0x0);
    }
    if (local_8 != 0) {
      uVar6 = (uint)CONCAT21(CONCAT11(*puVar4,puVar4[1]),puVar4[2]);
      *param_6 = ((uVar6 ^ uVar3) >> 1 & 0x7f7f7f) + (uVar6 & uVar3);
      param_6[1] = uVar6;
      param_6[2] = uVar6;
      uVar3 = ((*param_1 ^ uVar6) >> 1 & 0x7f7f7f) + (*param_1 & uVar6);
      param_5[1] = uVar3;
      param_5[2] = uVar3;
      *param_5 = ((uVar3 ^ uVar8) >> 1 & 0x7f7f7f) + (uVar3 & uVar8);
      return;
    }
    *param_6 = uVar3;
    *param_5 = uVar8;
  }
  return;
}


