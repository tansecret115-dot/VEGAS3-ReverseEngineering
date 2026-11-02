/* Module: pncrt.dll
   Function: FUN_7800a200
   Address: 7800a200
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7800a200(void)

{
  undefined4 *puVar1;
  short *psVar2;
  int local_8;
  int local_4;
  
  GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&DAT_78041fb8,0x104);
  __wpgmptr = &DAT_78041fb8;
  psVar2 = _wcmdln;
  if (*_wcmdln == 0) {
    psVar2 = (short *)&DAT_78041fb8;
  }
  FUN_7800a2b0(psVar2,(undefined4 *)0x0,(short *)0x0,&local_8,&local_4);
  puVar1 = malloc((local_4 + local_8 * 2) * 2);
  if (puVar1 == (undefined4 *)0x0) {
    _amsg_exit(8);
  }
  FUN_7800a2b0(psVar2,puVar1,(short *)(puVar1 + local_8),&local_8,&local_4);
  __wargv = puVar1;
  __argc = local_8 + -1;
  return;
}


