/* Module: pncrt.dll
   Function: entry
   Address: 78009010
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 entry(undefined4 param_1,int param_2)

{
  DWORD DVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 1) {
    if (param_2 != 0) {
      if (param_2 == 3) {
        FUN_78009d40((LPVOID)0x0);
      }
      return 1;
    }
    if (0 < DAT_78041e20) {
      DAT_78041e20 = DAT_78041e20 + -1;
      if (DAT_78041e14 == 0) {
        _c_exit();
      }
      FUN_7800bc20();
      FUN_78009c70();
      FUN_7800af00();
      return 1;
    }
    return 0;
  }
  DVar1 = GetVersion();
  uVar3 = DVar1 & 0xff;
  if ((uVar3 == 3) && ((DVar1 & 0x80000000) != 0)) {
    FUN_7800cdc0("MSVCRT.DLL for Win32\n\nError: MSVCRT.DLL is not compatible with Win32s.",
                 "Microsoft Visual C++ Runtime Library",0x12010);
    return 0;
  }
  iVar2 = FUN_7800aec0();
  if (iVar2 == 0) {
    return 0;
  }
  __winminor = DVar1 >> 8 & 0xff;
  __winver = uVar3 * 0x100 + __winminor;
  _osver = DVar1 >> 0x10;
  __winmajor = uVar3;
  iVar2 = FUN_78009c10();
  if (iVar2 == 0) {
    FUN_7800af00();
    return 0;
  }
  FUN_7800ba10();
  DAT_78041e2c = FUN_7800d180();
  _acmdln = GetCommandLineA();
  _wcmdln = FUN_7800ced0();
  FUN_7800c1c0();
  FUN_78009830();
  FUN_78008ba0();
  DAT_78041e20 = DAT_78041e20 + 1;
  return 1;
}


