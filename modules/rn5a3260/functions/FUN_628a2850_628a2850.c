/* Module: rn5a3260.dll
   Function: FUN_628a2850
   Address: 628a2850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_628a2850(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  char local_404 [1024];
  
  puVar2 = operator_new(0x28);
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_628a3f00(puVar2);
  }
  *param_4 = piVar3;
  (**(code **)(*piVar3 + 4))(piVar3);
  (**(code **)(*(int *)*param_4 + 0x14))((int *)*param_4,0x40);
  pcVar4 = (char *)(**(code **)(*(int *)*param_4 + 0x1c))((int *)*param_4);
  uVar5 = (**(code **)(*param_3 + 0x1c))(param_3);
  uVar5 = (**(code **)(*param_2 + 0x1c))(param_2,uVar5);
  uVar5 = (**(code **)(*param_1 + 0x1c))(param_1,uVar5);
  sprintf(local_404,s____200s____200s____200s_628a7210,uVar5);
  uVar6 = 0xffffffff;
  pcVar7 = local_404;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_628a3310(pcVar4,(undefined4 *)local_404,~uVar6 - 1);
  return 0;
}


