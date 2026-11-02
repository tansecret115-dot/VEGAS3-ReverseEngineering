/* Module: rnco3260.dll
   Function: FUN_636fb3a0
   Address: 636fb3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fb3a0(undefined2 *param_1,int param_2,uint *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_4 >> 1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    uVar1 = *param_3;
    *param_1 = (short)(((uVar1 & 0xfc00 | uVar1 >> 3 & 0x1f0000) >> 2 | uVar1 & 0xf8) >> 3);
    param_1 = param_1 + 1;
    do {
      param_3 = param_3 + 1;
      iVar3 = iVar3 - param_2;
    } while (-1 < iVar3);
    iVar3 = iVar3 + param_4;
  }
  return;
}


