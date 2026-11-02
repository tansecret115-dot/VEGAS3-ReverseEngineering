/* Module: rmbe3260.dll
   Function: FUN_66010760
   Address: 66010760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66010760(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_6605b650(param_1 + 1);
  *param_1 = &PTR_FUN_66064a80;
  param_1[0x40] = 0;
  puVar1 = param_1 + 5;
  iVar2 = 0x1e;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_1;
}


