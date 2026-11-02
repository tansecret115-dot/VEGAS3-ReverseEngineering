/* Module: vidcap30.exe
   Function: FUN_00540eb0
   Address: 00540eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00540eb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = **(int **)(param_1 + 0x44);
  uVar2 = 0;
  if (0 < iVar1) {
    while( true ) {
      uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x44) + 8) + iVar4 * 4);
      iVar3 = FUN_00540950(param_2,param_3,uVar2);
      if (iVar3 != 0) break;
      iVar4 = iVar4 + 1;
      if (iVar1 <= iVar4) {
        return 0;
      }
    }
  }
  return uVar2;
}


