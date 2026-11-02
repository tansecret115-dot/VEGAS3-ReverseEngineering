/* Module: rnco3260.dll
   Function: FUN_636fe320
   Address: 636fe320
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fe320(ushort *param_1,int param_2,byte *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_4 >> 1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    uVar1 = (uint)*param_3;
    *param_1 = (*(byte *)((int)&DAT_637956a0 + uVar1 * 4 + 1) & 0xf8 |
               (*(byte *)(&DAT_637956a0 + uVar1) & 0xf8) << 5) << 2 |
               (ushort)(*(byte *)((int)&DAT_637956a0 + uVar1 * 4 + 2) >> 3);
    do {
      param_3 = param_3 + 1;
      iVar3 = iVar3 - param_2;
    } while (-1 < iVar3);
    iVar3 = iVar3 + param_4;
    param_1 = param_1 + 1;
  }
  return;
}


