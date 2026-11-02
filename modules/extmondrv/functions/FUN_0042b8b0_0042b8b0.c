/* Module: extmondrv.dll
   Function: FUN_0042b8b0
   Address: 0042b8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042b8b0(void)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int local_4;
  
  if (DAT_0045afe8 != 0) {
    local_4 = 0;
    iVar4 = 0;
    do {
      fVar1 = (float)local_4 * _DAT_00453f6c;
      fVar2 = fVar1 + _DAT_0044e988;
      *(float *)((int)&DAT_00460884 + iVar4) =
           ((fVar2 * _DAT_00453f68 - _DAT_00453f64) * fVar2 - _DAT_00453f60) * fVar2 - _DAT_00453f5c
      ;
      *(float *)((int)&DAT_00460888 + iVar4) =
           (fVar1 * _DAT_00453f58 - _DAT_00453f54) * fVar1 * fVar1 + _DAT_0044e988;
      fVar2 = _DAT_0044e988 - fVar1;
      *(float *)((int)&DAT_0046088c + iVar4) =
           (fVar2 * _DAT_00453f58 - _DAT_00453f54) * fVar2 * fVar2 + _DAT_0044e988;
      fVar1 = _DAT_00453f50 - fVar1;
      *(float *)((int)&DAT_00460890 + iVar4) =
           ((fVar1 * _DAT_00453f68 - _DAT_00453f64) * fVar1 - _DAT_00453f60) * fVar1 - _DAT_00453f5c
      ;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_00470884 + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_00470888 + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_0047088c + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_00470890 + iVar4) = uVar3;
      iVar4 = iVar4 + 0x10;
      local_4 = local_4 + 1;
    } while (iVar4 < 0x10000);
    DAT_0045afe8 = 0;
  }
  return;
}


