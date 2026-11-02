/* Module: vidpcore.dll
   Function: FUN_5de424e0
   Address: 5de424e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de424e0(int param_1)

{
  int **ppiVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int **ppiStack_10;
  int *local_4;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + -0xe4;
  }
  ppiStack_10 = &local_4;
  puVar2 = (undefined4 *)(DAT_5df1b984 + param_1);
  iVar3 = (**(code **)*puVar2)(puVar2,&DAT_5df38bf8);
  if (iVar3 < 0) {
    FUN_5de08870(param_1,&PTR_DAT_5df1b980,&DAT_5df38bf8,&ppiStack_10);
  }
  ppiVar1 = ppiStack_10;
  iVar3 = -0x7fffbffb;
  if (ppiStack_10 != (int **)0x0) {
    piVar4 = (int *)0x0;
    iVar3 = (**(code **)(*local_4 + 0xc))
                      (local_4,PTR_u_Contents_5df3d4b4,0x1012,0,0,&stack0xfffffff8);
    if (-1 < iVar3) {
      iVar3 = (*(code *)(*ppiVar1)[6])(ppiVar1,piVar4,puVar2);
    }
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    (*(code *)(*ppiVar1)[2])(ppiVar1);
  }
  return iVar3;
}


