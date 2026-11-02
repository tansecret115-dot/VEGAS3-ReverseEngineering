/* Module: sftrans1.dll
   Function: FUN_0045ce40
   Address: 0045ce40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

int __thiscall FUN_0045ce40(int *param_1,int *param_2,uint param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int local_48 [18];
  
  iVar6 = 0;
  if (param_3 == 0) {
    param_3 = 0;
    param_4 = 0;
    while (param_3 < (uint)param_1[0x1f]) {
      piVar5 = *(int **)(param_1[0x28] + 4 + param_4);
      if (piVar5 != (int *)0x0) {
        local_48[0] = 0;
        iVar6 = (**(code **)(*piVar5 + 0x1c))(piVar5,local_48);
        piVar7 = local_48;
        piVar5 = param_2 + 3;
        iVar3 = 4;
        do {
          piVar7 = piVar7 + 2;
          iVar4 = piVar5[-1];
          if (*piVar7 <= piVar5[-1]) {
            iVar4 = *piVar7;
          }
          iVar1 = *(int *)(((int)local_48 - (int)param_2) + (int)piVar5);
          piVar5[-1] = iVar4;
          iVar4 = *piVar5;
          if (*piVar5 <= iVar1) {
            iVar4 = iVar1;
          }
          *piVar5 = iVar4;
          piVar5 = piVar5 + 2;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + 0x18;
      if (iVar6 < 0) {
        return iVar6;
      }
    }
    if (iVar6 < 0) {
      return iVar6;
    }
  }
  else if (param_3 != 0) {
    do {
      piVar5 = (int *)(param_4 + 0xc);
      iVar6 = 4;
      piVar7 = param_2;
      do {
        piVar2 = piVar7 + 2;
        iVar3 = *(int *)((param_4 - (int)param_2) + (int)piVar2);
        iVar4 = *piVar2;
        if (iVar3 <= *piVar2) {
          iVar4 = iVar3;
        }
        *piVar2 = iVar4;
        iVar3 = piVar7[3];
        if (piVar7[3] <= *piVar5) {
          iVar3 = *piVar5;
        }
        piVar7[3] = iVar3;
        piVar5 = piVar5 + 2;
        iVar6 = iVar6 + -1;
        piVar7 = piVar2;
      } while (iVar6 != 0);
      param_4 = param_4 + 0x48;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    iVar6 = (**(code **)(*param_1 + 0x34))(param_2);
    return iVar6;
  }
  iVar6 = (**(code **)(*param_1 + 0x34))(param_2);
  return iVar6;
}


