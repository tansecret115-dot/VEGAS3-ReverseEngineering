/* Module: sftrans1.dll
   Function: FUN_00474860
   Address: 00474860
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00474860(undefined **param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_10;
  undefined4 *puStack_c;
  int local_8;
  int local_4;
  
  iVar4 = 0;
  *param_1 = (undefined *)0x0;
  iVar1 = FUN_004dd740(&local_10,0x20,0xffffffff,0xffffffff,0x40000000,0,0,0);
  if (-1 < iVar1) {
    *param_1 = (undefined *)local_10;
    param_1 = &PTR_FUN_00574508;
    param_2 = param_2 + 0x40;
    local_4 = iVar1;
    do {
      if (*(int *)(param_2 + 0x10) != 0) {
        FUN_00474340(param_3);
        local_8 = ftol();
        iVar3 = 0;
        iVar5 = iVar4;
        if (0 < local_8) {
          do {
            puVar2 = calloc(1,0x68);
            if (puVar2 == (undefined4 *)0x0) {
              return -0x7ff8fff2;
            }
            puVar6 = puVar2;
            for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            (*(code *)*param_1)(puVar2,param_3);
            iVar4 = iVar5 + 1;
            puStack_c = puVar2;
            FUN_004dc110(local_10,iVar5,&puStack_c,1);
            iVar3 = iVar3 + 1;
            iVar5 = iVar4;
            iVar1 = local_4;
          } while (iVar3 < local_8);
        }
      }
      param_2 = param_2 + 0x20;
      param_1 = param_1 + 1;
    } while ((int)param_1 < 0x574524);
  }
  return iVar1;
}


