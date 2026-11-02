/* Module: mp3plug.dll
   Function: FUN_5f6ceee0
   Address: 5f6ceee0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_5f6ceee0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (param_1 < param_2) {
    iVar2 = param_1;
    param_1 = param_2;
  }
  do {
    iVar1 = iVar2;
    iVar2 = param_1 % iVar1;
    param_1 = iVar1;
  } while (iVar2 != 0);
  return iVar1;
}


