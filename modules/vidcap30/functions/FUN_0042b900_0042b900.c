/* Module: vidcap30.exe
   Function: FUN_0042b900
   Address: 0042b900
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042b900(int *param_1,uint *param_2,int param_3)

{
  int *piVar1;
  DWORD DVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int unaff_retaddr;
  
  if (*param_1 == 8) {
    if (param_3 != 0) {
      puVar5 = (uint *)(param_1 + 0x1e6);
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *param_2 = *puVar5;
        puVar5 = puVar5 + 1;
        param_2 = param_2 + 1;
      }
      return;
    }
    iVar4 = FUN_00428e00(param_1);
    DVar2 = timeGetTime();
    puVar5 = param_2;
    if ((*param_2 & 0x3d) != 0) {
      param_2[1] = 0xffffffff;
      piVar1 = (int *)param_1[0xf9];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1,&param_2);
        puVar5[1] = (uint)param_2;
        if ((param_1[0x1e2] == 0) && (0 < (int)param_2)) {
          iVar3 = ftol();
          param_1[0x1e2] = DVar2 - iVar3;
        }
      }
      *puVar5 = *puVar5 & 0xfffffffe;
    }
    if ((*puVar5 & 0x1c) != 0) {
      if (iVar4 == 0) {
        puVar5[3] = param_1[0x1e3] - param_1[0x1e2];
      }
      else if (param_1[0x1e2] != 0) {
        puVar5[3] = DVar2 - param_1[0x1e2];
      }
      *puVar5 = *puVar5 & 0xfffffffb;
    }
    if ((*puVar5 & 2) != 0) {
      puVar5[2] = 0xffffffff;
      piVar1 = (int *)param_1[0xf9];
      if ((piVar1 != (int *)0x0) && (0 < (int)puVar5[1])) {
        (**(code **)(*piVar1 + 0xc))(piVar1,&param_2);
        if (param_1[0x1e4] == -1) {
          param_1[0x1e4] = (int)param_2;
        }
        puVar5[2] = (int)param_2 - param_1[0x1e4];
      }
      *puVar5 = *puVar5 & 0xfffffffd;
    }
    if ((*puVar5 & 0x10) != 0) {
      puVar5[6] = 0;
      puVar5[7] = 0;
      piVar1 = (int *)param_1[0xf9];
      if (((piVar1 != (int *)0x0) && (puVar5[3] != 0)) && (puVar5[1] != 0xffffffff)) {
        (**(code **)(*piVar1 + 0x18))(piVar1,&param_2);
        param_2 = (uint *)ftol();
        *(double *)(puVar5 + 6) = (double)(int)param_2 * _DAT_0058aa90;
      }
      *puVar5 = *puVar5 & 0xffffffef;
    }
    if ((*puVar5 & 8) != 0) {
      puVar5[4] = 0;
      puVar5[5] = 0;
      if (((param_1[0xf9] != 0) && (puVar5[3] != 0)) &&
         (param_2 = (uint *)puVar5[1], param_2 != (uint *)0xffffffff)) {
        *(double *)(puVar5 + 4) = ((double)(int)param_2 / (double)puVar5[3]) * _DAT_00589f18;
      }
      *puVar5 = *puVar5 & 0xfffffff7;
    }
    if ((*puVar5 & 0x20) != 0) {
      puVar5[8] = 0;
      puVar5[9] = 0;
      piVar1 = (int *)param_1[0xf9];
      if ((piVar1 != (int *)0x0) && (puVar5[1] != 0xffffffff)) {
        (**(code **)(*piVar1 + 0x18))(piVar1,&param_2);
        *(double *)(puVar5 + 8) = (double)(int)puVar5[1] * (double)unaff_retaddr * _DAT_0058aa90;
      }
      *puVar5 = *puVar5 & 0xffffffdf;
    }
  }
  return;
}


