/* Module: sfppack2.dll
   Function: FUN_5cce4120
   Address: 5cce4120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cce4120(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int aiStack_fb4 [3];
  int iStack_fa8;
  int *local_fa4;
  undefined4 local_fa0 [1000];
  
  FUN_5cce3e80(local_fa0,1000);
  iVar1 = param_3 + 1;
  puVar3 = param_2;
  for (iVar2 = iVar1; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  iVar2 = 0;
  do {
    (**(code **)(*param_1 + 0xc4))(param_1,&local_fa4);
    (**(code **)(*param_1 + 200))(param_1,&stack0xfffff040,iVar2);
    (**(code **)(*param_1 + 0xcc))(param_1,&stack0xfffff040,iVar2);
    if (aiStack_fb4[0] != 0) {
      FUN_5cce4030((int)local_fa0,(int)param_2,iVar1,local_fa4,aiStack_fb4[0],iStack_fa8);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  (**(code **)(*param_1 + 0x8c))(param_1);
  if (aiStack_fb4[0] != 0) {
    (**(code **)(*param_1 + 0x9c))(param_1,&stack0xfffff044);
    (**(code **)(*param_1 + 0xac))(param_1,&stack0xfffff040);
    FUN_5cce3f10((int)param_2,iVar1,unaff_EBP,unaff_EBX);
  }
  piVar5 = aiStack_fb4;
  piVar4 = param_1;
  (**(code **)(*param_1 + 0x94))();
  if (unaff_EBP != 0) {
    (**(code **)(*param_1 + 0xa4))(param_1,&stack0xfffff03c);
    (**(code **)(*param_1 + 0xb4))(param_1,&stack0xfffff038);
    FUN_5cce3fa0((int)param_2,iVar1,(int)piVar4,(int)piVar5);
  }
  return 1;
}


