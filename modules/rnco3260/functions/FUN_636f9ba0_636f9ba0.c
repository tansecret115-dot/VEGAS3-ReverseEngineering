/* Module: rnco3260.dll
   Function: FUN_636f9ba0
   Address: 636f9ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f9ba0(int param_1,int param_2,undefined1 *param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  
  iVar3 = param_2;
  iVar5 = param_4 >> 1;
  if (param_2 != 0) {
    puVar4 = (undefined1 *)(param_1 + 2);
    do {
      uVar1 = param_3[2];
      uVar2 = *param_3;
      puVar4[-1] = param_3[1];
      puVar4[-2] = uVar2;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 3;
      do {
        param_3 = param_3 + 3;
        iVar5 = iVar5 - iVar3;
      } while (-1 < iVar5);
      iVar5 = iVar5 + param_4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


