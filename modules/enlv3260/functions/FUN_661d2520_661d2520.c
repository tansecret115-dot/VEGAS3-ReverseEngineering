/* Module: enlv3260.dll
   Function: FUN_661d2520
   Address: 661d2520
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_661d2520(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  FARPROC pFVar5;
  int *piVar6;
  char local_108 [256];
  int *local_8;
  
  piVar1 = param_1;
  if (*(int *)((int)param_1 + 0x5a) != 0) {
    return *(int *)((int)param_1 + 0x5a);
  }
  if (*(int *)((int)param_1 + 0x66) == 0) {
    puVar2 = operator_new(0x18);
    if (puVar2 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_661d3be0(puVar2);
    }
    *(undefined4 *)((int)piVar1 + 0x66) = uVar3;
    local_8 = (int *)0x100;
    FUN_661d3fd0(&DAT_661d61fc,s_encnet_661d6204,local_108,(uint *)&local_8);
    if ((*(int *)((int)*(void **)((int)piVar1 + 0x66) + 0xc) == 0) &&
       (iVar4 = FUN_661d3c60(*(void **)((int)piVar1 + 0x66),local_108,4), iVar4 != 0)) {
      return -0x7fffbffb;
    }
  }
  pFVar5 = FUN_661d3e20(*(void **)((int)piVar1 + 0x66),s_CreateContext_661d61ec);
  if (pFVar5 != (FARPROC)0x0) {
    piVar6 = (int *)(*pFVar5)();
    if (piVar6 != (int *)0x0) {
      (**(code **)*piVar6)(piVar6,&DAT_661d5280,piVar1 + 5);
      (**(code **)*piVar6)(piVar6,&DAT_661d52c0,piVar1 + 6);
      (**(code **)(*piVar6 + 8))(piVar6);
    }
    puVar2 = (undefined4 *)piVar1[5];
    if (puVar2 != (undefined4 *)0x0) {
      if (piVar1[7] == 0) {
        (**(code **)*puVar2)(puVar2,&DAT_661d5470,piVar1 + 7);
      }
      piVar6 = (int *)piVar1[7];
      param_1 = (int *)0x0;
      iVar4 = (**(code **)(*piVar6 + 0xc))(piVar6,&DAT_661d5680,&param_1);
      if (-1 < iVar4) {
        iVar4 = (**(code **)(*param_1 + 0x1c))(param_1,piVar1[0x12]);
      }
      puVar2 = (undefined4 *)piVar1[5];
      if (puVar2 != (undefined4 *)0x0) {
        if (*(int *)((int)piVar1 + 0x56) != 0) {
          local_8 = (int *)0x0;
          iVar4 = (**(code **)*puVar2)(puVar2,&DAT_661d52d0,&local_8);
          if ((-1 < iVar4) &&
             ((**(code **)(*local_8 + 0xc))(local_8,*(undefined4 *)((int)piVar1 + 0x56)),
             local_8 != (int *)0x0)) {
            (**(code **)(*local_8 + 8))(local_8);
          }
        }
        if (piVar1 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = piVar1 + 1;
        }
        iVar4 = (**(code **)(*(int *)piVar1[5] + 0xc))
                          ((int *)piVar1[5],piVar1[9],(short)piVar1[0x15],param_1,piVar1[0xc],
                           piVar1[0xf],piVar6);
      }
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
      }
      return iVar4;
    }
  }
  return -0x7fffbffb;
}


