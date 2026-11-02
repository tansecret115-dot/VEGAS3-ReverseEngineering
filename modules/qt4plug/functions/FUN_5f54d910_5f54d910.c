/* Module: qt4plug.dll
   Function: FUN_5f54d910
   Address: 5f54d910
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f54d910(void)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int local_4;
  
  if (DAT_5f5a3cf0 != 0) {
    local_4 = 0;
    iVar4 = 0;
    do {
      fVar1 = (float)local_4 * _DAT_5f59cb44;
      fVar2 = fVar1 + _DAT_5f59b4fc;
      *(float *)((int)&DAT_5f5a965c + iVar4) =
           ((fVar2 * _DAT_5f59cb40 - _DAT_5f59cb3c) * fVar2 - _DAT_5f59cb38) * fVar2 - _DAT_5f59cb34
      ;
      *(float *)((int)&DAT_5f5a9660 + iVar4) =
           (fVar1 * _DAT_5f59cb30 - _DAT_5f59cb2c) * fVar1 * fVar1 + _DAT_5f59b4fc;
      fVar2 = _DAT_5f59b4fc - fVar1;
      *(float *)((int)&DAT_5f5a9664 + iVar4) =
           (fVar2 * _DAT_5f59cb30 - _DAT_5f59cb2c) * fVar2 * fVar2 + _DAT_5f59b4fc;
      fVar1 = _DAT_5f59cb28 - fVar1;
      *(float *)((int)&DAT_5f5a9668 + iVar4) =
           ((fVar1 * _DAT_5f59cb40 - _DAT_5f59cb3c) * fVar1 - _DAT_5f59cb38) * fVar1 - _DAT_5f59cb34
      ;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_5f5b965c + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_5f5b9660 + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_5f5b9664 + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_5f5b9668 + iVar4) = uVar3;
      iVar4 = iVar4 + 0x10;
      local_4 = local_4 + 1;
    } while (iVar4 < 0x10000);
    DAT_5f5a3cf0 = 0;
  }
  return;
}


