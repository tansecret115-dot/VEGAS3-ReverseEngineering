/* Module: vidcap30.exe
   Function: FUN_004af4d0
   Address: 004af4d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004af4d0(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -0x7ffb1ff5;
  *param_2 = 0;
  uVar2 = FUN_0052cfd0(param_1 + 0x77);
  *param_1 = uVar2;
  iVar3 = FUN_0052c8e0(param_1,param_1[0x76]);
  if (iVar3 == 0) {
    iVar4 = _SfDibAlloc_28(param_2,(-(*(int *)((int)param_1 + 0x9a) != 1) & 7U) + 0x14,
                           *(undefined4 *)((int)param_1 + 0x55),*(undefined4 *)((int)param_1 + 0x59)
                           ,0,0,0);
    if ((-1 < iVar4) && (piVar1 = (int *)*param_2, piVar1 != (int *)0x0)) {
      iVar4 = -0x7ffb1ff5;
      iVar3 = FUN_0052c940(param_1,param_1[0x76],*piVar1 + piVar1[8] * 4 + (int)piVar1,4,
                           param_1 + 0x98,0,0);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        _SfDibFree_8(*param_2,0);
      }
    }
    FUN_0052c820(param_1);
  }
  FUN_0052cc30(param_1[0x76]);
  FUN_0052c400(param_1);
  return iVar4;
}


