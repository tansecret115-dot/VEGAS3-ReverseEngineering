/* Module: sfppack3.dll
   Function: FUN_5cc722e2
   Address: 5cc722e2
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cc722e2(int param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  char *pcVar4;
  bool bVar5;
  int local_8;
  
  if (param_4 == 0) {
    local_8 = -0x7fffbffd;
  }
  else {
    if (param_2 != 0) {
      iVar1 = 0x10;
      bVar5 = true;
      pcVar2 = param_3;
      pcVar4 = "";
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar5 = *pcVar2 == *pcVar4;
        pcVar2 = pcVar2 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (!bVar5) {
        return -0x7fffbffe;
      }
    }
    local_8 = 0;
    if (&stack0x00000000 == (undefined1 *)0x8) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(**(code **)(*(int *)(param_1 + 4) + 8))(param_2,&local_8);
    }
    if (piVar3 == (int *)0x0) {
      if (-1 < local_8) {
        local_8 = -0x7ff8fff2;
      }
    }
    else if (local_8 < 0) {
      (**(code **)(*piVar3 + 0xc))(1);
    }
    else {
      (**(code **)(*piVar3 + 4))(piVar3);
      local_8 = (**(code **)*piVar3)(piVar3,param_3,param_4);
      (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  return local_8;
}


