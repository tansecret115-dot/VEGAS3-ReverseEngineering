/* Module: rmme3260.dll
   Function: FUN_66207ee0
   Address: 66207ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66207ee0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int local_20 [3];
  int local_14 [3];
  int local_8;
  
  piVar2 = param_1;
  iVar4 = -0x7fffbffb;
  if (param_1[0xf] == 0) {
    param_1 = (int *)0x0;
    FUN_662500f0(local_14);
    local_8 = 0;
    if (0 < piVar2[7]) {
      do {
        iVar1 = *(int *)(piVar2[6] + local_8 * 4);
        piVar3 = FUN_66218240(*(void **)(iVar1 + 10),local_20);
        FUN_662503a0(local_14,piVar3);
        FUN_66250210(local_20);
        iVar4 = (**(code **)(*piVar2 + 0x60))(piVar2,local_14[0],&param_1);
        if (iVar4 == 0x40012) {
          iVar4 = (**(code **)(*piVar2 + 100))(piVar2,local_14[0],&param_1);
        }
        if (((-1 < iVar4) && (param_1 != (int *)0x0)) &&
           (iVar4 = (**(code **)(*param_1 + 0x28))(param_1,*(undefined4 *)(iVar1 + 10)),
           param_1 != (int *)0x0)) {
          (**(code **)(*param_1 + 8))(param_1);
          param_1 = (int *)0x0;
        }
        local_8 = local_8 + 1;
      } while (local_8 < piVar2[7]);
    }
    local_8 = 0;
    if (0 < piVar2[0xb]) {
      do {
        iVar1 = *(int *)(piVar2[10] + local_8 * 4);
        piVar3 = FUN_66218240(*(void **)(iVar1 + 10),local_20);
        FUN_662503a0(local_14,piVar3);
        FUN_66250210(local_20);
        iVar4 = (**(code **)(*piVar2 + 0x60))(piVar2,local_14[0],&param_1);
        if (iVar4 == 0x40012) {
          iVar4 = (**(code **)(*piVar2 + 100))(piVar2,local_14[0],&param_1);
        }
        if (((-1 < iVar4) && (param_1 != (int *)0x0)) &&
           (iVar4 = (**(code **)(*param_1 + 0x2c))(param_1,*(undefined4 *)(iVar1 + 10)),
           param_1 != (int *)0x0)) {
          (**(code **)(*param_1 + 8))(param_1);
          param_1 = (int *)0x0;
        }
        local_8 = local_8 + 1;
      } while (local_8 < piVar2[0xb]);
    }
    FUN_66250210(local_14);
  }
  return iVar4;
}


