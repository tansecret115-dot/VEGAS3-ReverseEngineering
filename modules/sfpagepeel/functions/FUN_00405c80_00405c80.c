/* Module: sfpagepeel.dll
   Function: FUN_00405c80
   Address: 00405c80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00405c80(int param_1)

{
  int **ppiVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int **ppiStack_10;
  int *local_4;
  
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_1 + -0xe4;
  }
  ppiStack_10 = &local_4;
  iVar2 = (*(code *)**(undefined4 **)(DAT_0046ffac + iVar3))
                    ((undefined4 *)(DAT_0046ffac + iVar3),&DAT_004797d8);
  if (iVar2 < 0) {
    FUN_00405b40(iVar3,(int *)&PTR_DAT_0046ffa8,(int *)&DAT_004797d8,&ppiStack_10);
  }
  ppiVar1 = ppiStack_10;
  iVar3 = -0x7fffbffb;
  if (ppiStack_10 != (int **)0x0) {
    piVar4 = (int *)0x0;
    iVar3 = (**(code **)(*local_4 + 0x10))(local_4,L"Contents",0,0x10,0,&stack0xfffffff8);
    if (-1 < iVar3) {
      iVar3 = (*(code *)(*ppiVar1)[5])(ppiVar1,piVar4);
    }
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    (*(code *)(*ppiVar1)[2])(ppiVar1);
  }
  return iVar3;
}


