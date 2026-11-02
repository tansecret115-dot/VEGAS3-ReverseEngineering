/* Module: encn3260.dll
   Function: FUN_66493c20
   Address: 66493c20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66493c20(void *this,uint param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  char local_12;
  char cStack_11;
  char local_10;
  undefined2 local_c;
  char local_a;
  char cStack_9;
  
  uVar5 = FUN_6648d180(*(void **)((int)this + 0x2c),param_1);
  if (uVar5 == 0) {
    return -0x7fffbffb;
  }
  pcVar6 = operator_new(0xd);
  if ((ushort)param_1 < 0x1f) {
    bVar4 = (byte)param_1;
  }
  else {
    bVar4 = 0x1f;
    local_c = (ushort)param_1;
  }
  uVar1 = *(undefined2 *)(uVar5 + 6);
  uVar2 = *(undefined2 *)(uVar5 + 4);
  uVar3 = *(undefined4 *)(uVar5 + 0x12);
  *pcVar6 = ((bVar4 | 0xe0) << 1 | *(byte *)(uVar5 + 0xc) & 1) << 1;
  cStack_11 = (char)((ushort)uVar2 >> 8);
  pcVar6[1] = -1;
  pcVar6[2] = '\x06';
  pcVar6[3] = cStack_11;
  local_12 = (char)uVar2;
  pcVar6[4] = local_12;
  pcVar6[5] = (char)((uint)uVar3 >> 0x18);
  pcVar6[6] = (char)((uint)uVar3 >> 0x10);
  pcVar6[7] = (char)((uint)uVar3 >> 8);
  local_10 = (char)uVar3;
  pcVar6[8] = local_10;
  pcVar8 = pcVar6 + 9;
  if (bVar4 == 0x1f) {
    *pcVar8 = local_c._1_1_;
    pcVar6[10] = (char)local_c;
    pcVar8 = pcVar6 + 0xb;
  }
  local_a = (char)uVar1;
  cStack_9 = (char)((ushort)uVar1 >> 8);
  *pcVar8 = cStack_9;
  pcVar8[1] = local_a;
  iVar7 = FUN_66493d00(this,(undefined4 *)pcVar6,(uint)(pcVar8 + (2 - (int)pcVar6)));
  return iVar7;
}


