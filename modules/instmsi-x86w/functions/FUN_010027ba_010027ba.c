/* Module: InstMsi-x86w.exe
   Function: FUN_010027ba
   Address: 010027ba
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_010027ba(HMODULE param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  DAT_0100b704 = 0;
  iVar1 = FUN_01002819(param_1,param_3);
  if (iVar1 != 0) {
    iVar2 = FUN_01002a51();
    thunk_FUN_0100499a();
  }
  if (((iVar2 != 0) && (DAT_0100aaba == '\0')) && ((_DAT_0100b6cc & 1) != 0)) {
    FUN_01001bfb((byte)_DAT_0100b6cc);
  }
  if (DAT_0100aa80 != (HANDLE)0x0) {
    CloseHandle(DAT_0100aa80);
  }
  return DAT_0100b704;
}


