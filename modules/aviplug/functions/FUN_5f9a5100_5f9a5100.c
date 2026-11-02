/* Module: aviplug.dll
   Function: FUN_5f9a5100
   Address: 5f9a5100
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f9a5100(void)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int local_4;
  
  if (DAT_5f9f3870 != 0) {
    local_4 = 0;
    iVar4 = 0;
    do {
      fVar1 = (float)local_4 * _DAT_5f9ec5f4;
      fVar2 = fVar1 + _DAT_5f9e7904;
      *(float *)((int)&DAT_5f9f5e54 + iVar4) =
           ((fVar2 * _DAT_5f9ec5f0 - _DAT_5f9ec5ec) * fVar2 - _DAT_5f9ec5e8) * fVar2 - _DAT_5f9ec5e4
      ;
      *(float *)((int)&DAT_5f9f5e58 + iVar4) =
           (fVar1 * _DAT_5f9ec5e0 - _DAT_5f9ec5dc) * fVar1 * fVar1 + _DAT_5f9e7904;
      fVar2 = _DAT_5f9e7904 - fVar1;
      *(float *)((int)&DAT_5f9f5e5c + iVar4) =
           (fVar2 * _DAT_5f9ec5e0 - _DAT_5f9ec5dc) * fVar2 * fVar2 + _DAT_5f9e7904;
      fVar1 = _DAT_5f9ec5d8 - fVar1;
      *(float *)((int)&DAT_5f9f5e60 + iVar4) =
           ((fVar1 * _DAT_5f9ec5f0 - _DAT_5f9ec5ec) * fVar1 - _DAT_5f9ec5e8) * fVar1 - _DAT_5f9ec5e4
      ;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_5fa05e54 + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_5fa05e58 + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_5fa05e5c + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_5fa05e60 + iVar4) = uVar3;
      iVar4 = iVar4 + 0x10;
      local_4 = local_4 + 1;
    } while (iVar4 < 0x10000);
    DAT_5f9f3870 = 0;
  }
  return;
}


