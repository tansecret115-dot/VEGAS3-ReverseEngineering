/* Module: vegas30k.dll
   Function: FUN_011a2610
   Address: 011a2610
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011a2610(int param_1,LPCSTR param_2)

{
  int iVar1;
  
  iVar1 = lstrlenA(param_2);
  if (iVar1 + 1U < 0x104) {
    iVar1 = lstrlenA(param_2);
    iVar1 = iVar1 + 1;
  }
  else {
    iVar1 = 0x103;
  }
  lstrcpynA((LPSTR)(param_1 + 0x1c),param_2,iVar1);
  ((LPSTR)(param_1 + 0x1c))[iVar1 + -1] = '\0';
  return 0;
}


