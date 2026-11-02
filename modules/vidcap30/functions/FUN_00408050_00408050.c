/* Module: vidcap30.exe
   Function: FUN_00408050
   Address: 00408050
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00408050(int param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  param_1 = param_1 + -0x44a;
  iVar1 = param_1 * 0x40;
  puVar3 = &DAT_005bbb30 + param_1 * 0x10;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((&DAT_005bbb34)[param_1 * 0x10] == 3) {
    *(int *)(&DAT_005bbb60 + iVar1) = *param_3;
    *(int *)(&DAT_005bbb64 + iVar1) = param_3[1];
    *(int *)(&DAT_005bbb68 + iVar1) = param_3[2];
    *(int *)(&DAT_005bbb6c + iVar1) = param_3[3];
    (&DAT_005bbb38)[param_1 * 0x10] = (&DAT_005bbb38)[param_1 * 0x10] & 0xffff | *param_3 << 0x10;
  }
  return;
}


