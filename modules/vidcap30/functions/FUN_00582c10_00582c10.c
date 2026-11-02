/* Module: vidcap30.exe
   Function: FUN_00582c10
   Address: 00582c10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00582c10(short *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  sVar1 = *param_1;
  while (sVar1 != 0) {
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
    sVar1 = *param_1;
  }
  return iVar2;
}


