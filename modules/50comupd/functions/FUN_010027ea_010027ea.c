/* Module: 50comupd.exe
   Function: FUN_010027ea
   Address: 010027ea
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010027ea(HMODULE param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  DAT_0100b704 = 0;
  iVar1 = FUN_01002849(param_1,param_3);
  if (iVar1 != 0) {
    iVar2 = FUN_01002a81();
    thunk_FUN_010049c8();
  }
  if (((iVar2 != 0) && (DAT_0100aaba == '\0')) && ((DAT_0100b6cc & 1) != 0)) {
    FUN_01001bdd((byte)DAT_0100b6cc);
  }
  if (DAT_0100aa80 != (HANDLE)0x0) {
    CloseHandle(DAT_0100aa80);
  }
  return DAT_0100b704;
}


