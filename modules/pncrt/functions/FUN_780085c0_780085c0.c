/* Module: pncrt.dll
   Function: FUN_780085c0
   Address: 780085c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_780085c0(void)

{
  undefined4 *puVar1;
  int iVar2;
  byte *pbVar3;
  int local_8;
  int local_4;
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_78041ac8,0x104);
  __pgmptr = &DAT_78041ac8;
  pbVar3 = _acmdln;
  if (*_acmdln == 0) {
    pbVar3 = &DAT_78041ac8;
  }
  FUN_78008680(pbVar3,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_4);
  puVar1 = malloc(local_4 + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    _amsg_exit(8);
  }
  FUN_78008680(pbVar3,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_4);
  __argc = local_8 + -1;
  __argv = puVar1;
  iVar2 = FUN_78009e20();
  if (iVar2 != 0) {
    _amsg_exit(8);
  }
  return;
}


