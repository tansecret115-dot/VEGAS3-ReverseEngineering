/* Module: rnco3260.dll
   Function: FUN_637005b0
   Address: 637005b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_637005b0(undefined1 *param_1,int param_2,ushort *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_4 >> 1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    uVar1 = (uint)*param_3;
    *param_1 = (&DAT_63795aa0)
               [(uVar1 & 0x1e | (uVar1 & 0x3c0) >> 1) >> 1 | ((uVar1 & 0x7800) >> 7) << 4];
    do {
      param_3 = param_3 + 1;
      iVar3 = iVar3 - param_2;
    } while (-1 < iVar3);
    iVar3 = iVar3 + param_4;
    param_1 = param_1 + 1;
  }
  return;
}


