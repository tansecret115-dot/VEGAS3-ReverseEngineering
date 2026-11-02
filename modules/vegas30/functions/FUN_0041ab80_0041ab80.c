/* Module: vegas30.exe
   Function: FUN_0041ab80
   Address: 0041ab80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041ab80(int param_1,int *param_2)

{
  int *unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  int iVar1;
  int *unaff_EDI;
  int *piVar2;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  int *piStack_30;
  int *piStack_2c;
  int **ppiStack_28;
  int *local_14;
  int aiStack_10 [3];
  undefined4 uStack_4;
  
  iVar1 = 0;
  if (*(int *)(*(int *)(param_1 + 0x94) + 4) == 2) {
    ppiStack_28 = (int **)0x41aba4;
    Transport_Suspend();
    ppiStack_28 = (int **)(*(int *)(param_1 + 0x94) + 0x38);
    piStack_2c = (int *)0x41abb3;
    FUN_005d13b0();
    ppiStack_28 = &local_14;
    local_14 = (int *)0x0;
    piStack_2c = param_2;
    piStack_30 = (int *)0x41abca;
    iVar1 = (**(code **)(*param_2 + 0xb8))();
    if ((iVar1 < 0) || (unaff_EBP == (int *)0x0)) {
      return -1;
    }
    puStack_34 = &uStack_4;
    piStack_30 = (int *)0x0;
    uStack_4 = 0;
    uStack_38 = 1;
    iVar1 = (**(code **)(*unaff_EBP + 0xc))();
    if (DAT_0064a52c == 0) {
      while (local_14 != (int *)0x0) {
        aiStack_10[0] = 0;
        FUN_005d0d80(local_14,aiStack_10);
        if (aiStack_10[0] != 0) {
          iVar1 = (**(code **)(*local_14 + 0x50))(local_14);
          (**(code **)(*unaff_EBX + 0x14))(unaff_EBX,&piStack_2c);
          FUN_005d1150(*(undefined4 *)(*(int *)(param_1 + 0x94) + 8),*(int *)(param_1 + 0x94),
                       unaff_EBP,puStack_34,piStack_30,piStack_2c,ppiStack_28,iVar1 == 0);
          (**(code **)(*unaff_EBP + 8))(unaff_EBP);
        }
        (**(code **)(*local_14 + 8))(local_14);
        unaff_EBX = (int *)0x0;
        iVar1 = (**(code **)(*piStack_30 + 0xc))(piStack_30,1,&stack0xffffffe8,0);
      }
    }
    else {
      while (local_14 != (int *)0x0) {
        piVar2 = aiStack_10;
        aiStack_10[0] = 0;
        (**(code **)(*local_14 + 0x10))(local_14,&DAT_0062f6f8,piVar2);
        if (unaff_EBP != (int *)0x0) {
          iVar1 = (**(code **)(*unaff_ESI + 0x50))(unaff_ESI);
          (**(code **)(*unaff_EDI + 0x14))(unaff_EDI,&uStack_38);
          FUN_005d1050(*(undefined4 *)(*(int *)(param_1 + 0x94) + 8),*(int *)(param_1 + 0x94),
                       ppiStack_28,piVar2,unaff_EBP,uStack_38,puStack_34,iVar1 == 0);
          (*(code *)(*ppiStack_28)[2])(ppiStack_28);
        }
        (**(code **)(*unaff_ESI + 8))(unaff_ESI);
        unaff_EDI = (int *)0x0;
        iVar1 = (**(code **)(*unaff_EBP + 0xc))(unaff_EBP,1,&stack0xffffffdc,0);
      }
    }
    if (-1 < iVar1) {
      (**(code **)(*param_2 + 0x94))(param_2);
    }
    Transport_Resume(0);
    (**(code **)(*piStack_2c + 8))(piStack_2c);
  }
  return iVar1;
}


