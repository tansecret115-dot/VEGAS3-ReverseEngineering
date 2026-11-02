/* Module: vegas30.exe
   Function: FUN_00504730
   Address: 00504730
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00504730(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  uVar2 = 1;
  uVar1 = 0;
  puVar3 = &DAT_00643460;
  iVar4 = 0x20;
  do {
    if ((param_1 & uVar2) != 0) {
      uVar1 = uVar1 | *puVar3;
    }
    uVar2 = uVar2 << 1;
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return uVar1;
}


