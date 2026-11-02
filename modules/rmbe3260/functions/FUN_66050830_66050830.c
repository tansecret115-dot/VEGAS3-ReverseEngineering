/* Module: rmbe3260.dll
   Function: FUN_66050830
   Address: 66050830
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66050830(void *this,int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  if ((param_1[5] == 0) && (*(int *)((int)this + 0xc) == param_1[2])) {
    iVar1 = param_1[2] - param_1[1];
    iVar5 = (param_1[4] - iVar1) - param_1[3];
    iVar1 = (**(code **)(**(int **)((int)this + 4) + 8))(iVar1 + param_1[3],iVar5);
    *(undefined4 *)((int)this + 0x52) = 0;
    piVar3 = param_1;
    piVar4 = param_1;
    if (iVar5 <= iVar1) {
      do {
        *(int *)((int)this + 0xc) = piVar3[2] + iVar5;
        piVar4 = (int *)*piVar3;
        if (piVar3 != param_1) {
          operator_delete((void *)piVar3[3]);
          operator_delete(piVar3);
        }
        if (((piVar4 == (int *)0x0) || (piVar4[5] != 0)) ||
           (piVar4 == (int *)*(int *)((int)this + 0x38))) {
          *param_1 = (int)piVar4;
          return 0;
        }
        iVar5 = (piVar4[4] - (piVar4[2] - piVar4[1])) - piVar4[3];
        iVar1 = (**(code **)(**(int **)((int)this + 4) + 8))
                          ((piVar4[2] - piVar4[1]) + piVar4[3],iVar5);
        *(undefined4 *)((int)this + 0x52) = 0;
        piVar3 = piVar4;
      } while (iVar5 <= iVar1);
    }
    if (iVar1 < 0) {
      iVar1 = (**(code **)(**(int **)((int)this + 4) + 0x14))();
      if (iVar1 != 0x2733) {
        uVar2 = (**(code **)(**(int **)((int)this + 4) + 0x14))();
        *(undefined4 *)((int)this + 0x40) = uVar2;
        if (piVar4 == param_1) {
          return 0xffffffff;
        }
        *param_1 = (int)piVar4;
        return 0xffffffff;
      }
      *(undefined4 *)((int)this + 0x52) = 1;
    }
    else {
      iVar5 = piVar4[2];
      piVar4[2] = iVar5 + iVar1;
      *(int *)((int)this + 0xc) = iVar5 + iVar1;
    }
    if (piVar4 != param_1) {
      *param_1 = (int)piVar4;
      return 0;
    }
  }
  return 0xffffffff;
}


