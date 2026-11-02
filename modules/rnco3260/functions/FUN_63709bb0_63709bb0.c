/* Module: rnco3260.dll
   Function: FUN_63709bb0
   Address: 63709bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63709bb0(byte *param_1,undefined1 *param_2,byte *param_3,int param_4,ushort *param_5,int param_6
            )

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  byte bVar9;
  ushort *puVar10;
  undefined1 *puVar11;
  uint local_14;
  int local_10;
  int local_c;
  byte *local_8;
  
  local_c = param_4;
  local_10 = param_4 >> 1;
  local_8 = param_1;
  pbVar7 = param_3;
  puVar10 = param_5;
  puVar11 = param_2;
  if (param_4 == 0) {
    return;
  }
  do {
    uVar4 = *puVar10;
    puVar10 = puVar10 + 1;
    bVar8 = (char)uVar4 << 3;
    param_3 = (byte *)(uint)bVar8;
    bVar5 = (byte)(uVar4 >> 7) & 0xf8;
    param_5 = (ushort *)(uint)bVar5;
    bVar1 = *local_8;
    bVar9 = (byte)(uVar4 >> 2) & 0xf8;
    local_14 = (uint)bVar9;
    bVar2 = local_8[1];
    bVar3 = local_8[2];
    pbVar6 = pbVar7;
    do {
      pbVar6[1] = bVar9;
      local_8 = local_8 + 3;
      pbVar7 = pbVar6 + 3;
      *pbVar6 = bVar8;
      pbVar6[2] = bVar5;
      param_1._3_1_ = (undefined1)((int)(bVar2 + local_14) >> 1);
      puVar11[1] = param_1._3_1_;
      param_2._3_1_ = (undefined1)((int)((uint)bVar3 + (int)param_5) >> 1);
      puVar11[2] = param_2._3_1_;
      *puVar11 = (char)((int)(param_3 + bVar1) >> 1);
      puVar11 = puVar11 + 3;
      local_c = local_c + -1;
      if (local_c == 0) {
        return;
      }
      local_10 = local_10 - param_6;
      pbVar6 = pbVar7;
    } while (-1 < local_10);
    local_10 = local_10 + param_4;
  } while( true );
}


