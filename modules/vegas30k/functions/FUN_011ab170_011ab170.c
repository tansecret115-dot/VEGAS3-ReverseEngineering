/* Module: vegas30k.dll
   Function: FUN_011ab170
   Address: 011ab170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011ab170(int param_1,LPCSTR param_2)

{
  uint uVar1;
  int iMaxLength;
  
  uVar1 = lstrlenA(param_2);
  if (uVar1 < 0x104) {
    iMaxLength = lstrlenA(param_2);
  }
  else {
    iMaxLength = 0x103;
  }
  lstrcpynA((LPSTR)(param_1 + 0x4fc),param_2,iMaxLength);
  ((LPSTR)(param_1 + 0x4fc))[iMaxLength + -1] = '\0';
  return 0;
}


