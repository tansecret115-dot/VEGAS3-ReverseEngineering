/* Module: rmto3260.dll
   Function: FUN_662c91f0
   Address: 662c91f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c91f0(int param_1,int *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  uint local_10;
  undefined4 uStack_c;
  uint local_8;
  
  puVar3 = (undefined4 *)0x0;
  local_8 = 0;
  local_18 = 0;
  uStack_14 = 0;
  uStack_c = 0;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x6c))
                    (*(int **)(param_1 + 0x40),(short)param_2[1],*(undefined4 *)(param_1 + 0x2c),
                     &local_8,&uStack_c);
  if ((-1 < iVar1) && (*(uint *)(param_1 + 0x2c) <= local_8)) {
    *param_3 = local_8;
    return iVar1;
  }
  if (-1 < iVar1) {
    puVar3 = operator_new(0xca);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)FUN_662d8440(puVar3);
    }
    if (puVar3 == (undefined4 *)0x0) {
      iVar1 = -0x7ff8fff2;
    }
    if (-1 < iVar1) {
      iVar1 = FUN_662d8cc0(puVar3,*param_2,1);
      if (-1 < iVar1) {
        param_2 = (int *)0x0;
        iVar1 = FUN_662d9e80(puVar3,&local_18,(uint *)&param_2);
        if (-1 < iVar1) {
          uStack_c = 0;
          local_10 = *(int *)(param_1 + 0x2c) - local_8;
          ceil((double)local_10 / (double)CONCAT44(uStack_14,local_18));
          uVar2 = ftol();
          local_10 = local_8;
          uStack_c = 0;
          floor((double)local_8 + (double)uVar2 * (double)CONCAT44(uStack_14,local_18));
          uVar2 = ftol();
          *param_3 = uVar2;
          goto LAB_662c9313;
        }
      }
    }
  }
  *param_3 = 0;
LAB_662c9313:
  if (puVar3 != (undefined4 *)0x0) {
    FUN_662d8540(puVar3);
    operator_delete(puVar3);
  }
  return iVar1;
}


