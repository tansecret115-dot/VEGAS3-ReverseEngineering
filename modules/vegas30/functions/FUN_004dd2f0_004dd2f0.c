/* Module: vegas30.exe
   Function: FUN_004dd2f0
   Address: 004dd2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004dd2f0(undefined4 param_1,undefined4 param_2,int param_3)

{
  LPCSTR lpString2;
  
  if (*(int *)(param_3 + 8) == -0x208) {
    lpString2 = (LPCSTR)FUN_0043b1a0(*(undefined4 *)(param_3 + 4));
    if (lpString2 != (LPCSTR)0x0) {
      lstrcpynA((LPSTR)(param_3 + 0x10),lpString2,0x50);
      *(undefined1 *)(param_3 + 0x5f) = 0;
    }
  }
  return 0;
}


