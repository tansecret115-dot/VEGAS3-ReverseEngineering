/* Module: pncrt.dll
   Function: FUN_780232a0
   Address: 780232a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_780232a0(undefined1 *param_1,undefined1 *param_2,int param_3,undefined *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  for (; puVar2 = param_1, puVar1 = param_1, param_1 < param_2; param_2 = param_2 + -param_3) {
    while (puVar1 = puVar1 + param_3, puVar1 <= param_2) {
      iVar3 = (*(code *)param_4)(puVar1,puVar2);
      if (0 < iVar3) {
        puVar2 = puVar1;
      }
    }
    FUN_78023300(puVar2,param_2,param_3);
  }
  return;
}


