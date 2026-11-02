/* Module: vegas30k.dll
   Function: FUN_01141f80
   Address: 01141f80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01141f80(undefined4 param_1,int param_2,int param_3)

{
  LPCSTR lpString2;
  undefined4 uVar1;
  
  if (*(int *)(param_3 + 8) == -0x208) {
    if (param_2 == 0x133) {
      uVar1 = 0x10b1;
    }
    else {
      if (param_2 != 0x134) {
        return 0;
      }
      uVar1 = 0x10b2;
    }
    lpString2 = (LPCSTR)_SfGetString2_8(DAT_0120e5c8,uVar1);
    if (lpString2 != (LPCSTR)0x0) {
      lstrcpynA((LPSTR)(param_3 + 0x10),lpString2,0x50);
      *(undefined1 *)(param_3 + 0x5f) = 0;
      return 1;
    }
  }
  return 0;
}


