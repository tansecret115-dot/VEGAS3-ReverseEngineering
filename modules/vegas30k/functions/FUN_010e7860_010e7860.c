/* Module: vegas30k.dll
   Function: FUN_010e7860
   Address: 010e7860
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010e7860(void)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int local_4;
  
  if (DAT_012066b0 != 0) {
    local_4 = 0;
    iVar4 = 0;
    do {
      fVar1 = (float)local_4 * _DAT_011e32b0;
      fVar2 = fVar1 + _DAT_011dad68;
      *(float *)((int)&DAT_0128efdc + iVar4) =
           ((fVar2 * _DAT_011e2988 - _DAT_011e2984) * fVar2 - _DAT_011e2978) * fVar2 - _DAT_011e2980
      ;
      *(float *)((int)&DAT_0128efe0 + iVar4) =
           (fVar1 * _DAT_011e21e0 - _DAT_011e21dc) * fVar1 * fVar1 + _DAT_011dad68;
      fVar2 = _DAT_011dad68 - fVar1;
      *(float *)((int)&DAT_0128efe4 + iVar4) =
           (fVar2 * _DAT_011e21e0 - _DAT_011e21dc) * fVar2 * fVar2 + _DAT_011dad68;
      fVar1 = _DAT_011e297c - fVar1;
      *(float *)((int)&DAT_0128efe8 + iVar4) =
           ((fVar1 * _DAT_011e2988 - _DAT_011e2984) * fVar1 - _DAT_011e2978) * fVar1 - _DAT_011e2980
      ;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_0129efdc + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_0129efe0 + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_0129efe4 + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_0129efe8 + iVar4) = uVar3;
      iVar4 = iVar4 + 0x10;
      local_4 = local_4 + 1;
    } while (iVar4 < 0x10000);
    DAT_012066b0 = 0;
  }
  return;
}


