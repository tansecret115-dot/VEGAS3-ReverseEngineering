/* Module: rmbe3260.dll
   Function: FUN_66059450
   Address: 66059450
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66059450(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  
  piVar3 = param_1;
  piVar1 = (int *)param_1[0x14];
  piVar2 = param_1 + 0x14;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *piVar2 = 0;
  }
  piVar1 = (int *)piVar3[0x15];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar3[0x15] = 0;
  }
  iVar4 = FUN_6605a550(piVar2);
  if (-1 < iVar4) {
    iVar4 = piVar3[6] * (uint)*(ushort *)(piVar3 + 8) * (uint)(*(ushort *)(piVar3 + 9) >> 3);
    iVar4 = (**(code **)(*(int *)*piVar2 + 0xc))
                      ((int *)*piVar2,piVar3[5],iVar4 * 5,iVar4,
                       CONCAT22(extraout_var,*(ushort *)(piVar3 + 9)));
    if (-1 < iVar4) {
      param_1 = (int *)0x0;
      (**(code **)*piVar3)(piVar3,&DAT_66064ee8,&param_1);
      iVar4 = (**(code **)(*(int *)*piVar2 + 0x20))((int *)*piVar2,param_1);
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
      }
      if (-1 < iVar4) {
        iVar5 = FUN_6605a550(piVar3 + 0x15);
        if (-1 < iVar5) {
          iVar5 = piVar3[7] * (uint)*(ushort *)((int)piVar3 + 0x22) *
                  (uint)(*(ushort *)((int)piVar3 + 0x26) >> 3);
          piVar2 = (int *)piVar3[0x15];
          (**(code **)(*piVar2 + 0xc))
                    (piVar2,piVar3[0xf],iVar5 * 5,iVar5,
                     CONCAT22(extraout_var_00,*(ushort *)((int)piVar3 + 0x26)));
        }
      }
    }
  }
  return iVar4;
}


