/* Module: rnco3260.dll
   Function: FUN_636f7d00
   Address: 636f7d00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f7d00(undefined4 *param_1,int param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 >> 1;
  iVar2 = param_2;
  if (param_2 == 0) {
    return;
  }
  do {
    uVar1 = *param_3;
    param_3 = param_3 + 1;
    do {
      *param_1 = uVar1;
      param_1 = param_1 + 1;
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) {
        return;
      }
      iVar3 = iVar3 - param_4;
    } while (-1 < iVar3);
    iVar3 = iVar3 + param_2;
  } while( true );
}


