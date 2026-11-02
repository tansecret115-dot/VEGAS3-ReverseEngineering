/* Module: rmto3260.dll
   Function: FUN_662c3010
   Address: 662c3010
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c3010(int param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_2 + 4);
  iVar4 = 0;
  pvVar2 = operator_new(uVar1);
  if (pvVar2 == (void *)0x0) {
    iVar4 = -0x7ff8fff2;
  }
  if (-1 < iVar4) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 0x28))(pvVar2,uVar1);
    if (uVar3 != uVar1) {
      iVar4 = -0x7ffbff7f;
    }
    if (-1 < iVar4) {
      iVar4 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x1c))(pvVar2,uVar1);
      if (-1 < iVar4) {
        *(undefined4 *)(param_1 + 0x6a) = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x26);
      }
    }
  }
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  return iVar4;
}


