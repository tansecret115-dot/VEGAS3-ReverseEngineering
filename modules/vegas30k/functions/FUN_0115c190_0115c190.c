/* Module: vegas30k.dll
   Function: FUN_0115c190
   Address: 0115c190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0115c190(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)param_1 + 0x1a5);
  *(undefined4 *)(*param_1 + 0x14) = 0x75;
  *(int *)(*param_1 + 0x18) = iVar3;
  *(int *)(*param_1 + 0x1c) = param_2;
  (**(code **)(*param_1 + 4))(param_1,0xffffffff);
  do {
    if (iVar3 < 0xc0) {
LAB_0115c1c5:
      iVar2 = 2;
    }
    else if ((((iVar3 < 0xd0) || (0xd7 < iVar3)) || (iVar3 == (param_2 + 1U & 7) + 0xd0)) ||
            (iVar3 == (param_2 + 2U & 7) + 0xd0)) {
      iVar2 = 3;
    }
    else {
      if ((iVar3 == (param_2 - 1U & 7) + 0xd0) || (iVar3 == (param_2 - 2U & 7) + 0xd0))
      goto LAB_0115c1c5;
      iVar2 = 1;
    }
    *(undefined4 *)(*param_1 + 0x14) = 0x60;
    *(int *)(*param_1 + 0x18) = iVar3;
    *(int *)(*param_1 + 0x1c) = iVar2;
    (**(code **)(*param_1 + 4))(param_1,4);
    if (iVar2 == 1) {
      *(undefined4 *)((int)param_1 + 0x1a5) = 0;
      return 1;
    }
    if (iVar2 == 2) {
      cVar1 = FUN_0115c290(param_1);
      if (cVar1 == '\0') {
        return 0;
      }
      iVar3 = *(int *)((int)param_1 + 0x1a5);
    }
    else if (iVar2 == 3) {
      return 1;
    }
  } while( true );
}


