/* Module: vegas30.exe
   Function: FUN_004ebbd0
   Address: 004ebbd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004ebbd0(undefined4 param_1)

{
  LPCSTR lpString1;
  int iVar1;
  
  lpString1 = (LPCSTR)_SfGetFileNameExtensionPtrA_4(param_1);
  iVar1 = lstrcmpA(lpString1,".cda");
  if (iVar1 != 0) {
    iVar1 = lstrcmpA(lpString1,".CDA");
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}


