/* Module: vegas30k.dll
   Function: FUN_01023e90
   Address: 01023e90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01023e90(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  int local_4;
  
  if ((param_1 != (int *)0x0) && (param_3 != (int *)0x0)) {
    local_4 = 0;
    do {
      iVar2 = 0;
      piVar3 = param_1;
      if (0 < param_2) {
        do {
          iVar1 = 4;
          bVar6 = true;
          piVar4 = param_3;
          piVar5 = piVar3;
          do {
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            bVar6 = *piVar4 == *piVar5;
            piVar4 = piVar4 + 1;
            piVar5 = piVar5 + 1;
          } while (bVar6);
          if (bVar6) {
            piVar3 = param_1 + iVar2 * 8 + 4;
            *param_3 = *piVar3;
            param_3[1] = piVar3[1];
            param_3[2] = piVar3[2];
            param_3[3] = piVar3[3];
            break;
          }
          iVar2 = iVar2 + 1;
          piVar3 = piVar3 + 8;
        } while (iVar2 < param_2);
      }
    } while ((iVar2 != param_2) && (local_4 = local_4 + 1, local_4 < 100));
  }
  return;
}


