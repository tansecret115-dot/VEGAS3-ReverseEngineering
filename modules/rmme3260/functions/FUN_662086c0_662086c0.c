/* Module: rmme3260.dll
   Function: FUN_662086c0
   Address: 662086c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662086c0(int param_1,byte *param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = -0x7ff8ffa9;
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
    iVar2 = FUN_66202c50(param_2,param_3);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*(int *)*param_3 + 0x24))
                        ((int *)*param_3,*(undefined4 *)(param_1 + 0x5c),
                         *(undefined4 *)(param_1 + 0x3c));
      piVar1 = (int *)*param_3;
      if (-1 < iVar2) {
        FUN_6624ff10((void *)(param_1 + 0x38),*(int *)(param_1 + 0x3c),piVar1);
        (**(code **)(*(int *)*param_3 + 4))((int *)*param_3);
        return iVar2;
      }
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *param_3 = 0;
      }
    }
  }
  return iVar2;
}


