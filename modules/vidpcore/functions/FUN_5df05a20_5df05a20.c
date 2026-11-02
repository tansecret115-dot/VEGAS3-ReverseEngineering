/* Module: vidpcore.dll
   Function: FUN_5df05a20
   Address: 5df05a20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5df05a20(int param_1)

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
      uVar4 = FUN_5ded1800(iVar2 * iVar3 * 0x913);
      FUN_5df045b0(param_1,iVar5,&local_158);
      fVar6 = (float10)FUN_5df04000(uVar4);
      local_158 = (double)fVar6;
      fVar6 = (float10)FUN_5df04000(uVar4);
      local_150 = (double)fVar6;
      FUN_5ded17e0(uVar4);
      FUN_5df04600(param_1,iVar5,&local_158);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  InvalidateRect(*(HWND *)(param_1 + 0x2c0),(RECT *)0x0,0);
  return 0;
}


