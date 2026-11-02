/* Module: vegas30.exe
   Function: FUN_004491d0
   Address: 004491d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004491d0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0xb4);
  if ((iVar1 != 0) && (-1 < param_2)) {
    piVar2 = *(int **)(iVar1 + 0x60);
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar2;
    }
    if (param_2 < iVar4) {
      iVar4 = piVar2[2];
      iVar3 = piVar2[1];
      *(int *)(iVar1 + 100) = param_2;
      _SfVideoKeyframe_SetTransformParam_20
                (*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(iVar3 * param_2 + iVar4),
                 *(undefined4 *)(iVar3 * param_2 + 4 + iVar4),0xffffffff,0xffffffff);
    }
  }
  return;
}


