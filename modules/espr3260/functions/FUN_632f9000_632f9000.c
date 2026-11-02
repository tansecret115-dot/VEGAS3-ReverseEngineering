/* Module: espr3260.dll
   Function: FUN_632f9000
   Address: 632f9000
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_632f9000(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = (undefined1 *)(param_1 + 2);
    iVar2 = param_2;
    do {
      param_2 = CONCAT13(puVar1[-2],CONCAT12(puVar1[-1],CONCAT11(*puVar1,puVar1[1])));
      *(int *)(puVar1 + -2) = param_2;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + 4;
    } while (iVar2 != 0);
  }
  return;
}


