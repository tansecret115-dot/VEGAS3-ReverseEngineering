/* Module: sftrans1.dll
   Function: FUN_00540ec0
   Address: 00540ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00540ec0(int param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  int iVar4;
  double dVar5;
  
  pdVar3 = *(double **)(param_1 + 0x20);
  dVar1 = pdVar3[3];
  dVar2 = pdVar3[1];
  iVar4 = *(int *)(param_1 + 0x18);
  if ((*(uint *)(iVar4 + 0x44) & 8) == 0) {
    dVar5 = (*(double *)(iVar4 + 0x48) + _DAT_00555908) * (double)*(int *)(iVar4 + 8);
    if ((*(uint *)(iVar4 + 0x44) & 0x10) == 0) {
      *param_2 = dVar5 * _DAT_00557838 - (pdVar3[2] - *pdVar3);
    }
    else {
      *param_2 = (dVar5 - (pdVar3[2] - *pdVar3)) * _DAT_00557838;
    }
  }
  else {
    *param_2 = (*(double *)(iVar4 + 0x48) + _DAT_00555908) * (double)*(int *)(iVar4 + 8) *
               _DAT_00557838;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if ((*(uint *)(iVar4 + 0x44) & 1) == 0) {
    dVar5 = (*(double *)(iVar4 + 0x50) + _DAT_00555908) * (double)*(int *)(iVar4 + 0xc);
    if ((*(uint *)(iVar4 + 0x44) & 2) == 0) {
      *param_3 = dVar5 * _DAT_00557838 - (dVar1 - dVar2);
      return;
    }
    *param_3 = (dVar5 - (dVar1 - dVar2)) * _DAT_00557838;
    return;
  }
  *param_3 = (*(double *)(iVar4 + 0x50) + _DAT_00555908) * (double)*(int *)(iVar4 + 0xc) *
             _DAT_00557838;
  return;
}


