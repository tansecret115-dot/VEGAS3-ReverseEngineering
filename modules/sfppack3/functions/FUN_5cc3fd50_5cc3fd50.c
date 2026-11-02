/* Module: sfppack3.dll
   Function: FUN_5cc3fd50
   Address: 5cc3fd50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5cc3fd50(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *param_1 = &PTR_LAB_5cc88974;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[8] = 1;
  param_1[9] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = &PTR_LAB_5cc88940;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  puVar3 = param_1 + 0x21;
  for (iVar2 = 6; iVar1 = DAT_5cc982c0, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0x10] = 0;
  param_1[0x20] = (uint)(iVar1 == 0);
  return param_1;
}


