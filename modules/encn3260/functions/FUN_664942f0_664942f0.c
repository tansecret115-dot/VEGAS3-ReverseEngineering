/* Module: encn3260.dll
   Function: FUN_664942f0
   Address: 664942f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664942f0(void *this,undefined4 *param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  void *this_00;
  char cVar4;
  undefined3 uVar6;
  uint uVar5;
  uint uVar7;
  char local_1c;
  undefined1 local_1b;
  uint local_1a;
  undefined2 local_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 local_10;
  ushort uStack_e;
  
  pbVar2 = (byte *)*param_1;
  uVar6 = (undefined3)((uint)param_1 >> 8);
  if ((pbVar2 == (byte *)0x0) || (*param_2 == 0)) {
    uVar5 = CONCAT31(uVar6,local_1b);
    uVar7 = CONCAT22(uStack_12,uStack_14);
    pbVar3 = (byte *)0x0;
  }
  else {
    bVar1 = *pbVar2;
    local_1a = bVar1 >> 1 & 0xffffff01;
    local_1c = -((char)bVar1 >> 7);
    uVar5 = CONCAT31(uVar6,bVar1 >> 2) & 0xffffff1f;
    cVar4 = (char)uVar5;
    local_16 = CONCAT11(pbVar2[3],pbVar2[4]);
    uVar7 = (uint)pbVar2[5] << 0x18 | (uint)pbVar2[6] << 0x10 | (uint)pbVar2[7] << 8 |
            (uint)pbVar2[8];
    pbVar3 = pbVar2 + 9;
    uStack_14 = (undefined2)uVar7;
    if (cVar4 == '\x1f') {
      bVar1 = *pbVar3;
      local_10 = CONCAT11(bVar1,pbVar2[10]);
      pbVar3 = pbVar2 + 0xb;
      uVar5 = (uint)CONCAT11(bVar1,0x1f);
    }
    if (local_1c == '\x01') {
      bVar1 = *pbVar3;
      uStack_e = CONCAT11(bVar1,pbVar3[1]);
      pbVar3 = pbVar3 + 2;
      uVar5 = (uint)CONCAT11(bVar1,cVar4);
    }
  }
  if (pbVar3 != (byte *)0x0) {
    *param_2 = (int)(pbVar2 + (*param_2 - (int)pbVar3));
    *param_1 = pbVar3;
    if (*(int *)((int)this + 0x75) == 0) {
      if ((byte)uVar5 == 0x1f) {
        uVar5 = CONCAT22(uStack_e,local_10);
      }
      else {
        uVar5 = CONCAT22((short)(uVar5 >> 0x10),(ushort)(byte)uVar5);
      }
      this_00 = (void *)FUN_6648dfd0(this,uVar5);
      if (this_00 == (void *)0x0) {
        return 0x80004005;
      }
      FUN_66495990(this_00,CONCAT22(uStack_14,local_16),-(ushort)(local_1c != '\0') & uStack_e,
                   local_1a & 0xff,uVar7);
    }
    return 0;
  }
  return 0x80040009;
}


