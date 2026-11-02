/* Module: vegas30k.dll
   Function: FUN_010a0280
   Address: 010a0280
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010a0280(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  float10 extraout_ST0;
  int local_c;
  
  if (DAT_01206240 != 0) {
    local_c = 0;
    iVar5 = 0;
    do {
      fVar1 = (float)local_c * _DAT_011dd9a8;
      uVar4 = ftol();
      fVar2 = fVar1 * _DAT_011e21e0;
      *(undefined4 *)((int)&DAT_0124e8f0 + iVar5) = uVar4;
      fVar2 = (fVar2 - _DAT_011e21dc) * fVar1 * fVar1 + _DAT_011dad68;
      uVar4 = ftol();
      fVar3 = _DAT_011dad68 - fVar1;
      *(undefined4 *)((int)&DAT_0124e8f4 + iVar5) = uVar4;
      fVar3 = (fVar3 * _DAT_011e21e0 - _DAT_011e21dc) * fVar3 * fVar3 + _DAT_011dad68;
      uVar4 = ftol();
      fVar1 = _DAT_011e297c - fVar1;
      *(undefined4 *)((int)&DAT_0124e8f8 + iVar5) = uVar4;
      fVar1 = ((fVar1 * _DAT_011e2988 - _DAT_011e2984) * fVar1 - _DAT_011e2978) * fVar1 -
              _DAT_011e2980;
      uVar4 = ftol();
      *(float *)((int)&DAT_0120e8f0 + iVar5) = (float)extraout_ST0;
      *(undefined4 *)((int)&DAT_0124e8fc + iVar5) = uVar4;
      *(float *)((int)&DAT_0120e8f4 + iVar5) = fVar2;
      *(float *)((int)&DAT_0120e8f8 + iVar5) = fVar3;
      *(float *)((int)&DAT_0120e8fc + iVar5) = fVar1;
      iVar5 = iVar5 + 0x10;
      local_c = local_c + 1;
    } while (iVar5 < 0x40000);
    DAT_01206240 = 0;
  }
  return;
}


