/* Module: pncrt.dll
   Function: FUN_7800a770
   Address: 7800a770
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_7800a770(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)param_1[1];
    while (puVar3 != (undefined4 *)0x0) {
      do {
        iVar2 = _wcsicmp((wchar_t *)*puVar3,(wchar_t *)*param_1);
        if (iVar2 < 0) {
          uVar1 = *param_1;
          *param_1 = *puVar3;
          *puVar3 = uVar1;
        }
        puVar3 = (undefined4 *)puVar3[1];
      } while (puVar3 != (undefined4 *)0x0);
      param_1 = (undefined4 *)param_1[1];
      puVar3 = (undefined4 *)param_1[1];
    }
  }
  return;
}


