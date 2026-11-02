/* Module: sftrans1.dll
   Function: FUN_00445500
   Address: 00445500
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00445500(int param_1)

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
  iVar2 = (*(code *)**(undefined4 **)(DAT_005590bc + param_1))
                    ((undefined4 *)(DAT_005590bc + param_1),&DAT_0056f6e8);
  if (iVar2 < 0) {
    FUN_00408210(param_1,&PTR_DAT_005590b8,&DAT_0056f6e8,&ppiStack_10);
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


