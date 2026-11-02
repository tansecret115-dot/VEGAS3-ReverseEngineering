/* Module: pncrt.dll
   Function: FUN_78009580
   Address: 78009580
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_78009580(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_8;
  int local_4;
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_78041ea0,0x104);
  __pgmptr = &DAT_78041ea0;
  pbVar2 = _acmdln;
  if (*_acmdln == 0) {
    pbVar2 = &DAT_78041ea0;
  }
  FUN_78009620(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_4);
  puVar1 = malloc(local_4 + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    _amsg_exit(8);
  }
  FUN_78009620(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_4);
  __argv = puVar1;
  __argc = local_8 + -1;
  return;
}


