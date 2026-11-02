/* Module: sftrans1.dll
   Function: FUN_005262d0
   Address: 005262d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_005262d0(undefined4 param_1,undefined4 param_2,undefined *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  LPCSTR lpString2;
  CHAR local_64 [100];
  
  uVar1 = FUN_00526370(param_1);
  if (param_3 == (undefined *)0x0) {
    param_3 = &DAT_00555654;
  }
  uVar2 = FUN_004c6ae0(&DAT_0061e7f4,uVar1,param_3);
  if (uVar2 < 0x800) {
    lpString2 = (LPCSTR)FUN_00526220(param_2);
    if (lpString2 == (LPCSTR)0x0) {
      uVar1 = FUN_004ca510(DAT_0057b888,0x10e3);
      FUN_004c6ae0(local_64,uVar1,param_2);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_0061e7f4 + uVar2),lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x61e7f3 + (0x800 - uVar2)) = 0;
    return &DAT_0061e7f4;
  }
  return &DAT_0061e7f4;
}


