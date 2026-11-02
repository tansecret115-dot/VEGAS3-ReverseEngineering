/* Module: vegas30k.dll
   Function: FUN_0114b1e0
   Address: 0114b1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0114b1e0(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_4;
  
  iVar2 = 0;
  iVar3 = *(int *)(param_1 + 0x18);
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar1;
  }
  if ((iVar3 < 0) || (iVar4 + -1 < iVar3)) {
    iVar3 = 0;
  }
  else {
    iVar3 = piVar1[1] * iVar3 + piVar1[2];
  }
  puVar5 = *(undefined4 **)(iVar3 + 8);
  local_4 = 0;
  iVar4 = param_3;
  if (puVar5 != (undefined4 *)0x0) {
    while (iVar4 != 0) {
      iVar2 = FUN_0114af90(param_1,*puVar5,param_2,iVar4,&param_3);
      if ((iVar2 < 0) || (local_4 = local_4 + param_3, iVar2 == 1)) goto LAB_0114b265;
      puVar5 = (undefined4 *)puVar5[0xd];
      param_2 = param_2 + param_3;
      iVar4 = iVar4 - param_3;
      if (puVar5 == (undefined4 *)0x0) goto LAB_0114b265;
    }
    iVar2 = 1;
  }
LAB_0114b265:
  *(undefined4 **)(iVar3 + 8) = puVar5;
  *param_4 = local_4;
  return iVar2;
}


