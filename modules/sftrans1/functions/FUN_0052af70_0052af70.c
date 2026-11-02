/* Module: sftrans1.dll
   Function: FUN_0052af70
   Address: 0052af70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052af70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  double local_158;
  double local_150;
  
  iVar5 = 0;
  iVar1 = **(int **)(param_1 + 0x308);
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  if (0 < iVar1) {
    do {
      iVar2 = rand();
      iVar3 = rand();
      uVar4 = FUN_004ddae0(iVar2 * iVar3 * 0x913);
      FUN_00529b00(param_1,iVar5,&local_158);
      fVar6 = (float10)FUN_00529550(uVar4);
      local_158 = (double)fVar6;
      fVar6 = (float10)FUN_00529550(uVar4);
      local_150 = (double)fVar6;
      FUN_004ddac0(uVar4);
      FUN_00529b50(param_1,iVar5,&local_158);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  InvalidateRect(*(HWND *)(param_1 + 0x2c0),(RECT *)0x0,0);
  return 0;
}


