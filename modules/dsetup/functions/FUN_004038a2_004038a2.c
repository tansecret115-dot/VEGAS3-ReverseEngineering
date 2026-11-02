/* Module: dsetup.dll
   Function: FUN_004038a2
   Address: 004038a2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004038a2(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_0040b168 == 0) {
    FUN_004058c3();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_0040aaec,0x104);
  _DAT_0040aad8 = &DAT_0040aaec;
  pbVar2 = &DAT_0040aaec;
  if (*DAT_0040b178 != 0) {
    pbVar2 = DAT_0040b178;
  }
  FUN_0040393b(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_0040393b(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_0040aac0 = puVar1;
  _DAT_0040aabc = local_8 + -1;
  return;
}


