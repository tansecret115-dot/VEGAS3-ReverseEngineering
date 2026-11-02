/* Module: erv33260.dll
   Function: FUN_6708e540
   Address: 6708e540
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6708e540(int param_1,int param_2,int param_3,int param_4,ushort *param_5,int param_6,
                 int param_7,int param_8,int *param_9,int param_10,uint *param_11,uint *param_12)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  ushort *puVar9;
  int local_10;
  int local_c;
  
  *param_12 = 0;
  *param_11 = 0;
  uVar1 = (int)param_5 + 3U & 0xfffffffc;
  local_10 = 0x7fffffff;
  for (uVar7 = param_6 + 3U & 0xfffffffc; (int)uVar7 <= param_8; uVar7 = uVar7 + 4) {
    if ((int)uVar1 <= param_7) {
      uVar3 = uVar1;
      do {
        local_c = 8;
        param_5 = (ushort *)(param_1 + (((int)uVar3 >> 1) + ((int)uVar7 >> 2) * param_3) * 2);
        puVar9 = (ushort *)(param_2 + (((int)uVar3 >> 2) + ((int)uVar7 >> 1) * param_4) * 2);
        iVar8 = 0;
        piVar6 = param_9;
        do {
          uVar2 = (uint)*param_5 - *(int *)((param_10 - (int)param_9) + -4 + (int)(piVar6 + 1));
          uVar4 = (int)uVar2 >> 0x1f;
          uVar5 = (int)((uint)*puVar9 - *piVar6) >> 0x1f;
          iVar8 = iVar8 + ((uVar4 ^ uVar2) - uVar4) + ((uVar5 ^ (uint)*puVar9 - *piVar6) - uVar5);
          puVar9 = puVar9 + param_4;
          param_5 = param_5 + 1;
          local_c = local_c + -1;
          piVar6 = piVar6 + 1;
        } while (local_c != 0);
        if (iVar8 < local_10) {
          *param_11 = uVar3;
          *param_12 = uVar7;
          local_10 = iVar8;
        }
        uVar3 = uVar3 + 4;
      } while ((int)uVar3 <= param_7);
    }
  }
  return;
}


