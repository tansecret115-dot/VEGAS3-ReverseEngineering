/* Module: rnco3260.dll
   Function: FUN_636fd080
   Address: 636fd080
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fd080(undefined2 *param_1,int param_2,uint *param_3,int param_4)

{
  uint uVar1;
  undefined2 *puVar2;
  int iVar3;
  
  puVar2 = param_1;
  iVar3 = param_2;
  param_1 = (undefined2 *)(param_2 >> 1);
  if (param_2 == 0) {
    return;
  }
  do {
    uVar1 = *param_3;
    param_3 = param_3 + 1;
    do {
      *puVar2 = (short)(((uVar1 & 0xf800 | uVar1 >> 3 & 0x1f0000) >> 3 | uVar1 & 0xf8) >> 3);
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        return;
      }
      param_1 = (undefined2 *)((int)param_1 - param_4);
    } while (-1 < (int)param_1);
    param_1 = (undefined2 *)((int)param_1 + param_2);
  } while( true );
}


