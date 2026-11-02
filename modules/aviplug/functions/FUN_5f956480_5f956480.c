/* Module: aviplug.dll
   Function: FUN_5f956480
   Address: 5f956480
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_5f956480(int *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_2 == (uint *)0x0) {
    return (int *)0xffffffff;
  }
  if (*param_2 < 0x24) {
    return (int *)0x0;
  }
  if (param_2[1] != 0x63646976) {
LAB_5f9566b6:
    param_2[5] = 0xffffffff;
    return (int *)0x0;
  }
  piVar5 = (int *)param_2[2];
  if (param_1 == (int *)0x0) {
    piVar6 = piVar5;
    if ((((piVar5 != (int *)0x64737664) && (piVar5 != (int *)0x6e76645f)) &&
        (piVar5 != (int *)0x6e766477)) &&
       ((piVar5 != (int *)0x7076645f && (piVar5 != (int *)0x70766477)))) {
LAB_5f9566a3:
      param_2[5] = 0xfffffffe;
      return (int *)0x0;
    }
  }
  else {
    piVar6 = param_1;
    if (param_1 != piVar5) goto LAB_5f9566a3;
  }
  uVar1 = param_2[4];
  uVar8 = (piVar5 != (int *)0x64737664) + 6 & uVar1;
  if (uVar8 != uVar1) goto LAB_5f9566b6;
  if ((piVar6 == (int *)0x6e766477) || (local_4 = 0, piVar6 == (int *)0x70766477)) {
    local_4 = 1;
  }
  if ((piVar6 == (int *)0x7076645f) || (local_8 = 0, piVar6 == (int *)0x70766477)) {
    local_8 = 1;
  }
  param_1 = (int *)0x0;
  WaitForSingleObject(DAT_5f9f410c,0xffffffff);
  if ((uVar8 & 1) == 0) {
    puVar2 = DAT_5f9f4138;
    if (DAT_5f9f4134 != (undefined4 *)0x0) {
      (**(code **)*DAT_5f9f4134)(DAT_5f9f4134,&DAT_5f9d9e00,&param_1);
      puVar2 = DAT_5f9f4138;
    }
  }
  else {
    puVar2 = DAT_5f9f4134;
    if (DAT_5f9f4138 != (undefined4 *)0x0) {
      (**(code **)*DAT_5f9f4138)(DAT_5f9f4138,&DAT_5f9d9e00,&param_1);
      puVar2 = DAT_5f9f4134;
    }
  }
  if ((param_1 == (int *)0x0) && (puVar2 != (undefined4 *)0x0)) {
    (**(code **)*puVar2)(puVar2,&DAT_5f9d9e00,&param_1);
  }
  ReleaseMutex(DAT_5f9f410c);
  iVar7 = 1;
  if (param_1 == (int *)0x0) {
LAB_5f9565fc:
    pvVar3 = GlobalAlloc(0x40,0x50);
    pvVar4 = GlobalLock(pvVar3);
    if (pvVar4 == (LPVOID)0x0) goto LAB_5f95667d;
    piVar5 = FUN_5f953e50(pvVar4,piVar6,uVar1,local_4,local_8);
  }
  else {
    if (DAT_5f9f4108 != 0) {
      iVar7 = (**(code **)(*param_1 + 0x18))(param_1,0x271c,0);
    }
    (**(code **)(*param_1 + 8))(param_1);
    if (iVar7 != 0) goto LAB_5f9565fc;
    pvVar3 = GlobalAlloc(0x40,0x74);
    pvVar4 = GlobalLock(pvVar3);
    if (pvVar4 == (LPVOID)0x0) goto LAB_5f95667d;
    piVar5 = FUN_5f955400(pvVar4,piVar6,uVar1,local_4,local_8);
  }
  if (piVar5 != (int *)0x0) {
    iVar7 = (**(code **)(*piVar5 + 4))(piVar5);
    param_1[5] = iVar7;
    if (iVar7 != 0) {
      (**(code **)*piVar5)(1);
      return (int *)0x0;
    }
    return piVar5;
  }
LAB_5f95667d:
  param_2[5] = 0xfffffffd;
  return (int *)0x0;
}


