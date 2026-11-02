/* Module: vidcap30.exe
   Function: FUN_00575de0
   Address: 00575de0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00575de0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  if (0x60 < param_2 + param_3) {
    return 0;
  }
  if (0x20 < param_3) {
    return 0;
  }
  uVar4 = param_2 & 0x1f;
  uVar5 = 0x20 - uVar4;
  if (param_3 <= 0x20 - uVar4) {
    uVar5 = param_3;
  }
  uVar1 = uVar5 + uVar4;
  if (0x1f < uVar1) {
    uVar1 = 0;
  }
  bVar2 = 0x20 - (char)uVar1;
  uVar4 = ((((uint)(-1 << (sbyte)uVar4) >> (sbyte)uVar4) >> (bVar2 & 0x1f)) << (bVar2 & 0x1f) &
          *(uint *)(param_1 + (param_2 >> 5) * 4)) >> (bVar2 & 0x1f);
  if (uVar5 < param_3) {
    bVar2 = (char)param_3 - (char)uVar5;
    bVar3 = 0x20 - bVar2;
    uVar4 = uVar4 << (bVar2 & 0x1f) |
            (*(uint *)(param_1 + 4 + (param_2 >> 5) * 4) & -1 << (bVar3 & 0x1f)) >> (bVar3 & 0x1f);
  }
  return uVar4;
}


