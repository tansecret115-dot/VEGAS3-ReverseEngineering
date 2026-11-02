/* Module: rnco3260.dll
   Function: FUN_636ff770
   Address: 636ff770
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636ff770(undefined1 *param_1,int param_2,byte *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_4 >> 1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = (&DAT_63795aa0)[param_3[1] & 0xf0 | (uint)(*param_3 >> 4) | (param_3[2] & 0xf0) << 4]
    ;
    do {
      param_3 = param_3 + 3;
      iVar2 = iVar2 - param_2;
    } while (-1 < iVar2);
    iVar2 = iVar2 + param_4;
    param_1 = param_1 + 1;
  }
  return;
}


