/* Module: wmfdist2.exe
   Function: FUN_0100290e
   Address: 0100290e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0100290e(HMODULE param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  DAT_0100b704 = 0;
  iVar1 = FUN_0100296d(param_1,param_3);
  if (iVar1 != 0) {
    iVar2 = FUN_01002bab();
    thunk_FUN_01004b75();
  }
  if (((iVar2 != 0) && (DAT_0100aaba == '\0')) && ((_DAT_0100b6cc & 1) != 0)) {
    FUN_01001d04((byte)_DAT_0100b6cc);
  }
  if (DAT_0100aa90 != (HANDLE)0x0) {
    CloseHandle(DAT_0100aa90);
  }
  return DAT_0100b704;
}


