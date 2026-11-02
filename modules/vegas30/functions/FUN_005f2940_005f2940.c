/* Module: vegas30.exe
   Function: FUN_005f2940
   Address: 005f2940
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005f2940(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  
  iVar4 = 0;
  piVar1 = (int *)(param_1 + 0x130);
  if (((*(int *)(param_1 + 0x130) != 0) ||
      (iVar4 = _SfList_CreateExZ_32(piVar1,4,0xffffffff,0xffffffff,0x40000002,0,0,0), -1 < iVar4))
     && (iVar3 = param_2, piVar2 = (int *)*piVar1, piVar2 != (int *)0x0)) {
    iVar4 = *piVar2;
    iVar7 = -1;
    if (0 < iVar4) {
      piVar6 = (int *)piVar2[2];
      do {
        if (*(int *)(*piVar6 + 4) == param_2) {
          iVar7 = iVar7 + 1;
        }
        piVar6 = piVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    uVar5 = 0x98;
    if (param_2 == 2) {
      uVar5 = 0xaa;
    }
    else if (param_2 == 3) {
      uVar5 = 0x4c0;
    }
    param_2 = 0;
    iVar4 = _SfList_AllocAndInsertItem_20(piVar2,0,uVar5,0xffffffff,&param_2);
    if (-1 < iVar4) {
      if (*(int *)(*(int *)(*piVar1 + 8) + param_2 * 4) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_005f6860();
      }
      *(int *)(iVar4 + 4) = iVar3;
      *(int *)(iVar4 + 8) = param_1;
      *(uint *)(iVar4 + 0x8c) = *(uint *)(iVar4 + 0x8c) | 0x80;
      *(int *)(iVar4 + 0x10) = param_2;
      *(int *)(iVar4 + 0xc) = iVar7 + 1;
      *param_3 = iVar4;
      iVar4 = 0;
    }
  }
  return iVar4;
}


