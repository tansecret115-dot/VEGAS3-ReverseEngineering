/* Module: rnco3260.dll
   Function: FUN_636f8680
   Address: 636f8680
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f8680(uint *param_1,int param_2,ushort *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_4 >> 1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    uVar1 = (uint)*param_3;
    *param_1 = ((uVar1 & 0x1f) << 0xd | uVar1 & 0x3e0) << 6 | (uVar1 & 0x7c00) >> 7;
    param_1 = param_1 + 1;
    do {
      param_3 = param_3 + 1;
      iVar3 = iVar3 - param_2;
    } while (-1 < iVar3);
    iVar3 = iVar3 + param_4;
  }
  return;
}


