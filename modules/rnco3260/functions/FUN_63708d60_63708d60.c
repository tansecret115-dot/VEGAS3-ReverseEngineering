/* Module: rnco3260.dll
   Function: FUN_63708d60
   Address: 63708d60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63708d60(byte *param_1,undefined1 *param_2,ushort *param_3,int param_4,ushort *param_5,
            int param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  byte bVar5;
  byte bVar6;
  ushort *puVar7;
  ushort *puVar8;
  byte bVar9;
  undefined1 *puVar10;
  uint local_18;
  int local_14;
  int local_10;
  byte *local_8;
  
  puVar8 = param_3;
  param_3 = param_5;
  local_14 = param_4 >> 1;
  local_8 = param_1;
  local_10 = param_4;
  puVar10 = param_2;
  if (param_4 == 0) {
    return;
  }
  do {
    uVar4 = *param_3;
    bVar6 = (char)uVar4 << 3;
    param_5 = (ushort *)(uint)bVar6;
    bVar5 = (byte)(uVar4 >> 8) & 0xf8;
    param_3 = param_3 + 1;
    bVar1 = *local_8;
    bVar9 = (byte)(uVar4 >> 3) & 0xfc;
    local_18 = (uint)bVar9;
    bVar2 = local_8[1];
    bVar3 = local_8[2];
    puVar7 = puVar8;
    do {
      *(byte *)((int)puVar7 + 1) = bVar9;
      local_8 = local_8 + 3;
      puVar8 = (ushort *)((int)puVar7 + 3);
      *(byte *)puVar7 = bVar6;
      *(byte *)(puVar7 + 1) = bVar5;
      param_1._3_1_ = (undefined1)((int)(bVar2 + local_18) >> 1);
      puVar10[1] = param_1._3_1_;
      param_2._3_1_ = (undefined1)((int)((uint)bVar3 + (uint)bVar5) >> 1);
      puVar10[2] = param_2._3_1_;
      *puVar10 = (char)((int)((int)param_5 + (uint)bVar1) >> 1);
      puVar10 = puVar10 + 3;
      local_10 = local_10 + -1;
      if (local_10 == 0) {
        return;
      }
      local_14 = local_14 - param_6;
      puVar7 = puVar8;
    } while (-1 < local_14);
    local_14 = local_14 + param_4;
  } while( true );
}


