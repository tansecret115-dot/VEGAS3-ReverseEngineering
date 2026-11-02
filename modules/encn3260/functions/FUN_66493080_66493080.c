/* Module: encn3260.dll
   Function: FUN_66493080
   Address: 66493080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66493080(void *this,undefined4 *param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  void *this_00;
  uint uVar5;
  char local_1c;
  byte local_1b;
  uint local_1a;
  undefined2 local_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 local_10;
  ushort uStack_e;
  
  pbVar2 = (byte *)*param_1;
  if ((pbVar2 == (byte *)0x0) || (*param_2 == 0)) {
    uVar5 = CONCAT22(uStack_12,uStack_14);
    pbVar3 = (byte *)0x0;
  }
  else {
    bVar1 = *pbVar2;
    local_1a = bVar1 >> 1 & 0xffffff01;
    local_1c = -((char)bVar1 >> 7);
    local_1b = bVar1 >> 2 & 0x1f;
    local_16 = CONCAT11(pbVar2[3],pbVar2[4]);
    uVar5 = (uint)pbVar2[5] << 0x18 | (uint)pbVar2[6] << 0x10 | (uint)pbVar2[7] << 8 |
            (uint)pbVar2[8];
    pbVar3 = pbVar2 + 9;
    uStack_14 = (undefined2)uVar5;
    if (local_1b == 0x1f) {
      local_10 = CONCAT11(*pbVar3,pbVar2[10]);
      pbVar3 = pbVar2 + 0xb;
    }
    if (local_1c == '\x01') {
      uStack_e = CONCAT11(*pbVar3,pbVar3[1]);
      pbVar3 = pbVar3 + 2;
    }
  }
  if (pbVar3 != (byte *)0x0) {
    *param_2 = (int)(pbVar2 + (*param_2 - (int)pbVar3));
    *param_1 = pbVar3;
    if (local_1b == 0x1f) {
      uVar4 = CONCAT22(uStack_e,local_10);
    }
    else {
      uVar4 = CONCAT31((int3)((uint)pbVar3 >> 8),local_1b) & 0xffff00ff;
    }
    this_00 = (void *)FUN_6648dfd0(this,uVar4);
    if (this_00 != (void *)0x0) {
      FUN_66495990(this_00,CONCAT22(uStack_14,local_16),-(ushort)(local_1c != '\0') & uStack_e,
                   local_1a & 0xff,uVar5);
      return 0;
    }
    return 0x80004005;
  }
  return 0x80040009;
}


