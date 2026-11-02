/* Module: vidcap30.exe
   Function: FUN_004b6b10
   Address: 004b6b10
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004b6b10(int *param_1)

{
  ushort uVar1;
  uint uVar2;
  
  if (*param_1 == 0xc) {
    uVar1 = *(ushort *)((int)param_1 + 10);
  }
  else {
    if (param_1[8] != 0) {
      return param_1[8];
    }
    uVar1 = *(ushort *)((int)param_1 + 0xe);
  }
  uVar2 = (uint)uVar1;
  if (uVar2 == 1) {
    return 2;
  }
  if (uVar2 == 4) {
    return 0x10;
  }
  if (uVar2 - 8 != 0) {
    return uVar2 - 8 & 0xffff0000;
  }
  return 0x100;
}


