/* Module: mp3plug.dll
   Function: FUN_5f726310
   Address: 5f726310
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f726310(int param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  sbyte sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if ((param_2 + param_3 < 0x61) && (param_3 < 0x21)) {
    uVar6 = param_2 & 0x1f;
    uVar1 = param_2 >> 5;
    uVar4 = 0x20 - uVar6;
    if (param_3 <= 0x20 - uVar6) {
      uVar4 = param_3;
    }
    uVar5 = uVar4 + uVar6;
    if (0x1f < uVar5) {
      uVar5 = 0;
    }
    bVar2 = 0x20 - (char)uVar5;
    sVar3 = (sbyte)uVar6;
    *(uint *)(param_4 + uVar1 * 4) =
         (uint)(param_1 << (0x20U - (char)param_3 & 0x1f)) >> sVar3 |
         ~((((uint)(-1 << sVar3) >> sVar3) >> (bVar2 & 0x1f)) << (bVar2 & 0x1f)) &
         *(uint *)(param_4 + uVar1 * 4);
    if (uVar4 < param_3) {
      bVar2 = (char)param_3 - (char)uVar4;
      *(uint *)(param_4 + (uVar1 + 1) * 4) =
           param_1 << (0x20 - bVar2 & 0x1f) |
           -1 >> (bVar2 & 0x1f) & *(uint *)(param_4 + 4 + uVar1 * 4);
    }
  }
  return;
}


