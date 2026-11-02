/* Module: rnco3260.dll
   Function: FUN_636f7140
   Address: 636f7140
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f7140(int *param_1,int param_2,ushort *param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1;
  iVar3 = param_2;
  param_1 = (int *)(param_2 >> 1);
  if (param_2 == 0) {
    return;
  }
  do {
    uVar1 = (uint)*param_3;
    param_3 = param_3 + 1;
    do {
      *piVar2 = (((uVar1 & 0x7c00) << 3 | uVar1 & 0x3e0) << 3 | uVar1 & 0x1f) << 3;
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        return;
      }
      param_1 = (int *)((int)param_1 - param_4);
    } while (-1 < (int)param_1);
    param_1 = (int *)((int)param_1 + param_2);
  } while( true );
}


