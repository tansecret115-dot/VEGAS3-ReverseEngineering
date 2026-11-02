/* Module: rnco3260.dll
   Function: FUN_63706e70
   Address: 63706e70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63706e70(byte *param_1,undefined1 *param_2,uint param_3,int param_4,uint *param_5,int param_6)

{
  uint uVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  byte bVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  int local_10;
  int local_c;
  
  uVar4 = param_3;
  puVar3 = param_2;
  pbVar2 = param_1;
  local_10 = param_4;
  local_c = param_6 >> 1;
  if (param_4 != 0) {
    puVar8 = (undefined1 *)(param_3 + 2);
    iVar6 = (int)param_2 - (int)param_1;
    pbVar9 = param_1;
    param_2 = param_2 + 1;
    do {
      uVar1 = *param_5;
      bVar5 = (byte)(uVar1 >> 0x10);
      param_1 = (byte *)(uint)bVar5;
      bVar7 = (byte)(uVar1 >> 8);
      param_3 = (uint)bVar7;
      puVar8[-2] = bVar5;
      puVar8[-1] = bVar7;
      *puVar8 = (char)uVar1;
      bVar5 = pbVar9[1];
      puVar8 = puVar8 + 3;
      bVar7 = puVar8[(int)(pbVar2 + (-3 - uVar4))];
      pbVar9[iVar6] = (byte)((int)(param_1 + *pbVar9) >> 1);
      pbVar9 = pbVar9 + 3;
      puVar8[(int)(puVar3 + (-3 - uVar4))] = (char)((int)((uint)bVar7 + (uVar1 & 0xff)) >> 1);
      *param_2 = (char)((int)(bVar5 + param_3) >> 1);
      param_2 = param_2 + 3;
      do {
        param_5 = param_5 + 1;
        local_c = local_c - param_4;
      } while (-1 < local_c);
      local_c = local_c + param_6;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}


