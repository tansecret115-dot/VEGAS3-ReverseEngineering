/* Module: mpgmux.dll
   Function: FUN_10011745
   Address: 10011745
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10011745(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_1001b52c == 0) {
    FUN_10013541();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_1001b04c,0x104);
  _DAT_1001b034 = &DAT_1001b04c;
  pbVar2 = &DAT_1001b04c;
  if (*DAT_1001c688 != 0) {
    pbVar2 = DAT_1001c688;
  }
  FUN_100117de(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_100117de(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_1001b01c = puVar1;
  _DAT_1001b018 = local_8 + -1;
  return;
}


