/* Module: g2plug.dll
   Function: FUN_5f844080
   Address: 5f844080
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f844080(void)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int local_4;
  
  if (DAT_5f876f40 != 0) {
    local_4 = 0;
    iVar4 = 0;
    do {
      fVar1 = (float)local_4 * _DAT_5f870e6c;
      fVar2 = fVar1 + _DAT_5f86fd6c;
      *(float *)((int)&DAT_5f878114 + iVar4) =
           ((fVar2 * _DAT_5f870e68 - _DAT_5f870e64) * fVar2 - _DAT_5f870e60) * fVar2 - _DAT_5f870e5c
      ;
      *(float *)((int)&DAT_5f878118 + iVar4) =
           (fVar1 * _DAT_5f870e58 - _DAT_5f870e54) * fVar1 * fVar1 + _DAT_5f86fd6c;
      fVar2 = _DAT_5f86fd6c - fVar1;
      *(float *)((int)&DAT_5f87811c + iVar4) =
           (fVar2 * _DAT_5f870e58 - _DAT_5f870e54) * fVar2 * fVar2 + _DAT_5f86fd6c;
      fVar1 = _DAT_5f870e50 - fVar1;
      *(float *)((int)&DAT_5f878120 + iVar4) =
           ((fVar1 * _DAT_5f870e68 - _DAT_5f870e64) * fVar1 - _DAT_5f870e60) * fVar1 - _DAT_5f870e5c
      ;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_5f888114 + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_5f888118 + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_5f88811c + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_5f888120 + iVar4) = uVar3;
      iVar4 = iVar4 + 0x10;
      local_4 = local_4 + 1;
    } while (iVar4 < 0x10000);
    DAT_5f876f40 = 0;
  }
  return;
}


