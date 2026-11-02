/* Module: sftrkfx1.dll
   Function: FUN_5cba5050
   Address: 5cba5050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5cba5050(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_LAB_5cc041c0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[7] = 1;
  param_1[8] = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_LAB_5cc04150;
  puVar2 = param_1 + 0xd;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x8c] = 0;
  param_1[0x99] = 0;
  puVar2 = param_1 + 0x8e;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x96] = 0;
  param_1[0x97] = 0x3ff00000;
  if ((undefined4 *)param_1[0x99] != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_1[0x99];
    for (iVar1 = 0x300; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  param_1[0x9c] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9d] = 0;
  return param_1;
}


