/* Module: mpegin.dll
   Function: FUN_100116ba
   Address: 100116ba
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100116ba(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_1001da68 == 0) {
    FUN_10013934();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_1001c44c,0x104);
  _DAT_1001c438 = &DAT_1001c44c;
  pbVar2 = &DAT_1001c44c;
  if (*DAT_1001da98 != 0) {
    pbVar2 = DAT_1001da98;
  }
  FUN_10011753(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10011753(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_1001c420 = puVar1;
  _DAT_1001c41c = local_8 + -1;
  return;
}


