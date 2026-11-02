/* Module: rnco3260.dll
   Function: FUN_636f67f0
   Address: 636f67f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f67f0(uint *param_1,int param_2,uint3 *param_3,int param_4)

{
  uint3 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 >> 1;
  iVar3 = param_2;
  if (param_2 == 0) {
    return;
  }
  do {
    uVar1 = *param_3;
    param_3 = (uint3 *)((int)param_3 + 3);
    do {
      *param_1 = (uint)uVar1;
      param_1 = param_1 + 1;
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        return;
      }
      iVar2 = iVar2 - param_4;
    } while (-1 < iVar2);
    iVar2 = iVar2 + param_2;
  } while( true );
}


