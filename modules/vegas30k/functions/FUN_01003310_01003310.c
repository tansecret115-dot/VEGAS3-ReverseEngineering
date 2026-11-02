/* Module: vegas30k.dll
   Function: FUN_01003310
   Address: 01003310
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01003310(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -0x7ffb1ff5;
  *param_2 = 0;
  uVar2 = FUN_01129230(param_1 + 0x77);
  *param_1 = uVar2;
  iVar3 = FUN_01128b40(param_1,param_1[0x76]);
  if (iVar3 == 0) {
    iVar4 = _SfDibAlloc_28(param_2,(-(*(int *)((int)param_1 + 0x9a) != 1) & 7U) + 0x14,
                           *(undefined4 *)((int)param_1 + 0x55),*(undefined4 *)((int)param_1 + 0x59)
                           ,0,0,0);
    if ((-1 < iVar4) && (piVar1 = (int *)*param_2, piVar1 != (int *)0x0)) {
      iVar4 = -0x7ffb1ff5;
      iVar3 = FUN_01128ba0(param_1,param_1[0x76],*piVar1 + piVar1[8] * 4 + (int)piVar1,4,
                           param_1 + 0x98,0,0);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        _SfDibFree_8(*param_2,0);
      }
    }
    FUN_01128a80(param_1);
  }
  FUN_01128e90(param_1[0x76]);
  FUN_01128660(param_1);
  return iVar4;
}


