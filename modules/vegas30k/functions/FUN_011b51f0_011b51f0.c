/* Module: vegas30k.dll
   Function: FUN_011b51f0
   Address: 011b51f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_011b51f0(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c [6];
  int *piStack_14;
  int *piStack_c;
  
  piVar2 = param_2;
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  local_2c[0] = DAT_011eec94;
  local_2c[3] = *(undefined4 *)(param_1 + 0xc);
  local_30 = DAT_011eec90;
  local_2c[2] = DAT_011eec9c;
  local_38 = 0x1c;
  local_34 = 0;
  local_2c[1] = DAT_011eec98;
  param_2 = (int *)0x0;
  iVar4 = (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),&local_38,&param_2,0)
  ;
  piVar3 = piStack_c;
  if (-1 < iVar4) {
    puVar6 = local_2c;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    piVar1 = *(int **)(param_1 + 0x10);
    piStack_14 = piVar3;
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    iVar5 = _SfList_InsertList_16(piVar1,0xffffffff,local_2c,1);
    if (iVar5 < 0) {
      (**(code **)(*piStack_c + 8))(piStack_c);
      return (int *)0x0;
    }
    if ((piVar2 != (int *)0x0) &&
       (iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 4) * iVar4 +
                *(int *)(*(int *)(param_1 + 0x10) + 8), *piVar2 = iVar4, iVar4 == 0)) {
      (**(code **)(*piStack_c + 8))(piStack_c);
      return (int *)0x0;
    }
  }
  return piStack_c;
}


