/* Module: vidpcore.dll
   Function: FUN_5de9b110
   Address: 5de9b110
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5de9b110(int *param_1,int param_2,int *param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  if (param_5 < *param_1 + -1) {
    iVar4 = param_5 + 1;
  }
  else {
    iVar4 = 0;
  }
  piVar5 = (int *)(param_2 + iVar4 * 8);
  piVar1 = (int *)(param_2 + param_5 * 8);
  piVar3 = piVar1;
  if (*(int *)(param_2 + 4 + param_5 * 8) < *(int *)(param_2 + 4 + iVar4 * 8)) {
    piVar3 = piVar5;
    piVar5 = piVar1;
  }
  if (piVar3[1] - piVar5[1] == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)(((longlong)(*piVar3 - *piVar5) * 0x4000) / (longlong)(piVar3[1] - piVar5[1]));
  }
  lVar2 = (longlong)iVar4 * (longlong)(param_6 - piVar5[1]);
  *(uint *)(param_4 + *param_3 * 0xc) =
       ((uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12) + *piVar5;
  *(int *)(param_4 + 4 + *param_3 * 0xc) = iVar4;
  *(int *)(param_4 + 8 + *param_3 * 0xc) = param_5;
  *param_3 = *param_3 + 1;
  return;
}


