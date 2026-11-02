/* Module: sfcdi.dll
   Function: FUN_5bf51c80
   Address: 5bf51c80
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5bf51c80(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  void *_Dst;
  int iVar7;
  
  iVar7 = 0;
  piVar1 = *(int **)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x20);
  if (piVar1 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar1;
  }
  if ((-1 < iVar2) && (iVar2 <= iVar5 + -1)) {
    iVar7 = piVar1[1] * iVar2 + piVar1[2];
  }
  uVar4 = *(int *)(iVar7 + 4) - *(int *)(param_1 + 0x40);
  if ((uint)(param_3 / 0x930) <= uVar4) {
    uVar4 = param_3 / 0x930;
  }
  *(uint *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + uVar4;
  if (uVar4 != 0) {
    _Dst = (void *)(param_2 + 0x10);
    uVar6 = uVar4;
    do {
      memmove(_Dst,(void *)(iVar7 + 0xc),8);
      _Dst = (void *)((int)_Dst + 0x930);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = *(uint *)(param_1 + 0x40);
  uVar3 = *(uint *)(iVar7 + 4);
  *param_4 = uVar4 * 0x930;
  return uVar6 < uVar3;
}


