/* Module: vegas30.exe
   Function: FUN_0058c800
   Address: 0058c800
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCSTR FUN_0058c800(int param_1,LPCSTR param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  LPCSTR pCVar4;
  int iVar5;
  
  pCVar4 = param_2;
  iVar3 = param_1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2 = (LPCSTR)MoveFileA((LPCSTR)(*(int *)(param_1 + 0x354) + 0x170),param_2);
  if (param_2 != (LPCSTR)0x0) {
    param_1 = 0;
    iVar5 = FUN_005ec8a0(pCVar4,&param_1,0,0);
    if ((-1 < iVar5) &&
       (iVar5 = FUN_00433850(uVar1,*(undefined4 *)(iVar3 + 0x354),param_1,0), -1 < iVar5)) {
      iVar5 = *(int *)(*(int *)(iVar3 + 0x354) + 0x130);
      if ((iVar5 != 0) && (*(int *)(param_1 + 0x130) != 0)) {
        iVar5 = **(int **)(iVar5 + 8);
        if (*(int *)(iVar5 + 0x60) != 0) {
          iVar2 = **(int **)(*(int *)(param_1 + 0x130) + 8);
          *(int *)(iVar2 + 0x60) = *(int *)(iVar5 + 0x60);
          *(undefined4 *)(iVar5 + 0x60) = 0;
          *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(iVar5 + 0x58);
          *(undefined4 *)(iVar5 + 0x58) = 0;
        }
      }
      FUN_005ed410(*(undefined4 *)(iVar3 + 0x354),1,0);
      *(int *)(iVar3 + 0x354) = param_1;
    }
  }
  return param_2;
}


