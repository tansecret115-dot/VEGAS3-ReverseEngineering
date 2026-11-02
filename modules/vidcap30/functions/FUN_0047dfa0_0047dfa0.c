/* Module: vidcap30.exe
   Function: FUN_0047dfa0
   Address: 0047dfa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_0047dfa0(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  LPCSTR lpString2;
  CHAR local_64 [100];
  
  uVar1 = FUN_0047e040(param_1);
  if (param_3 == (undefined1 *)0x0) {
    param_3 = &DAT_00586c70;
  }
  uVar2 = SfPrintF(&DAT_005bec94,uVar1,param_3);
  if (uVar2 < 0x800) {
    lpString2 = (LPCSTR)FUN_0047def0(param_2);
    if (lpString2 == (LPCSTR)0x0) {
      uVar1 = _SfGetString2_8(DAT_005c16d8,0x10e3);
      SfPrintF(local_64,uVar1,param_2);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_005bec94 + uVar2),lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x5bec93 + (0x800 - uVar2)) = 0;
    return &DAT_005bec94;
  }
  return &DAT_005bec94;
}


