/* Module: vegas30k.dll
   Function: FUN_01038650
   Address: 01038650
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_01038650(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  LPCSTR lpString2;
  CHAR local_64 [100];
  
  uVar1 = FUN_010386f0(param_1);
  if (param_3 == (undefined1 *)0x0) {
    param_3 = &DAT_011db13c;
  }
  uVar2 = SfPrintF(&DAT_0120bb1c,uVar1,param_3);
  if (uVar2 < 0x800) {
    lpString2 = (LPCSTR)FUN_010385a0(param_2);
    if (lpString2 == (LPCSTR)0x0) {
      uVar1 = _SfGetString2_8(DAT_0120e5c8,0x10e3);
      SfPrintF(local_64,uVar1,param_2);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_0120bb1c + uVar2),lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x120bb1b + (0x800 - uVar2)) = 0;
    return &DAT_0120bb1c;
  }
  return &DAT_0120bb1c;
}


