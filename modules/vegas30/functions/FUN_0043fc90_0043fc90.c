/* Module: vegas30.exe
   Function: FUN_0043fc90
   Address: 0043fc90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043fc90(HSFCD__ **param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_14c [3];
  uchar local_140 [160];
  uchar local_a0 [80];
  uchar local_50 [80];
  
  puVar2 = local_14c;
  for (iVar1 = 0x53; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_14c[0] = DAT_0064a8b0;
  local_14c[1] = DAT_0064a8b4;
  local_14c[2] = DAT_0064a8b8;
  _mbscpy(local_140,&DAT_0064a7c0);
  _mbscpy(local_a0,&DAT_0064a810);
  _mbscpy(local_50,&DAT_0064a860);
  cdr_Open((tPARAMETERS_DEVDES *)local_14c,param_1);
  return;
}


