/* Module: Setup.exe
   Function: FUN_0042e020
   Address: 0042e020
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0042e020(char *param_1,int param_2,LPSTR param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = -param_2 - 1;
  if (param_3 == (LPSTR)0x0) {
    param_3 = CharUpperA(param_1);
  }
  cVar1 = *param_1;
  uVar2 = CONCAT31((int3)((uint)param_3 >> 8),cVar1);
  while (cVar1 != '\0') {
    uVar3 = FUN_0042dff0(uVar2,uVar3);
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    uVar2 = CONCAT31((int3)(uVar3 >> 8),cVar1);
  }
  return uVar3;
}


