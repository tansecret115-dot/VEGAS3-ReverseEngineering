/* Module: sfcd.cdd
   Function: FUN_00419fa0
   Address: 00419fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00419fa0(uint *param_1,ushort *param_2,int *param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  uint *puVar8;
  ushort *puVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  byte *pbVar13;
  uint local_28;
  uint local_c;
  uint local_8;
  uint local_4;
  
  puVar9 = param_2;
  puVar8 = param_1;
  FUN_0041f970((undefined1 *)param_2,1);
  bVar4 = false;
  bVar5 = false;
  bVar6 = false;
  param_1[3] = 99;
  uVar7 = param_2[1];
  bVar1 = *(byte *)((int)param_2 + 3);
  bVar3 = true;
  if (1 < *param_2) {
    uVar11 = (*param_2 - 2) / 0xb;
    param_1 = (uint *)0x63;
    param_2 = (ushort *)0x0;
    local_28 = 0;
    puVar10 = (uint *)0x63;
    puVar12 = (uint *)0x0;
    if (uVar11 != 0) {
      pbVar13 = (byte *)((int)puVar9 + 7);
      do {
        bVar2 = *pbVar13;
        if ((bVar2 == 0) || (99 < bVar2)) {
          switch(bVar2) {
          case 0xa0:
            if (bVar3) {
              param_1 = (uint *)(uint)pbVar13[5];
            }
            bVar4 = true;
            break;
          case 0xa1:
            if (bVar3) {
              param_2 = (ushort *)(uint)pbVar13[5];
            }
            bVar5 = true;
            break;
          case 0xa2:
            if (bVar3) {
              local_4 = (uint)pbVar13[7];
              local_8 = (uint)pbVar13[6];
              local_c = (uint)pbVar13[5];
              FUN_0041ef20((int *)(puVar8 + 0x763),(int *)&local_c);
              bVar3 = false;
            }
            bVar6 = true;
            break;
          case 0xb0:
          case 0xc0:
            puVar10 = param_1;
            puVar12 = (uint *)param_2;
            goto LAB_0041a147;
          }
        }
        else {
          puVar10 = (uint *)FUN_0041f490((int)puVar8,bVar2 - 1);
          local_4 = (uint)pbVar13[7];
          local_8 = (uint)pbVar13[6];
          local_c = (uint)pbVar13[5];
          FUN_0041ef20((int *)(puVar10 + 5),(int *)&local_c);
          bVar2 = pbVar13[-2];
          puVar10[2] = bVar2 & 0xf;
          *puVar10 = (uint)*pbVar13;
          if ((bVar2 & 4) == 0) {
            puVar10[3] = 0;
          }
          else {
            puVar10[3] = 1;
          }
        }
        pbVar13 = pbVar13 + 0xb;
        local_28 = local_28 + 1;
        puVar10 = param_1;
        puVar12 = (uint *)param_2;
      } while (local_28 < uVar11);
    }
LAB_0041a147:
    *puVar8 = (uint)puVar10;
    puVar8[1] = (uint)puVar12;
    if ((((bVar4) && (bVar5)) && (bVar6)) && (puVar10 <= puVar12)) {
      *param_4 = (int)puVar12 + (1 - (int)puVar10);
      *param_3 = ((uint)bVar1 - (uint)(byte)uVar7) + 1;
      return 0;
    }
  }
  return 0x8004e0ce;
}


