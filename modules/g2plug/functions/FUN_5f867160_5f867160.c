/* Module: g2plug.dll
   Function: FUN_5f867160
   Address: 5f867160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f867160(undefined4 param_1,int param_2,int param_3)

{
  LPCSTR lpString2;
  uint uVar1;
  
  if (*(int *)(param_3 + 8) == -0x208) {
    if (param_2 == 0x133) {
      uVar1 = 0x10b0;
    }
    else {
      if (param_2 != 0x134) {
        return 0;
      }
      uVar1 = 0x10b1;
    }
    lpString2 = FUN_5f818540(DAT_5f877520,uVar1);
    if (lpString2 != (LPCSTR)0x0) {
      lstrcpynA((LPSTR)(param_3 + 0x10),lpString2,0x50);
      *(undefined1 *)(param_3 + 0x5f) = 0;
      return 1;
    }
  }
  return 0;
}


