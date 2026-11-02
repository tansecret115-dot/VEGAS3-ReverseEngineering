/* Module: vegas30k.dll
   Function: FUN_011a5a70
   Address: 011a5a70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011a5a70(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *unaff_EBX;
  int *unaff_ESI;
  int iVar3;
  int *unaff_EDI;
  int *unaff_retaddr;
  int *piVar4;
  int *piVar5;
  int *piStack_18;
  int *piStack_14;
  int *piStack_4;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    piVar1 = (int *)piVar1[2];
    do {
      piVar5 = (int *)*piVar1;
      if (*piVar5 == param_2) {
        if (param_4 == 0) {
          if (piVar5[0x42] == 0) {
            return 1;
          }
          piStack_18 = (int *)piVar5[0x45];
          piStack_14 = &param_2;
          (**(code **)(*piStack_18 + 0x48))();
          if (unaff_retaddr == (int *)0x0) {
            return 1;
          }
          piVar5 = unaff_retaddr;
          (**(code **)(*unaff_retaddr + 0x14))();
          (**(code **)(*piStack_4 + 0x10))(piStack_4,unaff_retaddr);
          piVar4 = (int *)0x0;
          piVar1 = unaff_ESI;
          iVar3 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,1,&piStack_18);
          if (iVar3 == 0) {
            (**(code **)(*piVar4 + 0x1c))(piVar4,unaff_EDI,unaff_ESI);
            (**(code **)(*piVar1 + 8))(piVar1);
          }
          (**(code **)(*piVar5 + 8))(piVar5);
          return iVar3;
        }
        if (piVar5[0x43] == 0) {
          return 1;
        }
        piStack_18 = (int *)piVar5[0x45];
        piStack_14 = &param_1;
        (**(code **)(*piStack_18 + 0x44))();
        if (piStack_4 == (int *)0x0) {
          return 1;
        }
        (**(code **)(*piStack_4 + 0x14))(piStack_4);
        (**(code **)(*unaff_EBX + 0x10))(unaff_EBX);
        iVar3 = (**(code **)(*unaff_EDI + 0xc))(unaff_EDI,1,&piStack_4,0);
        if (iVar3 == 0) {
          (**(code **)(*piStack_14 + 0x1c))(piStack_14,unaff_EDI,unaff_ESI);
          (**(code **)(*unaff_retaddr + 8))(unaff_retaddr);
        }
        (**(code **)(*unaff_retaddr + 8))(unaff_retaddr);
        return iVar3;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < iVar3);
  }
  return 1;
}


