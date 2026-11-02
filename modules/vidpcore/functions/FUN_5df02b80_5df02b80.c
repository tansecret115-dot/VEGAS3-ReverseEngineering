/* Module: vidpcore.dll
   Function: FUN_5df02b80
   Address: 5df02b80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5df02b80(undefined4 param_1,undefined4 param_2,undefined *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  LPCSTR lpString2;
  CHAR local_64 [100];
  
  uVar1 = FUN_5df02c20(param_1);
  if (param_3 == (undefined *)0x0) {
    param_3 = &DAT_5df185f8;
  }
  uVar2 = FUN_5deb5050(&DAT_5dfede5c,uVar1,param_3);
  if (uVar2 < 0x800) {
    lpString2 = (LPCSTR)FUN_5df02ad0(param_2);
    if (lpString2 == (LPCSTR)0x0) {
      uVar1 = FUN_5deb8a80(DAT_5df42ed8,0x10e3);
      FUN_5deb5050(local_64,uVar1,param_2);
      lpString2 = local_64;
    }
    lstrcpynA((LPSTR)((int)&DAT_5dfede5c + uVar2),lpString2,0x800 - uVar2);
    *(undefined1 *)(uVar2 + 0x5dfede5b + (0x800 - uVar2)) = 0;
    return &DAT_5dfede5c;
  }
  return &DAT_5dfede5c;
}


