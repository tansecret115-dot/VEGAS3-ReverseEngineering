/* Module: wmfplug2.dll
   Function: FUN_00401000
   Address: 00401000
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00401000(HMODULE param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_00489d64 = DAT_0047b068;
  puVar2 = &DAT_00489d50;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_00489d5c = DAT_0047b060;
  DAT_00489d60 = DAT_0047b064;
  DAT_00489d68 = DAT_0047b06c;
  DAT_00489d6c = DAT_0047b030;
  DAT_00489d70 = DAT_0047b034;
  DAT_00489d74 = DAT_0047b038;
  DAT_00489d78 = DAT_0047b03c;
  DAT_00489d50 = param_1;
  FUN_00421a50(param_1);
  iVar1 = FUN_004202b0(&DAT_00489d58,param_1,0,0);
  return -1 < iVar1;
}


