/* Module: sfs4rw.dll
   Function: FUN_0047d170
   Address: 0047d170
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0047d170(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    uVar3 = param_1 & 1;
    param_1 = param_1 >> 1;
    param_2 = param_2 + -1;
    uVar1 = (uVar2 | uVar3) << 1;
  } while (0 < param_2);
  return uVar2 & 0x7fffffff | uVar3;
}


