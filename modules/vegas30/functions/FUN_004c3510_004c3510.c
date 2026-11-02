/* Module: vegas30.exe
   Function: FUN_004c3510
   Address: 004c3510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004c3510(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((*(int *)(param_1 + 4) != 3) || (iVar1 = *(int *)(param_1 + 0x69c), iVar1 == 0)) {
    return 0;
  }
  if (param_2 == 0) {
    puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x54) + 0xa4);
  }
  else {
    if (param_2 == 1) {
      iVar1 = *(int *)(iVar1 + 0x54);
      *param_3 = *(undefined4 *)(iVar1 + 0xc4);
      param_3[1] = *(undefined4 *)(iVar1 + 200);
      param_3[2] = *(undefined4 *)(iVar1 + 0xcc);
      param_3[3] = *(undefined4 *)(iVar1 + 0xd0);
      return 1;
    }
    if (param_2 != 2) {
      return 0;
    }
    puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x54) + 0xb4);
  }
  *param_3 = *puVar2;
  param_3[1] = puVar2[1];
  param_3[2] = puVar2[2];
  param_3[3] = puVar2[3];
  return 1;
}


