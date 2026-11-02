/* Module: pncrt.dll
   Function: FUN_780088c0
   Address: 780088c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_780088c0(void)

{
  undefined4 *puVar1;
  int iVar2;
  short *psVar3;
  int local_8;
  int local_4;
  
  GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&DAT_78041bd0,0x104);
  __wpgmptr = &DAT_78041bd0;
  psVar3 = _wcmdln;
  if (*_wcmdln == 0) {
    psVar3 = (short *)&DAT_78041bd0;
  }
  FUN_78008980(psVar3,(undefined4 *)0x0,(short *)0x0,&local_8,&local_4);
  puVar1 = malloc((local_4 + local_8 * 2) * 2);
  if (puVar1 == (undefined4 *)0x0) {
    _amsg_exit(8);
  }
  FUN_78008980(psVar3,puVar1,(short *)(puVar1 + local_8),&local_8,&local_4);
  __argc = local_8 + -1;
  __wargv = puVar1;
  iVar2 = FUN_7800a480();
  if (iVar2 != 0) {
    _amsg_exit(8);
  }
  return;
}


