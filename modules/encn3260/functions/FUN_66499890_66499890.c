/* Module: encn3260.dll
   Function: FUN_66499890
   Address: 66499890
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_66499890(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 extraout_var;
  short sVar5;
  int local_10;
  undefined4 local_c;
  int *local_8;
  
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 4;
  local_8 = (int *)0x0;
  local_10 = 0;
  local_c = 0;
  do {
    sVar5 = 0x7fa6;
    iVar1 = (**(code **)(*(int *)param_1[6] + 0x34))(&local_8,&local_10,&local_c);
    if ((iVar1 == 0) && (local_8 != (int *)0x0)) {
      piVar2 = operator_new(10);
      *piVar2 = (int)local_8;
      piVar2[1] = local_10;
      *(undefined2 *)(piVar2 + 2) = (undefined2)local_c;
      FUN_664baab0((void *)((int)param_1 + 0x31),piVar2);
    }
    else {
      sVar5 = 0;
    }
  } while ((iVar1 == 0) && (sVar5 != 0));
  if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
    if ((int *)((int)param_1 + 0x31) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)((int)param_1 + 0x41);
    }
    if (0 < iVar3) {
      iVar1 = FUN_66499ab0((int)param_1);
      if (iVar1 == 0) {
        *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb;
        return -0x7ffbffac;
      }
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfe;
      puVar4 = (undefined4 *)FUN_664ba9f0((int *)((int)param_1 + 0x31));
      local_8 = (int *)*puVar4;
      local_10 = puVar4[1];
      local_c = CONCAT22(extraout_var,*(undefined2 *)(puVar4 + 2));
      (**(code **)(*param_1 + 4))(param_1);
      (**(code **)(*(int *)param_1[5] + 0xc))((int *)param_1[5],0,local_8,local_10,local_c);
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
        local_8 = (int *)0x0;
      }
      if (puVar4 != (undefined4 *)0x0) {
        operator_delete(puVar4);
      }
      (**(code **)(*param_1 + 8))(param_1);
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb;
      return 0;
    }
  }
  if (((*(byte *)(param_1 + 0xb) & 2) == 0) &&
     (piVar2 = *(int **)((int)param_1 + 0x61), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x10))(piVar2,0,*(undefined4 *)((int)param_1 + 0x59),0x32,0);
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb;
  return iVar1;
}


