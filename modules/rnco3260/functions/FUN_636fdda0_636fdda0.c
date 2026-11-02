/* Module: rnco3260.dll
   Function: FUN_636fdda0
   Address: 636fdda0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fdda0(ushort *param_1,int param_2,ushort *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_4 >> 1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *param_3 >> 1 & 0x7fe0 | *param_3 & 0x1f;
    param_1 = param_1 + 1;
    do {
      param_3 = param_3 + 1;
      iVar2 = iVar2 - param_2;
    } while (-1 < iVar2);
    iVar2 = iVar2 + param_4;
  }
  return;
}


