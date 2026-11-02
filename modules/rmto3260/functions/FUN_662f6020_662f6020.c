/* Module: rmto3260.dll
   Function: FUN_662f6020
   Address: 662f6020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662f6020(int param_1,int param_2,char *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  
  if (((param_2 == 0) || (param_3 == (char *)0x0)) || (*(int *)(param_1 + 4) == 0)) {
    return 0x80004003;
  }
  puVar2 = operator_new(0x28);
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_662eeb70(puVar2);
  }
  if (piVar3 == (int *)0x0) {
    return 0x8007000e;
  }
  (**(code **)(*piVar3 + 4))(piVar3);
  uVar5 = 0xffffffff;
  pcVar6 = param_3;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  (**(code **)(*piVar3 + 0x10))(piVar3,param_3,~uVar5);
  uVar4 = (**(code **)(**(int **)(param_1 + 4) + 0x2c))(*(int **)(param_1 + 4),param_2,piVar3);
  (**(code **)(*piVar3 + 8))(piVar3);
  return uVar4;
}


