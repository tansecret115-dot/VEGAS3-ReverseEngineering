/* Module: aviplug.dll
   Function: FUN_5f956990
   Address: 5f956990
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5f956990(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_5f958860(param_1);
  *param_1 = &PTR_FUN_5f9d8da0;
  puVar2 = param_1 + 8;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0xf;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


