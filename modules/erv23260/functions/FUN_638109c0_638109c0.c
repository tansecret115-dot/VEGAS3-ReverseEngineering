/* Module: erv23260.dll
   Function: FUN_638109c0
   Address: 638109c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_638109c0(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int local_c;
  int local_8;
  
  puVar2 = param_1;
  pbVar3 = (byte *)0x0;
  local_c = 0;
  local_8 = 0;
  if (param_3 == 0) {
    pbVar3 = &DAT_63830230;
  }
  else {
    if (param_3 == 1) {
      pbVar3 = &DAT_63830270;
      local_c = 1;
      local_8 = 8;
      goto LAB_63810a0a;
    }
    if (param_3 != 2) goto LAB_63810a0a;
    pbVar3 = &DAT_63830270;
  }
  local_c = 8;
  local_8 = 1;
LAB_63810a0a:
  param_1 = (undefined4 *)0x8;
  do {
    iVar5 = 8;
    pbVar4 = pbVar3;
    do {
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
      *(undefined4 *)(param_2 + (uint)*pbVar4 * 4) = uVar1;
      pbVar4 = pbVar4 + local_8;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    pbVar3 = pbVar3 + local_c;
    param_1 = (undefined4 *)((int)param_1 + -1);
  } while (param_1 != (undefined4 *)0x0);
  return;
}


