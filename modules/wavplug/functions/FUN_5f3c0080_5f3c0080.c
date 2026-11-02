/* Module: wavplug.dll
   Function: FUN_5f3c0080
   Address: 5f3c0080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f3c0080(void *param_1)

{
  LSTATUS LVar1;
  undefined4 uVar2;
  HKEY local_14;
  HKEY local_10;
  BYTE local_c [12];
  
  uVar2 = 0x80070005;
  LVar1 = RegCreateKeyExA((HKEY)0x80000002,(LPCSTR)((int)param_1 + 0x70),0,(LPSTR)0x0,0,4,
                          (LPSECURITY_ATTRIBUTES)0x0,&local_10,(LPDWORD)0x0);
  if (LVar1 == 0) {
    LVar1 = RegCreateKeyExA(local_10,"License",0,(LPSTR)0x0,0,0x20006,(LPSECURITY_ATTRIBUTES)0x0,
                            &local_14,(LPDWORD)0x0);
    if (LVar1 == 0) {
      FUN_5f3bbdb0(param_1,(LPSTR)local_c,0xb);
      LVar1 = RegSetValueExA(local_14,"LastValidMachineCode",0,1,local_c,0xb);
      if (LVar1 == 0) {
        uVar2 = 0;
      }
      RegCloseKey(local_14);
    }
    RegCloseKey(local_10);
  }
  return uVar2;
}


