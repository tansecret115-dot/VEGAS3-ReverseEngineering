/* Module: mcplug.dll
   Function: FUN_00407140
   Address: 00407140
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00407140(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  int unaff_EBP;
  int *local_4;
  
  local_4 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x38))(param_1,&local_4);
  if (iVar2 < 0) {
    return iVar2;
  }
  if (((int)local_4 < 0) || (unaff_EBP < (int)local_4)) {
    return -0x7fffbffb;
  }
  if (param_1[(int)local_4 + 10] != 0) {
    return 0;
  }
  puVar3 = (undefined4 *)FUN_00407020((int)param_1);
  if (puVar3 == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  param_1[(int)local_4 + 10] = (int)puVar3;
  pvVar4 = GlobalAlloc(0x42,0x28);
  pvVar5 = GlobalLock(pvVar4);
  *(LPVOID *)puVar3[0x10a] = pvVar5;
  if (*(int *)puVar3[0x10a] == 0) {
    return -0x7ff8fff2;
  }
  pvVar4 = GlobalAlloc(0x42,0x28);
  pvVar5 = GlobalLock(pvVar4);
  *(LPVOID *)(puVar3[0x10a] + 0x48) = pvVar5;
  if (*(int *)(puVar3[0x10a] + 0x48) == 0) {
    return -0x7ff8fff2;
  }
  iVar1 = param_1[0x11];
  if (iVar1 == 0) {
    switch(local_4) {
    case (int *)0x0:
switchD_00407220_caseD_0:
      puVar3[2] = 0;
      *(undefined2 *)(puVar3 + 5) = 0;
      *(undefined2 *)(puVar3 + 0x87) = 0;
      *puVar3 = 0x42c;
      puVar3[1] = 0x1000000;
      puVar3[3] = 0x1ae;
      puVar3[4] = 0x17b3;
      return iVar2;
    case (int *)0x1:
switchD_00407220_caseD_1:
      *puVar3 = 0x42c;
      puVar3[1] = 0x1000000;
      puVar3[2] = 0;
      puVar3[3] = 0x17a5;
      puVar3[4] = 0x17a6;
      *(undefined2 *)(puVar3 + 5) = 0;
      *(undefined2 *)(puVar3 + 0x87) = 0;
      iVar2 = FUN_00407470(param_1,(int)puVar3,1,0,0,1,1);
      return iVar2;
    case (int *)0x2:
switchD_00407220_caseD_2:
      *puVar3 = 0x42c;
      puVar3[1] = 0x1000000;
      puVar3[2] = 0;
      puVar3[3] = 0x17a7;
      puVar3[4] = 0x17a8;
      *(undefined2 *)(puVar3 + 5) = 0;
      *(undefined2 *)(puVar3 + 0x87) = 0;
      iVar2 = FUN_00407470(param_1,(int)puVar3,1,1,0,1,1);
      return iVar2;
    case (int *)0x3:
switchD_00407220_caseD_3:
      *puVar3 = 0x42c;
      puVar3[1] = 0x1000000;
      puVar3[2] = 0;
      puVar3[3] = 0x17a9;
      puVar3[4] = 0x17aa;
      *(undefined2 *)(puVar3 + 5) = 0;
      *(undefined2 *)(puVar3 + 0x87) = 0;
      iVar2 = FUN_00407470(param_1,(int)puVar3,3,0,0,1,1);
      return iVar2;
    case (int *)0x4:
switchD_00407220_caseD_4:
      *puVar3 = 0x42c;
      puVar3[1] = 0x1000000;
      puVar3[2] = 0;
      puVar3[3] = 0x17ab;
      puVar3[4] = 0x17ac;
      *(undefined2 *)(puVar3 + 5) = 0;
      *(undefined2 *)(puVar3 + 0x87) = 0;
      iVar2 = FUN_00407470(param_1,(int)puVar3,3,1,0,1,1);
      return iVar2;
    case (int *)0x5:
switchD_00407220_caseD_5:
      *puVar3 = 0x42c;
      puVar3[1] = 0x1000000;
      puVar3[2] = 0;
      puVar3[3] = 0x17ad;
      puVar3[4] = 0x17ae;
      *(undefined2 *)(puVar3 + 5) = 0;
      *(undefined2 *)(puVar3 + 0x87) = 0;
      iVar2 = FUN_00407470(param_1,(int)puVar3,4,0,0,1,1);
      return iVar2;
    case (int *)0x6:
      goto switchD_00407220_caseD_6;
    default:
      goto switchD_00407220_default;
    }
  }
  if (iVar1 == 1) {
    if (local_4 == (int *)0x0) goto switchD_00407220_caseD_0;
    if (local_4 == (int *)0x1) goto switchD_00407220_caseD_1;
    if (local_4 == (int *)0x2) goto switchD_00407220_caseD_2;
  }
  else if (iVar1 == 2) {
    switch(local_4) {
    case (int *)0x0:
      goto switchD_00407220_caseD_0;
    case (int *)0x1:
      goto switchD_00407220_caseD_3;
    case (int *)0x2:
      goto switchD_00407220_caseD_4;
    case (int *)0x3:
      goto switchD_00407220_caseD_5;
    case (int *)0x4:
switchD_00407220_caseD_6:
      *puVar3 = 0x42c;
      puVar3[1] = 0x1000000;
      puVar3[2] = 0;
      puVar3[3] = 0x17af;
      puVar3[4] = 0x17b0;
      *(undefined2 *)(puVar3 + 5) = 0;
      *(undefined2 *)(puVar3 + 0x87) = 0;
      iVar2 = FUN_00407470(param_1,(int)puVar3,4,1,0,1,1);
    }
  }
switchD_00407220_default:
  return iVar2;
}


