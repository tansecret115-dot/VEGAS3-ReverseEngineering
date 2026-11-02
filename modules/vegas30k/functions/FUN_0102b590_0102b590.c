/* Module: vegas30k.dll
   Function: FUN_0102b590
   Address: 0102b590
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0102b590(int param_1)

{
  LSTATUS LVar1;
  HKEY local_94;
  undefined1 local_90 [40];
  CHAR local_68 [104];
  
  FUN_0102aeb0(param_1 + 0x10,local_90,0x28,1);
  SfPrintF(local_68,"MfxSoftSynths\\%s",local_90);
  LVar1 = RegOpenKeyExA((HKEY)&DAT_80000000,local_68,0,0x20019,&local_94);
  if (LVar1 != 0) {
    return 0;
  }
  RegCloseKey(local_94);
  return 1;
}


