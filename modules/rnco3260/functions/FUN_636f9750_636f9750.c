/* Module: rnco3260.dll
   Function: FUN_636f9750
   Address: 636f9750
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f9750(undefined1 *param_1,int param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  puVar2 = param_1;
  iVar3 = param_2;
  param_1 = (undefined1 *)(param_2 >> 1);
  if (param_2 == 0) {
    return;
  }
  do {
    uVar1 = *param_3;
    param_3 = param_3 + 1;
    do {
      *puVar2 = (char)((uint)uVar1 >> 0x10);
      puVar2[1] = (char)((uint)uVar1 >> 8);
      puVar2[2] = (char)uVar1;
      puVar2 = puVar2 + 3;
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        return;
      }
      param_1 = param_1 + -param_4;
    } while (-1 < (int)param_1);
    param_1 = param_1 + param_2;
  } while( true );
}


