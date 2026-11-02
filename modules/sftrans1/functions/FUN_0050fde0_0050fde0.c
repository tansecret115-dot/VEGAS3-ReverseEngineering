/* Module: sftrans1.dll
   Function: FUN_0050fde0
   Address: 0050fde0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050fde0(void)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int local_4;
  
  if (DAT_00576508 != 0) {
    local_4 = 0;
    iVar4 = 0;
    do {
      fVar1 = (float)local_4 * _DAT_0056b974;
      fVar2 = fVar1 + _DAT_0055c008;
      *(float *)((int)&DAT_005fc6d0 + iVar4) =
           ((fVar2 * _DAT_0056aef8 - _DAT_0056aef4) * fVar2 - _DAT_0056aee0) * fVar2 - _DAT_0056aef0
      ;
      *(float *)((int)&DAT_005fc6d4 + iVar4) =
           (fVar1 * _DAT_0056aeec - _DAT_0056aee8) * fVar1 * fVar1 + _DAT_0055c008;
      fVar2 = _DAT_0055c008 - fVar1;
      *(float *)((int)&DAT_005fc6d8 + iVar4) =
           (fVar2 * _DAT_0056aeec - _DAT_0056aee8) * fVar2 * fVar2 + _DAT_0055c008;
      fVar1 = _DAT_0056aee4 - fVar1;
      *(float *)((int)&DAT_005fc6dc + iVar4) =
           ((fVar1 * _DAT_0056aef8 - _DAT_0056aef4) * fVar1 - _DAT_0056aee0) * fVar1 - _DAT_0056aef0
      ;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_0060c6d0 + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_0060c6d4 + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_0060c6d8 + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_0060c6dc + iVar4) = uVar3;
      iVar4 = iVar4 + 0x10;
      local_4 = local_4 + 1;
    } while (iVar4 < 0x10000);
    DAT_00576508 = 0;
  }
  return;
}


