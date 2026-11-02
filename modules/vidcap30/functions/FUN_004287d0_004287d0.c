/* Module: vidcap30.exe
   Function: FUN_004287d0
   Address: 004287d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004287d0(int param_1)

{
  LPCSTR lpString;
  int iVar1;
  
  lpString = (LPCSTR)(param_1 + 0x85c);
  iVar1 = lstrlenA(lpString);
  if (iVar1 != 0) {
    iVar1 = FUN_0045b8c0(lpString);
    if (iVar1 != 0) {
      *lpString = '\0';
    }
  }
  return;
}


