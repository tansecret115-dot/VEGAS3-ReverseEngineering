/* Module: rnco3260.dll
   Function: FUN_63706540
   Address: 63706540
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63706540(byte *param_1,undefined1 *param_2,undefined1 *param_3,int param_4,uint *param_5,
            int param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte bVar7;
  byte bVar8;
  byte *pbVar9;
  uint *puVar10;
  int local_10;
  int local_c;
  
  local_c = param_4;
  local_10 = param_4 >> 1;
  puVar5 = param_3;
  puVar6 = param_2;
  pbVar9 = param_1;
  puVar10 = param_5;
  if (param_4 == 0) {
    return;
  }
  do {
    uVar4 = *puVar10;
    puVar10 = puVar10 + 1;
    bVar7 = (byte)(uVar4 >> 8);
    param_5 = (uint *)(uint)bVar7;
    bVar8 = (byte)(uVar4 >> 0x10);
    bVar1 = *pbVar9;
    bVar2 = pbVar9[1];
    bVar3 = pbVar9[2];
    do {
      *puVar5 = (char)uVar4;
      puVar5[1] = bVar7;
      puVar5[2] = bVar8;
      param_1._3_1_ = (undefined1)((int)((uint)bVar1 + (uVar4 & 0xff)) >> 1);
      *puVar6 = param_1._3_1_;
      param_2._3_1_ = (undefined1)((int)((uint)bVar2 + (int)param_5) >> 1);
      puVar6[1] = param_2._3_1_;
      param_3._3_1_ = (undefined1)((int)((uint)bVar3 + (uint)bVar8) >> 1);
      puVar6[2] = param_3._3_1_;
      pbVar9 = pbVar9 + 3;
      puVar5 = puVar5 + 3;
      puVar6 = puVar6 + 3;
      local_c = local_c + -1;
      if (local_c == 0) {
        return;
      }
      local_10 = local_10 - param_6;
    } while (-1 < local_10);
    local_10 = local_10 + param_4;
  } while( true );
}


