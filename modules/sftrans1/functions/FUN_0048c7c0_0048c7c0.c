/* Module: sftrans1.dll
   Function: FUN_0048c7c0
   Address: 0048c7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_0048c7c0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (param_3 < param_2) {
    iVar2 = param_3;
    param_3 = param_2;
  }
  FUN_0048c830(iVar2,param_4,param_5);
  do {
    iVar2 = iVar2 + 1;
    if (param_3 + 1 <= iVar2) {
      return 1;
    }
  } while (((-1 < iVar2) && (iVar2 < **(int **)(param_1 + 0xa4))) &&
          (iVar1 = FUN_0048c830(iVar2,param_4,0), iVar1 != 0));
  return 0;
}


