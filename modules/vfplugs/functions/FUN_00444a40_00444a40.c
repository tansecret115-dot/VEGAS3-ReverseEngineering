/* Module: vfplugs.dll
   Function: FUN_00444a40
   Address: 00444a40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00444a40(void)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int local_4;
  
  if (DAT_00493e40 != 0) {
    local_4 = 0;
    iVar4 = 0;
    do {
      fVar1 = (float)local_4 * _DAT_0048cd90;
      fVar2 = fVar1 + _DAT_00487ed4;
      *(float *)((int)&DAT_00514fa0 + iVar4) =
           ((fVar2 * _DAT_0048ca34 - _DAT_0048ca30) * fVar2 - _DAT_0048ca20) * fVar2 - _DAT_0048ca2c
      ;
      *(float *)((int)&DAT_00514fa4 + iVar4) =
           (fVar1 * _DAT_0048ca28 - _DAT_0048ca24) * fVar1 * fVar1 + _DAT_00487ed4;
      fVar2 = _DAT_00487ed4 - fVar1;
      *(float *)((int)&DAT_00514fa8 + iVar4) =
           (fVar2 * _DAT_0048ca28 - _DAT_0048ca24) * fVar2 * fVar2 + _DAT_00487ed4;
      fVar1 = _DAT_00487ed0 - fVar1;
      *(float *)((int)&DAT_00514fac + iVar4) =
           ((fVar1 * _DAT_0048ca34 - _DAT_0048ca30) * fVar1 - _DAT_0048ca20) * fVar1 - _DAT_0048ca2c
      ;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_00524fa0 + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_00524fa4 + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_00524fa8 + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_00524fac + iVar4) = uVar3;
      iVar4 = iVar4 + 0x10;
      local_4 = local_4 + 1;
    } while (iVar4 < 0x10000);
    DAT_00493e40 = 0;
  }
  return;
}


