/* Module: sfpagepeel.dll
   Function: FUN_00405d30
   Address: 00405d30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00405d30(int param_1)

{
  int **ppiVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int **ppiStack_10;
  int *local_4;
  
  if (param_1 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = param_1 + -0xe4;
  }
  ppiStack_10 = &local_4;
  puVar2 = (undefined4 *)(DAT_0046ffac + iVar4);
  iVar3 = (**(code **)*puVar2)(puVar2,&DAT_004797d8);
  if (iVar3 < 0) {
    FUN_00405b40(iVar4,(int *)&PTR_DAT_0046ffa8,(int *)&DAT_004797d8,&ppiStack_10);
  }
  ppiVar1 = ppiStack_10;
  iVar4 = -0x7fffbffb;
  if (ppiStack_10 != (int **)0x0) {
    piVar5 = (int *)0x0;
    iVar4 = (**(code **)(*local_4 + 0xc))
                      (local_4,PTR_u_Contents_0047c264,0x1012,0,0,&stack0xfffffff8);
    if (-1 < iVar4) {
      iVar4 = (*(code *)(*ppiVar1)[6])(ppiVar1,piVar5,puVar2);
    }
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    (*(code *)(*ppiVar1)[2])(ppiVar1);
  }
  return iVar4;
}


