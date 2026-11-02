/* Module: oggplug.dll
   Function: FUN_0042feb0
   Address: 0042feb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_0042feb0(int param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_3) {
    iVar1 = param_1 - (int)param_2;
    do {
      iVar2 = toupper((int)param_2[iVar1]);
      iVar3 = toupper((int)*param_2);
      if (iVar2 != iVar3) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      param_2 = param_2 + 1;
    } while (iVar4 < param_3);
  }
  return 0;
}


