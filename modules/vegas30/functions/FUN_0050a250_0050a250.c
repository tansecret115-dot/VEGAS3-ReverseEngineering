/* Module: vegas30.exe
   Function: FUN_0050a250
   Address: 0050a250
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0050a250(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  int local_11c [69];
  byte local_8;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (int *)0x0)) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    iVar1 = FUN_00508c40(param_1);
    do {
      FUN_00508ba0(param_2,local_11c);
      if ((local_8 & 2) != 0) {
        iVar2 = 4;
        bVar5 = true;
        piVar3 = local_11c;
        piVar4 = &DAT_0061a2b0;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar5 = *piVar3 == *piVar4;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
        } while (bVar5);
        if (!bVar5) {
          *param_3 = local_11c[0];
          param_3[1] = local_11c[1];
          param_3[2] = local_11c[2];
          param_3[3] = local_11c[3];
          return;
        }
      }
      param_2 = FUN_0050a790(param_1,param_2);
    } while (param_2 != iVar1);
  }
  return;
}


