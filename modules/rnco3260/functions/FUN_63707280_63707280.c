/* Module: rnco3260.dll
   Function: FUN_63707280
   Address: 63707280
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63707280(byte *param_1,undefined1 *param_2,byte *param_3,int param_4,uint *param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  byte bVar7;
  byte bVar8;
  uint *puVar9;
  byte *pbVar10;
  int local_10;
  int local_c;
  byte local_8;
  
  local_c = param_4;
  local_10 = param_4 >> 1;
  pbVar5 = param_3;
  puVar6 = param_2;
  puVar9 = param_5;
  pbVar10 = param_1;
  if (param_4 == 0) {
    return;
  }
  do {
    uVar4 = *puVar9;
    puVar9 = puVar9 + 1;
    bVar7 = (byte)(uVar4 >> 0x10);
    param_3 = (byte *)(uint)bVar7;
    bVar8 = (byte)(uVar4 >> 8);
    param_5 = (uint *)(uint)bVar8;
    bVar1 = *pbVar10;
    bVar2 = pbVar10[1];
    bVar3 = pbVar10[2];
    do {
      pbVar10 = pbVar10 + 3;
      *pbVar5 = bVar7;
      pbVar5[1] = bVar8;
      local_8 = (byte)uVar4;
      pbVar5[2] = local_8;
      param_1._3_1_ = (undefined1)((int)((uint)bVar2 + (int)param_5) >> 1);
      puVar6[1] = param_1._3_1_;
      param_2._3_1_ = (undefined1)((int)((uint)bVar3 + (uVar4 & 0xff)) >> 1);
      puVar6[2] = param_2._3_1_;
      *puVar6 = (char)((int)(param_3 + bVar1) >> 1);
      pbVar5 = pbVar5 + 3;
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


