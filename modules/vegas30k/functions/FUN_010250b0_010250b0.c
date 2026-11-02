/* Module: vegas30k.dll
   Function: FUN_010250b0
   Address: 010250b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010250b0(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return;
  }
  if (param_4 != 0) {
    iVar1 = *(int *)(param_3 + 8);
    iVar2 = *(int *)(param_3 + 4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = iVar2 << 0xe;
    param_1[3] = iVar1 << 0xe;
    return;
  }
  uVar3 = *(undefined4 *)(param_3 + 8);
  uVar4 = *(undefined4 *)(param_3 + 4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar4;
  param_1[3] = uVar3;
  return;
}


