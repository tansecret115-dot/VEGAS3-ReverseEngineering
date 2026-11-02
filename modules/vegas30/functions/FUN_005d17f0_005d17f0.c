/* Module: vegas30.exe
   Function: FUN_005d17f0
   Address: 005d17f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d17f0(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  
  *param_3 = DAT_0061a2b0;
  param_3[1] = DAT_0061a2b4;
  param_3[2] = DAT_0061a2b8;
  param_3[3] = DAT_0061a2bc;
  piVar1 = *(int **)(param_1 + 0x234);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if ((param_2 < 0) || (iVar2 + -1 < param_2)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(piVar1[2] + param_2 * 4);
  }
  if (iVar2 == 0) {
    return 0x80004005;
  }
  *param_3 = *(undefined4 *)(iVar2 + 0xc);
  param_3[1] = *(undefined4 *)(iVar2 + 0x10);
  param_3[2] = *(undefined4 *)(iVar2 + 0x14);
  param_3[3] = *(undefined4 *)(iVar2 + 0x18);
  return 0;
}


