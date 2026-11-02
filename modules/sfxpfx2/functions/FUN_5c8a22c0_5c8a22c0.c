/* Module: sfxpfx2.dll
   Function: FUN_5c8a22c0
   Address: 5c8a22c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_5c8a22c0(void *this,uint param_1,int param_2,uint *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  double local_18;
  double local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  *param_4 = 0;
  if (*(int *)(param_2 + 0x14) != 0) {
    iVar1 = *(int *)(param_2 + 0x1c);
    if (iVar1 != 0) {
      local_10 = (double)iVar1 * _DAT_5c8dc908;
      local_18 = (double)*(int *)(param_2 + 0x18) / (double)param_1;
      if (iVar1 < 1) {
        local_8 = 0x9999999a;
        local_4 = 0x3fb99999;
        FUN_5c8a1870(param_4 + 2,&local_18);
        *param_4 = 2;
      }
      else {
        local_8 = 0x66666666;
        local_4 = 0x3fe66666;
        FUN_5c8a19d0(param_4 + 2,&local_18);
        *param_4 = 1;
      }
      puVar2 = param_4 + 2;
      puVar3 = param_4 + 0x12;
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
  }
  param_4[0x22] = 0;
  if (*(int *)(param_2 + 0x20) != 0) {
    iVar1 = *(int *)(param_2 + 0x28);
    if (iVar1 != 0) {
      local_10 = (double)iVar1 * _DAT_5c8dc908;
      local_18 = (double)*(int *)(param_2 + 0x24) / (double)param_1;
      if (iVar1 < 1) {
        local_8 = 0x33333333;
        local_4 = 0x3fd33333;
        FUN_5c8a1d10(param_4 + 0x24,&local_18);
        param_4[0x22] = 2;
      }
      else {
        local_8 = 0x66666666;
        local_4 = 0x3fe66666;
        FUN_5c8a1be0(param_4 + 0x24,&local_18);
        param_4[0x22] = 1;
      }
      puVar2 = param_4 + 0x24;
      puVar3 = param_4 + 0x34;
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
  }
  *param_3 = 0;
  FUN_5c8a2240(this,*(int *)(param_2 + 8),*(int *)(param_2 + 0x10),*(int *)(param_2 + 0xc),param_1,
               param_3);
  return 1;
}


