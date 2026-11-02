/* Module: oggplug.dll
   Function: FUN_00442740
   Address: 00442740
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl
FUN_00442740(int param_1,int *param_2,undefined4 *param_3,uint param_4,int param_5,
            undefined *param_6,int param_7,int param_8)

{
  undefined4 *puVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = param_1;
  if (param_1 == 0) {
    param_1 = -1;
  }
  else {
    param_1 = (*(code *)param_6)(param_1,0,0,1);
  }
  piVar3 = param_2;
  for (iVar5 = 0xb4; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  *param_2 = iVar4;
  param_2[0xb0] = param_5;
  param_2[0xb1] = (int)param_6;
  piVar3 = param_2 + 6;
  param_2[0xb2] = param_7;
  param_2[0xb3] = param_8;
  FUN_004415c0(piVar3);
  if (param_3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_00441630(piVar3,param_4);
    for (uVar6 = param_4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar1 = *param_3;
      param_3 = param_3 + 1;
      puVar1 = puVar1 + 1;
    }
    for (uVar6 = param_4 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar1 = *(undefined1 *)param_3;
      param_3 = (undefined4 *)((int)param_3 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    FUN_004416b0((int)piVar3,param_4);
  }
  if (param_1 != -1) {
    param_2[1] = 1;
  }
  param_2[0xd] = 1;
  pvVar2 = calloc(1,0x20);
  param_2[0x12] = (int)pvVar2;
  piVar3 = calloc(param_2[0xd],0x20);
  param_2[0x13] = (int)piVar3;
  iVar4 = FUN_00442850(param_2,(uint *)param_2[0x12],piVar3,param_2 + 0x17,(int *)0x0);
  if (iVar4 < 0) {
    *param_2 = 0;
    FUN_004425f0(param_2);
    return iVar4;
  }
  if (param_2[0x16] < 1) {
    param_2[0x16] = 1;
  }
  return iVar4;
}


