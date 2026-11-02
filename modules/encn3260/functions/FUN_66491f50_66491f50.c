/* Module: encn3260.dll
   Function: FUN_66491f50
   Address: 66491f50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66491f50(void *this,uint param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  byte bVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *pcVar7;
  char local_12;
  char cStack_11;
  char local_10;
  undefined2 local_c;
  char local_a;
  char cStack_9;
  
  uVar4 = FUN_6648d180(*(void **)((int)this + 0x2c),param_1);
  if (uVar4 == 0) {
    return 0x80004005;
  }
  pcVar5 = operator_new(0xd);
  if ((ushort)param_1 < 0x1f) {
    bVar3 = (byte)param_1;
  }
  else {
    bVar3 = 0x1f;
    local_c = (ushort)param_1;
  }
  uVar1 = *(undefined2 *)(uVar4 + 6);
  uVar2 = *(undefined2 *)(uVar4 + 4);
  uVar6 = *(undefined4 *)(uVar4 + 0x12);
  *pcVar5 = (*(byte *)(uVar4 + 0xc) & 1 | (bVar3 | 0xe0) << 1) << 1;
  cStack_11 = (char)((ushort)uVar2 >> 8);
  pcVar5[1] = -1;
  pcVar5[2] = '\x06';
  pcVar5[3] = cStack_11;
  local_12 = (char)uVar2;
  pcVar5[4] = local_12;
  pcVar5[5] = (char)((uint)uVar6 >> 0x18);
  pcVar5[6] = (char)((uint)uVar6 >> 0x10);
  pcVar5[7] = (char)((uint)uVar6 >> 8);
  local_10 = (char)uVar6;
  pcVar5[8] = local_10;
  pcVar7 = pcVar5 + 9;
  if (bVar3 == 0x1f) {
    *pcVar7 = local_c._1_1_;
    pcVar5[10] = (char)local_c;
    pcVar7 = pcVar5 + 0xb;
  }
  local_a = (char)uVar1;
  cStack_9 = (char)((ushort)uVar1 >> 8);
  *pcVar7 = cStack_9;
  pcVar7[1] = local_a;
  uVar6 = FUN_66492030(this,pcVar5,pcVar7 + (2 - (int)pcVar5));
  return uVar6;
}


