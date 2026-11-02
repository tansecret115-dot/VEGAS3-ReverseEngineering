/* Module: vidcap30.exe
   Function: FUN_0057f3b0
   Address: 0057f3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0057f3b0(int param_1)

{
  HANDLE pvVar1;
  undefined4 uVar2;
  
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCSTR)0x0);
  *(HANDLE *)(param_1 + 0xbc) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    uVar2 = FUN_005835c0();
    return uVar2;
  }
  *(undefined1 *)(param_1 + 0x25) = 1;
  return 0;
}


