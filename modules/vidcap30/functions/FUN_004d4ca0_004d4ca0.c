/* Module: vidcap30.exe
   Function: FUN_004d4ca0
   Address: 004d4ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d4ca0(void)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int local_4;
  
  if (DAT_005b7bf8 != 0) {
    local_4 = 0;
    iVar4 = 0;
    do {
      fVar1 = (float)local_4 * _DAT_0059a458;
      fVar2 = fVar1 + _DAT_00595420;
      *(float *)((int)&DAT_00642328 + iVar4) =
           ((fVar2 * _DAT_0059a240 - _DAT_0059a23c) * fVar2 - _DAT_0059a228) * fVar2 - _DAT_0059a238
      ;
      *(float *)((int)&DAT_0064232c + iVar4) =
           (fVar1 * _DAT_0059a234 - _DAT_0059a230) * fVar1 * fVar1 + _DAT_00595420;
      fVar2 = _DAT_00595420 - fVar1;
      *(float *)((int)&DAT_00642330 + iVar4) =
           (fVar2 * _DAT_0059a234 - _DAT_0059a230) * fVar2 * fVar2 + _DAT_00595420;
      fVar1 = _DAT_0059a22c - fVar1;
      *(float *)((int)&DAT_00642334 + iVar4) =
           ((fVar1 * _DAT_0059a240 - _DAT_0059a23c) * fVar1 - _DAT_0059a228) * fVar1 - _DAT_0059a238
      ;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_00652328 + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_0065232c + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_00652330 + iVar4) = uVar3;
      uVar3 = ftol();
      *(undefined4 *)((int)&DAT_00652334 + iVar4) = uVar3;
      iVar4 = iVar4 + 0x10;
      local_4 = local_4 + 1;
    } while (iVar4 < 0x10000);
    DAT_005b7bf8 = 0;
  }
  return;
}


