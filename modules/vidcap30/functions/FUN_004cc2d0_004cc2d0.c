/* Module: vidcap30.exe
   Function: FUN_004cc2d0
   Address: 004cc2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cc2d0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  float10 extraout_ST0;
  int local_c;
  
  if (DAT_005b79fc != 0) {
    local_c = 0;
    iVar5 = 0;
    do {
      fVar1 = (float)local_c * _DAT_00595428;
      uVar4 = ftol();
      fVar2 = fVar1 * _DAT_0059a234;
      *(undefined4 *)((int)&DAT_00602314 + iVar5) = uVar4;
      fVar2 = (fVar2 - _DAT_0059a230) * fVar1 * fVar1 + _DAT_00595420;
      uVar4 = ftol();
      fVar3 = _DAT_00595420 - fVar1;
      *(undefined4 *)((int)&DAT_00602318 + iVar5) = uVar4;
      fVar3 = (fVar3 * _DAT_0059a234 - _DAT_0059a230) * fVar3 * fVar3 + _DAT_00595420;
      uVar4 = ftol();
      fVar1 = _DAT_0059a22c - fVar1;
      *(undefined4 *)((int)&DAT_0060231c + iVar5) = uVar4;
      fVar1 = ((fVar1 * _DAT_0059a240 - _DAT_0059a23c) * fVar1 - _DAT_0059a228) * fVar1 -
              _DAT_0059a238;
      uVar4 = ftol();
      *(float *)((int)&DAT_005c2314 + iVar5) = (float)extraout_ST0;
      *(undefined4 *)((int)&DAT_00602320 + iVar5) = uVar4;
      *(float *)((int)&DAT_005c2318 + iVar5) = fVar2;
      *(float *)((int)&DAT_005c231c + iVar5) = fVar3;
      *(float *)((int)&DAT_005c2320 + iVar5) = fVar1;
      iVar5 = iVar5 + 0x10;
      local_c = local_c + 1;
    } while (iVar5 < 0x40000);
    DAT_005b79fc = 0;
  }
  return;
}


