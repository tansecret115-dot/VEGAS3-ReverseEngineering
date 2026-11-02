/* Module: vegas30k.dll
   Function: FUN_011a7890
   Address: 011a7890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011a7890(int param_1,LPCSTR param_2)

{
  int iVar1;
  
  if (param_2 == (LPCSTR)0x0) {
    return 0x80004003;
  }
  iVar1 = lstrlenA(param_2);
  if (iVar1 + 1U < 0x104) {
    iVar1 = lstrlenA(param_2);
    iVar1 = iVar1 + 1;
  }
  else {
    iVar1 = 0x103;
  }
  lstrcpynA((LPSTR)(param_1 + 0x1ec),param_2,iVar1);
  ((LPSTR)(param_1 + 0x1ec))[iVar1 + -1] = '\0';
  return 0;
}


