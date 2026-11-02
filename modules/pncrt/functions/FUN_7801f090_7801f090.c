/* Module: pncrt.dll
   Function: FUN_7801f090
   Address: 7801f090
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_7801f090(uint param_1)

{
  BOOL BVar1;
  DWORD local_4;
  
  if (DAT_78040944 == (HANDLE)0xfffffffe) {
    FUN_7801f980();
  }
  if (DAT_78040944 != (HANDLE)0xffffffff) {
    BVar1 = WriteConsoleA(DAT_78040944,&param_1,1,&local_4,(LPVOID)0x0);
    if (BVar1 != 0) {
      return param_1 & 0xff;
    }
  }
  return 0xffffffff;
}


