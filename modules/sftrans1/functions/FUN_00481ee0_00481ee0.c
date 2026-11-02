/* Module: sftrans1.dll
   Function: FUN_00481ee0
   Address: 00481ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00481ee0(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  int *piVar1;
  double dVar2;
  float fVar3;
  int iVar4;
  
  iVar4 = GetDlgCtrlID(param_4);
  switch(iVar4) {
  case 0x657:
    iVar4 = FUN_004c4710(param_2,param_3,param_4,1,100);
    dVar2 = (double)iVar4 * _DAT_0055ca40 - _DAT_00555908;
    if (dVar2 == *(double *)(param_1[0xc] + 0x68)) {
      (**(code **)(*param_1 + 8))();
      return 0;
    }
    *(double *)(param_1[0xc] + 0x68) = dVar2;
    *(undefined4 *)(param_1[0xc] + 0x10) = 1;
    piVar1 = (int *)param_1[0xd];
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    (**(code **)(*piVar1 + 0x2c))(piVar1);
    return 0;
  default:
    goto switchD_00481f05_caseD_658;
  case 0x666:
    iVar4 = FUN_004c4710(param_2,param_3,param_4,1,100);
    if ((float)iVar4 * (float)_DAT_0055ca40 != *(float *)(param_1[0xc] + 0x124)) {
      *(float *)(param_1[0xc] + 0x124) = (float)iVar4 * (float)_DAT_0055ca40;
      *(undefined4 *)(param_1[0xc] + 0x104) = 1;
      piVar1 = (int *)param_1[0xd];
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      (**(code **)(*piVar1 + 0x2c))(piVar1);
      return 0;
    }
    break;
  case 0x668:
    iVar4 = FUN_004c4710(param_2,param_3,param_4,1,100);
    if ((float)iVar4 * (float)_DAT_0055ca40 != *(float *)(param_1[0xc] + 0x120)) {
      *(float *)(param_1[0xc] + 0x120) = (float)iVar4 * (float)_DAT_0055ca40;
      *(undefined4 *)(param_1[0xc] + 0x104) = 1;
      goto LAB_004820b2;
    }
    break;
  case 0x66b:
    iVar4 = FUN_004c4710(param_2,param_3,param_4,1,100);
    if ((float)iVar4 * (float)_DAT_0055ca40 != *(float *)(param_1[0xc] + 0xf4)) {
      *(float *)(param_1[0xc] + 0xf4) = (float)iVar4 * (float)_DAT_0055ca40;
LAB_004820a5:
      *(undefined4 *)(param_1[0xc] + 0xb0) = 1;
LAB_004820b2:
      piVar1 = (int *)param_1[0xd];
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      (**(code **)(*piVar1 + 0x2c))(piVar1);
      return 0;
    }
    break;
  case 0x66d:
    iVar4 = FUN_004c4710(param_2,param_3,param_4,1,0x32);
    fVar3 = (float)iVar4 * (float)_DAT_0055ca40 - (float)_DAT_00555908;
    if (fVar3 != *(float *)(param_1[0xc] + 0xdc)) {
      *(float *)(param_1[0xc] + 0xdc) = fVar3;
      goto LAB_004820a5;
    }
    break;
  case 0x66f:
    iVar4 = FUN_004c4710(param_2,param_3,param_4,1,0x32);
    fVar3 = (float)iVar4 * (float)_DAT_0055ca40 - (float)_DAT_00555908;
    if (fVar3 != *(float *)(param_1[0xc] + 0xe0)) {
      *(float *)(param_1[0xc] + 0xe0) = fVar3;
      *(undefined4 *)(param_1[0xc] + 0xb0) = 1;
      piVar1 = (int *)param_1[0xd];
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      (**(code **)(*piVar1 + 0x2c))(piVar1);
      return 0;
    }
  }
  (**(code **)(*param_1 + 8))();
switchD_00481f05_caseD_658:
  return 0;
}


