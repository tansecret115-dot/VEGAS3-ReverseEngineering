/* Module: stl2plg.dll
   Function: FUN_0040f5e0
   Address: 0040f5e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0040f5e0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = 0;
  uVar2 = 1 << ((byte)param_1 & 0x1f);
  if (param_1 < param_2 + param_1) {
    iVar3 = (param_2 + param_1) - param_1;
    do {
      uVar1 = uVar1 | uVar2;
      uVar2 = uVar2 << 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar1;
}


