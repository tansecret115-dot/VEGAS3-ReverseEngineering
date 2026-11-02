/* Module: aviplug.dll
   Function: FUN_5f93ce30
   Address: 5f93ce30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f93ce30(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar1 = param_2[0x12];
  piVar3 = param_2 + 0x14;
  if (iVar1 == 0) {
    iVar1 = *param_2;
    piVar3 = param_2 + 2;
  }
  iVar4 = *(int *)(param_2[0x25] + 0x14);
  puVar5 = param_1;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *param_1 = 0x48;
  param_1[1] = DAT_5f9f2bd0;
  param_1[2] = DAT_5f9f2bd4;
  param_1[3] = DAT_5f9f2bd8;
  param_1[4] = DAT_5f9f2bdc;
  param_1[6] = (uint)*(ushort *)(iVar1 + 0xe);
  param_1[7] = *(undefined4 *)(iVar1 + 4);
  param_1[8] = *(undefined4 *)(iVar1 + 8);
  param_1[10] = piVar3[6];
  param_1[0xb] = piVar3[7];
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0;
  if (iVar4 != 0) {
    if (iVar4 != 1) {
      if ((((iVar4 == 0x6e76645f) || (iVar4 == 0x6e766477)) || (iVar4 == 0x7076645f)) ||
         (iVar4 == 0x70766477)) {
        iVar4 = 0x64737664;
        param_1[6] = 0x18;
      }
      param_1[5] = iVar4;
      return;
    }
    param_1[5] = 0x20454c52;
    return;
  }
  param_1[5] = 0x20424944;
  return;
}


