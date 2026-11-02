/* Module: vidcap30.exe
   Function: FUN_0053fc00
   Address: 0053fc00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0053fc00(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = **(int **)(param_1 + 0x44);
  if (0 < iVar1) {
    while ((piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x44) + 8) + iVar4 * 4),
           piVar2[1] != 0xffff || (*piVar2 != 0xffff))) {
      iVar3 = FUN_00540950(param_2,param_3,piVar2);
      if (iVar3 == 1) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      if (iVar1 <= iVar4) {
        return iVar3;
      }
    }
  }
  return 0;
}


