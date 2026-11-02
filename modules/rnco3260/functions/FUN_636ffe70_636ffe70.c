/* Module: rnco3260.dll
   Function: FUN_636ffe70
   Address: 636ffe70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636ffe70(undefined1 *param_1,int param_2,ushort *param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_4 >> 1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    uVar1 = *param_3;
    *param_1 = (&DAT_63795aa0)
               [(uVar1 >> 2 & 0x1e0 | uVar1 & 0x1e) >> 1 | ((uVar1 & 0xf000) >> 8) << 4];
    do {
      param_3 = param_3 + 1;
      iVar3 = iVar3 - param_2;
    } while (-1 < iVar3);
    iVar3 = iVar3 + param_4;
    param_1 = param_1 + 1;
  }
  return;
}


