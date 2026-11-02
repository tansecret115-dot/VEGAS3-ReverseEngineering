/* Module: vidpcore.dll
   Function: FUN_5de45670
   Address: 5de45670
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de45670(int param_1)

{
  int **ppiVar1;
  int iVar2;
  int *piVar3;
  int **ppiStack_10;
  int *local_4;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + -0xe4;
  }
  ppiStack_10 = &local_4;
  iVar2 = (*(code *)**(undefined4 **)(DAT_5df1baf4 + param_1))
                    ((undefined4 *)(DAT_5df1baf4 + param_1),&DAT_5df38bf8);
  if (iVar2 < 0) {
    FUN_5de08870(param_1,&PTR_DAT_5df1baf0,&DAT_5df38bf8,&ppiStack_10);
  }
  ppiVar1 = ppiStack_10;
  iVar2 = -0x7fffbffb;
  if (ppiStack_10 != (int **)0x0) {
    piVar3 = (int *)0x0;
    iVar2 = (**(code **)(*local_4 + 0x10))(local_4,L"Contents",0,0x10,0,&stack0xfffffff8);
    if (-1 < iVar2) {
      iVar2 = (*(code *)(*ppiVar1)[5])(ppiVar1,piVar3);
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
    (*(code *)(*ppiVar1)[2])(ppiVar1);
  }
  return iVar2;
}


