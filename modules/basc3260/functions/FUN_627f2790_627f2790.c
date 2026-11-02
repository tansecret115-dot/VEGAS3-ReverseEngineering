/* Module: basc3260.dll
   Function: FUN_627f2790
   Address: 627f2790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627f2790(int *param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  char *pcVar7;
  char local_c08 [1024];
  undefined1 local_808 [1024];
  char local_408 [1028];
  
  piVar5 = param_2;
  if (param_2 != (int *)0x0) {
    param_2 = (int *)0x0;
    iVar3 = (**(code **)(*param_1 + 0x30))(param_1,s_UserName_627f6258,&param_2);
    if (-1 < iVar3) {
      uVar4 = (**(code **)(*piVar5 + 0x1c))(piVar5);
      uVar4 = (**(code **)(*param_2 + 0x1c))(param_2,uVar4);
      sprintf(local_408,s____200s____200s_627f6248,uVar4);
      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 8))(param_2);
        param_2 = (int *)0x0;
      }
      uVar6 = 0xffffffff;
      pcVar7 = local_408;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      iVar3 = FUN_627f4290((int)local_408,~uVar6 - 1,(int)local_808);
      local_808[iVar3] = 0;
      sprintf(local_c08,s_Basic__s_627f623c,local_808);
      piVar5 = operator_new(0x6c);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        *piVar5 = (int)&PTR_LAB_627f5a88;
        piVar5[1] = 0;
        FUN_627f3e70(piVar5 + 2,10);
        FUN_627f3e70(piVar5 + 9,10);
        FUN_627f3e70(piVar5 + 0x10,10);
        piVar5[0x17] = 0;
        piVar5[0x18] = 0;
        piVar5[0x19] = 0;
        piVar5[0x1a] = 0;
        *piVar5 = (int)&PTR_FUN_627f5a48;
      }
      puVar2 = param_3;
      *param_3 = piVar5;
      (**(code **)(*piVar5 + 4))(piVar5);
      FUN_627f1e90((int *)*puVar2,s_Authorization_627f6214,local_c08);
    }
  }
  return 0x80040009;
}


