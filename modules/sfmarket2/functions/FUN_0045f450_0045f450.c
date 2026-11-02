/* Module: sfmarket2.dll
   Function: FUN_0045f450
   Address: 0045f450
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045f450(void)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int local_4;
  
  if (DAT_004a8824 != 0) {
    local_4 = 0;
    iVar4 = 0;
    do {
      fVar1 = (float)local_4 * _DAT_004a132c;
      fVar2 = fVar1 + _DAT_0049e758;
      *(float *)((int)&DAT_004b0410 + iVar4) =
           ((fVar2 * _DAT_004a1328 - _DAT_004a1324) * fVar2 - _DAT_004a1320) * fVar2 - _DAT_004a131c
      ;
      *(float *)((int)&DAT_004b0414 + iVar4) =
           (fVar1 * _DAT_004a1318 - _DAT_004a1314) * fVar1 * fVar1 + _DAT_0049e758;
      fVar2 = _DAT_0049e758 - fVar1;
      *(float *)((int)&DAT_004b0418 + iVar4) =
           (fVar2 * _DAT_004a1318 - _DAT_004a1314) * fVar2 * fVar2 + _DAT_0049e758;
      fVar1 = _DAT_004a1310 - fVar1;
      *(float *)((int)&DAT_004b041c + iVar4) =
           ((fVar1 * _DAT_004a1328 - _DAT_004a1324) * fVar1 - _DAT_004a1320) * fVar1 - _DAT_004a131c
      ;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_004c0410 + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_004c0414 + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_004c0418 + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_004c041c + iVar4) = uVar3;
      iVar4 = iVar4 + 0x10;
      local_4 = local_4 + 1;
    } while (iVar4 < 0x10000);
    DAT_004a8824 = 0;
  }
  return;
}


