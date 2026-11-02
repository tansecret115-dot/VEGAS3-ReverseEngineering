/* Module: rnco3260.dll
   Function: FUN_636f9c30
   Address: 636f9c30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f9c30(undefined1 *param_1,int param_2,undefined1 *param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  puVar5 = param_3;
  param_3 = (undefined1 *)param_2;
  puVar4 = param_1;
  param_1 = (undefined1 *)(param_2 >> 1);
  if (param_2 == 0) {
    return;
  }
  do {
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    puVar5 = puVar5 + 3;
    do {
      *puVar4 = uVar1;
      puVar4[1] = uVar2;
      puVar4[2] = uVar3;
      puVar4 = puVar4 + 3;
      param_3 = param_3 + -1;
      if (param_3 == (undefined1 *)0x0) {
        return;
      }
      param_1 = param_1 + -param_4;
    } while (-1 < (int)param_1);
    param_1 = param_1 + param_2;
  } while( true );
}


