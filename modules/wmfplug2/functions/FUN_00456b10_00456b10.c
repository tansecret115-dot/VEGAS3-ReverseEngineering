/* Module: wmfplug2.dll
   Function: FUN_00456b10
   Address: 00456b10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00456b10(void)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int local_4;
  
  if (DAT_00489b9c != 0) {
    local_4 = 0;
    iVar4 = 0;
    do {
      fVar1 = (float)local_4 * _DAT_00483bac;
      fVar2 = fVar1 + _DAT_00482f0c;
      *(float *)((int)&DAT_0048f334 + iVar4) =
           ((fVar2 * _DAT_00483ba8 - _DAT_00483ba4) * fVar2 - _DAT_00483ba0) * fVar2 - _DAT_00483b9c
      ;
      *(float *)((int)&DAT_0048f338 + iVar4) =
           (fVar1 * _DAT_00483b98 - _DAT_00483b94) * fVar1 * fVar1 + _DAT_00482f0c;
      fVar2 = _DAT_00482f0c - fVar1;
      *(float *)((int)&DAT_0048f33c + iVar4) =
           (fVar2 * _DAT_00483b98 - _DAT_00483b94) * fVar2 * fVar2 + _DAT_00482f0c;
      fVar1 = _DAT_00483b90 - fVar1;
      *(float *)((int)&DAT_0048f340 + iVar4) =
           ((fVar1 * _DAT_00483ba8 - _DAT_00483ba4) * fVar1 - _DAT_00483ba0) * fVar1 - _DAT_00483b9c
      ;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_0049f334 + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_0049f338 + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_0049f33c + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_0049f340 + iVar4) = uVar3;
      iVar4 = iVar4 + 0x10;
      local_4 = local_4 + 1;
    } while (iVar4 < 0x10000);
    DAT_00489b9c = 0;
  }
  return;
}


