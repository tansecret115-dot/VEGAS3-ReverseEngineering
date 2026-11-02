/* Module: rmbe3260.dll
   Function: FUN_66026600
   Address: 66026600
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66026600(int param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  piVar1 = param_3;
  piVar4 = (int *)0x0;
  *param_3 = 0;
  if (8 < param_2) {
    return -0x7ff8ffa9;
  }
  *param_3 = 0;
  param_3 = (int *)0x0;
  iVar2 = (**(code **)(*(int *)(param_1 + -4) + 0xc))((int *)(param_1 + -4),param_2,&param_3);
  if (-1 < iVar2) {
    puVar3 = operator_new(0x18);
    if (puVar3 != (undefined4 *)0x0) {
      piVar4 = (int *)FUN_66025450(puVar3);
    }
    iVar2 = (**(code **)(*piVar4 + 0x2c))(piVar4,param_3);
    if (-1 < iVar2) {
      if (piVar4 != (int *)0x0) {
        piVar4 = piVar4 + 4;
        *piVar1 = (int)piVar4;
        (**(code **)(*piVar4 + 4))(piVar4);
        return iVar2;
      }
      *piVar1 = 0;
      (**(code **)(iRam00000000 + 4))(0);
      return iVar2;
    }
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))(1);
    }
  }
  return iVar2;
}


