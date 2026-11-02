/* Module: sfppack2.dll
   Function: FUN_5cce70e0
   Address: 5cce70e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_5cce70e0(void *this,uint param_1,int param_2,uint *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint *puVar5;
  double local_18;
  double local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  *param_4 = 0;
  if (*(int *)(param_2 + 0x38) != 0) {
    iVar1 = *(int *)(param_2 + 0x40);
    if (iVar1 != 0) {
      local_10 = (double)iVar1 * _DAT_5cd514c8;
      local_18 = (double)*(int *)(param_2 + 0x3c) / (double)param_1;
      if (iVar1 < 1) {
        local_8 = 0x9999999a;
        local_4 = 0x3fb99999;
        FUN_5cce6680(param_4 + 2,&local_18);
        *param_4 = 2;
      }
      else {
        local_8 = 0x66666666;
        local_4 = 0x3fe66666;
        FUN_5cce67e0(param_4 + 2,&local_18);
        *param_4 = 1;
      }
      puVar2 = param_4 + 2;
      puVar4 = param_4 + 0x12;
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
    }
  }
  param_4[0x22] = 0;
  if (*(int *)(param_2 + 0x44) != 0) {
    iVar1 = *(int *)(param_2 + 0x4c);
    if (iVar1 != 0) {
      local_10 = (double)iVar1 * _DAT_5cd514c8;
      local_18 = (double)*(int *)(param_2 + 0x48) / (double)param_1;
      if (iVar1 < 1) {
        local_8 = 0x33333333;
        local_4 = 0x3fd33333;
        FUN_5cce6b20(param_4 + 0x24,&local_18);
        param_4[0x22] = 2;
      }
      else {
        local_8 = 0x66666666;
        local_4 = 0x3fe66666;
        FUN_5cce69f0(param_4 + 0x24,&local_18);
        param_4[0x22] = 1;
      }
      puVar2 = param_4 + 0x24;
      puVar4 = param_4 + 0x34;
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
    }
  }
  piVar3 = (int *)(param_2 + 0x28);
  iVar1 = 4;
  puVar5 = param_3;
  do {
    *param_3 = 0;
    FUN_5cce7060(this,piVar3[-8],*piVar3,piVar3[-4],param_1,puVar5);
    if (*puVar5 != 0) {
      puVar5 = puVar5 + 0xe;
    }
    piVar3 = piVar3 + 1;
    param_3 = param_3 + 0xe;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 1;
}


