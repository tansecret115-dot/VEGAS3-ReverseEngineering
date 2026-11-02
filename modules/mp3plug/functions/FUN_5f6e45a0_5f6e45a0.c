/* Module: mp3plug.dll
   Function: FUN_5f6e45a0
   Address: 5f6e45a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f6e45a0(void)

{
  float fVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float *in_stack_00001b68;
  int in_stack_00001b6c;
  float *in_stack_00001b70;
  uint in_stack_00001b74;
  
  iVar6 = FUN_5f72a200();
  if (in_stack_00001b68 != (float *)0x0) {
    log2(((float10)in_stack_00001b68[7] + (float10)_DAT_5f75d448) /
         ((float10)in_stack_00001b68[6] + (float10)_DAT_5f75d444));
    fVar1 = (float)iVar6 * _DAT_5f75d44c * _DAT_5f75d454 + _DAT_5f75d450 * in_stack_00001b68[0xc];
    in_stack_00001b68[0xc] = fVar1;
    fVar3 = _DAT_5f75d458;
    if ((in_stack_00001b68[0xd] < fVar1) && (fVar3 = _DAT_5f75d45c, fVar1 <= in_stack_00001b68[0xf])
       ) {
      fVar3 = (in_stack_00001b68[0xf] - fVar1) / (in_stack_00001b68[0xf] - in_stack_00001b68[0xd]);
    }
    fVar1 = in_stack_00001b68[0x10];
    fVar5 = (in_stack_00001b68[0x13] / *in_stack_00001b68) * _DAT_5f75d468;
    fVar4 = _DAT_5f75d460;
    if (fVar1 < fVar5) {
      fVar4 = (fVar5 - fVar1) / (in_stack_00001b68[0x11] - fVar1);
      fVar4 = fVar4 * fVar4;
    }
    if (in_stack_00001b68[0x12] < fVar4) {
      fVar4 = in_stack_00001b68[0x12];
    }
    fVar3 = fVar3 * fVar4 * in_stack_00001b68[0x14];
    if (in_stack_00001b68[9] < fVar3) {
      fVar3 = in_stack_00001b68[9];
    }
    if (in_stack_00001b68[3] + in_stack_00001b68[2] < fVar3) {
      fVar3 = in_stack_00001b68[3] + in_stack_00001b68[2];
    }
    if (fVar3 < in_stack_00001b68[2] - in_stack_00001b68[4]) {
      fVar3 = in_stack_00001b68[2] - in_stack_00001b68[4];
    }
    if (in_stack_00001b68[1] == _DAT_5f75d470) {
      in_stack_00001b68[2] = fVar3;
    }
    else {
      in_stack_00001b68[2] = in_stack_00001b68[1];
    }
    if ((in_stack_00001b68[5] != 0.0) && (in_stack_00001b6c == 2)) {
      dVar2 = (double)(in_stack_00001b68[2] + _DAT_5f75d474);
      uVar8 = (uint)((ulonglong)dVar2 >> 0x20);
      uVar7 = uVar8 >> 0x14 & 0x7ff;
      if (uVar7 < 0x3ff) {
        uVar7 = 0;
      }
      else {
        uVar7 = (uVar8 << 0xb | SUB84(dVar2,0) >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar7 & 0x1f)
        ;
        if ((longlong)dVar2 < 0) {
          uVar7 = -uVar7;
        }
      }
      fVar1 = *(float *)((int)in_stack_00001b68[10] + uVar7 * 4);
      fVar3 = *(float *)((int)in_stack_00001b68[0xb] + uVar7 * 4);
      FUN_5f6d5380(fVar1,in_stack_00001b70,2,(float *)&stack0x00000010,1,in_stack_00001b74);
      FUN_5f6d5380(fVar3,in_stack_00001b70 + 1,2,(float *)&stack0x00000910,1,in_stack_00001b74);
      FUN_5f6d4860((float *)&stack0x00000010,(float *)&stack0x00000910,(float *)&stack0x00001210,
                   in_stack_00001b74);
      FUN_5f6d5380(fVar3,in_stack_00001b70,2,(float *)&stack0x00000010,1,in_stack_00001b74);
      FUN_5f6d5380(fVar1,in_stack_00001b70 + 1,2,(float *)&stack0x00000910,1,in_stack_00001b74);
      FUN_5f6d49b0((float *)&stack0x00000010,1,(float *)&stack0x00000910,1,in_stack_00001b70 + 1,2,
                   in_stack_00001b74);
      FUN_5f6d5160((undefined4 *)&stack0x00001210,1,in_stack_00001b70,2,in_stack_00001b74);
    }
  }
  return;
}


