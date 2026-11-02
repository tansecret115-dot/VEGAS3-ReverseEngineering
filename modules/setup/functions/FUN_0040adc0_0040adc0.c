/* Module: Setup.exe
   Function: FUN_0040adc0
   Address: 0040adc0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCSTR FUN_0040adc0(LPCSTR param_1,LPCSTR param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = lstrlenA(param_1);
  uVar2 = lstrlenA(param_2);
  if (uVar1 <= uVar2) {
    iVar3 = lstrlenA(param_1);
    return param_2 + iVar3;
  }
  return param_1;
}


