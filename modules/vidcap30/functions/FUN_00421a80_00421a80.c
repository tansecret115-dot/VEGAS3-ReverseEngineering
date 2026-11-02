/* Module: vidcap30.exe
   Function: FUN_00421a80
   Address: 00421a80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00421a80(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  undefined8 uVar6;
  
  piVar2 = param_1;
  iVar3 = 0;
  if ((*param_1 == 8) && (piVar1 = (int *)param_1[0x213], piVar1 != (int *)0x0)) {
    param_1 = (int *)0x0;
    iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,&param_1);
    if (-1 < iVar3) {
      uVar6 = __allshl();
      piVar2[0x52] = (uint)uVar6 | piVar2[0x52] & 0xfffdffffU;
      piVar2[0x53] = (uint)((ulonglong)uVar6 >> 0x20) | piVar2[0x53];
      uVar4 = __aullshr();
      fVar5 = (float10)FUN_004219c0(piVar2 + 0xdc,uVar4 & 1);
      *(double *)(piVar2 + 0xde) = (double)fVar5;
      return iVar3;
    }
  }
  return iVar3;
}


