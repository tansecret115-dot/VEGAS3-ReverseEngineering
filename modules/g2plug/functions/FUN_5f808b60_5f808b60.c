/* Module: g2plug.dll
   Function: FUN_5f808b60
   Address: 5f808b60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f808b60(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  piVar2 = param_2;
  piVar1 = param_1;
  if ((*(int *)((int)param_1 + 0x42f) != 0) &&
     (local_4 = *(int *)((int)param_1 + 0x437), 0 < local_4)) {
    iVar4 = 0;
    do {
      iVar3 = FUN_5f808c30(*(int *)((int)piVar1 + 0x433) + iVar4,&param_2);
      if (iVar3 != 0) {
        (**(code **)(*piVar2 + 0x10))(piVar2,param_2,*(int *)((int)piVar1 + 0x433) + 0x24 + iVar4);
        (**(code **)(*piVar2 + 0xc))
                  (piVar2,*(undefined4 *)(*(int *)((int)piVar1 + 0x433) + iVar4),0);
        iVar3 = (**(code **)*piVar2)(piVar2,&DAT_5f86a5f0,&stack0xffffffec);
        if ((-1 < iVar3) &&
           ((**(code **)(*(int *)piVar1[0x1b4] + 0x18))((int *)piVar1[0x1b4],param_1),
           param_1 != (int *)0x0)) {
          (**(code **)(*param_1 + 8))(param_1);
          param_1 = (int *)0x0;
        }
      }
      iVar4 = iVar4 + 0x328;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return 0;
}


