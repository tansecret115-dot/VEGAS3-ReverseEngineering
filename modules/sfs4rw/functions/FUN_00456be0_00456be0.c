/* Module: sfs4rw.dll
   Function: FUN_00456be0
   Address: 00456be0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00456be0(void)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int local_4;
  
  if (DAT_004a808c != 0) {
    local_4 = 0;
    iVar4 = 0;
    do {
      fVar1 = (float)local_4 * _DAT_0049e92c;
      fVar2 = fVar1 + _DAT_0049c010;
      *(float *)((int)&DAT_004aee08 + iVar4) =
           ((fVar2 * _DAT_0049e928 - _DAT_0049e924) * fVar2 - _DAT_0049e920) * fVar2 - _DAT_0049e91c
      ;
      *(float *)((int)&DAT_004aee0c + iVar4) =
           (fVar1 * _DAT_0049e918 - _DAT_0049e914) * fVar1 * fVar1 + _DAT_0049c010;
      fVar2 = _DAT_0049c010 - fVar1;
      *(float *)((int)&DAT_004aee10 + iVar4) =
           (fVar2 * _DAT_0049e918 - _DAT_0049e914) * fVar2 * fVar2 + _DAT_0049c010;
      fVar1 = _DAT_0049e910 - fVar1;
      *(float *)((int)&DAT_004aee14 + iVar4) =
           ((fVar1 * _DAT_0049e928 - _DAT_0049e924) * fVar1 - _DAT_0049e920) * fVar1 - _DAT_0049e91c
      ;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_004bee08 + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_004bee0c + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_004bee10 + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_004bee14 + iVar4) = uVar3;
      iVar4 = iVar4 + 0x10;
      local_4 = local_4 + 1;
    } while (iVar4 < 0x10000);
    DAT_004a808c = 0;
  }
  return;
}


