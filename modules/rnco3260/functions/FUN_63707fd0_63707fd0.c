/* Module: rnco3260.dll
   Function: FUN_63707fd0
   Address: 63707fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63707fd0(byte *param_1,undefined1 *param_2,byte *param_3,int param_4,byte *param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  int local_10;
  int local_c;
  
  local_c = param_4;
  local_10 = param_4 >> 1;
  pbVar7 = param_3;
  puVar8 = param_2;
  pbVar9 = param_1;
  pbVar10 = param_5;
  if (param_4 == 0) {
    return;
  }
  do {
    bVar1 = *pbVar10;
    param_3 = (byte *)(uint)bVar1;
    bVar2 = pbVar10[1];
    param_5 = (byte *)(uint)bVar2;
    bVar3 = pbVar10[2];
    bVar4 = *pbVar9;
    bVar5 = pbVar9[1];
    bVar6 = pbVar9[2];
    do {
      pbVar9 = pbVar9 + 3;
      *pbVar7 = bVar1;
      pbVar7[1] = bVar2;
      pbVar7[2] = bVar3;
      param_1._3_1_ = (undefined1)((int)(param_5 + bVar5) >> 1);
      puVar8[1] = param_1._3_1_;
      param_2._3_1_ = (undefined1)((int)((uint)bVar6 + (uint)bVar3) >> 1);
      puVar8[2] = param_2._3_1_;
      *puVar8 = (char)((int)(param_3 + bVar4) >> 1);
      pbVar7 = pbVar7 + 3;
      puVar8 = puVar8 + 3;
      local_c = local_c + -1;
      if (local_c == 0) {
        return;
      }
      local_10 = local_10 - param_6;
    } while (-1 < local_10);
    local_10 = local_10 + param_4;
    pbVar10 = pbVar10 + 3;
  } while( true );
}


