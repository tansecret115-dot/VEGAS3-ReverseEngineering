/* Module: vegas30.exe
   Function: FUN_006067d0
   Address: 006067d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_006067d0(int param_1,uint param_2,uint param_3,int param_4)

{
  byte bVar1;
  sbyte sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_2 + param_3 < 0x61) && (param_3 < 0x21)) {
    uVar5 = param_2 & 0x1f;
    param_2 = param_2 >> 5;
    uVar3 = 0x20 - uVar5;
    if (param_3 <= 0x20 - uVar5) {
      uVar3 = param_3;
    }
    uVar4 = uVar3 + uVar5;
    if (0x1f < uVar4) {
      uVar4 = 0;
    }
    bVar1 = 0x20 - (char)uVar4;
    sVar2 = (sbyte)uVar5;
    *(uint *)(param_4 + param_2 * 4) =
         (uint)(param_1 << (0x20U - (char)param_3 & 0x1f)) >> sVar2 |
         ~((((uint)(-1 << sVar2) >> sVar2) >> (bVar1 & 0x1f)) << (bVar1 & 0x1f)) &
         *(uint *)(param_4 + param_2 * 4);
    if (uVar3 < param_3) {
      bVar1 = (char)param_3 - (char)uVar3;
      *(uint *)(param_4 + (param_2 + 1) * 4) =
           param_1 << (0x20 - bVar1 & 0x1f) |
           -1 >> (bVar1 & 0x1f) & *(uint *)(param_4 + 4 + param_2 * 4);
    }
  }
  return;
}


