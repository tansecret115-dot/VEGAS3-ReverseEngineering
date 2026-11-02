/* Module: vidcap30.exe
   Function: FUN_004258d0
   Address: 004258d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004258d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 == 2) {
    if (((byte)param_1[3] & 0xe) == 0xe) {
      FUN_00421220(param_1,0);
      return;
    }
  }
  else {
    if (iVar2 == 5) {
      FUN_00430c70(param_1[0x7c]);
      param_1[0x7c] = 0;
      param_1[0x7e] = 0;
      param_1[0x7f] = 0;
      return;
    }
    if (iVar2 == 6) {
      FUN_00412850(param_1 + 0xbc);
      FUN_00412850(param_1 + 0xc0);
      return;
    }
    if (iVar2 == 7) {
      DAT_005ba4b4 = DAT_005ba4b4 | 0x2000;
      if ((((param_1[0x52] & 0x4000U) == 0) && ((param_1[0x52] & 0x100U) != 0)) &&
         (param_1[199] != 0)) {
        FUN_00426360(param_1[199]);
      }
      if ((param_1[0x52] & 4U) != 0) {
        (**(code **)(*(int *)param_1[0xd6] + 0x24))((int *)param_1[0xd6]);
      }
      if (param_1[0xd7] != 0) {
        FUN_00425230(param_1,0);
        if ((param_1[0x52] & 0x4000U) != 0) {
          iVar2 = (**(code **)(*(int *)param_1[0xd7] + 0x90))((int *)param_1[0xd7],0);
          if (-1 < iVar2) {
            (**(code **)(*(int *)param_1[0xd7] + 0x7c))((int *)param_1[0xd7],0);
          }
        }
        (**(code **)(*(int *)param_1[0xd7] + 0x74))((int *)param_1[0xd7],0);
        piVar1 = (int *)param_1[0xd7];
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        param_1[0xd7] = 0;
      }
      piVar1 = (int *)param_1[0xd6];
      param_1[0x52] = param_1[0x52] & 0xffffbfff;
      param_1[0x53] = param_1[0x53];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar1 = (int *)param_1[0xd5];
      param_1[0xd6] = 0;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar1 = (int *)param_1[200];
      param_1[0xd5] = 0;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar1 = (int *)param_1[0xeb];
      param_1[200] = 0;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar1 = (int *)param_1[0xd8];
      param_1[0xeb] = 0;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar1 = (int *)param_1[0xc9];
      param_1[0xd8] = 0;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar1 = (int *)param_1[0xcc];
      param_1[0xc9] = 0;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar1 = (int *)param_1[0xcd];
      param_1[0xcc] = 0;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      param_1[0xcd] = 0;
      param_1[0x52] = param_1[0x52];
      piVar1 = (int *)param_1[0xca];
      param_1[0x53] = param_1[0x53] & 0xfffffff7;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar1 = (int *)param_1[0xcb];
      param_1[0xca] = 0;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar1 = (int *)param_1[0xd4];
      param_1[0xcb] = 0;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      param_1[0xda] = 0;
      param_1[0xe8] = 0;
      param_1[0x52] = param_1[0x52] & 0xfffffffb;
      param_1[0xe6] = 0;
      param_1[0x53] = param_1[0x53];
      param_1[0xe2] = 0;
      param_1[0x52] = param_1[0x52] & 0xffff7fff;
      param_1[0xe4] = 0;
      param_1[0x53] = param_1[0x53];
      param_1[0xd4] = 0;
      param_1[0x52] = param_1[0x52] & 0xffffffbf;
      param_1[0xdb] = 0;
      param_1[0x53] = param_1[0x53];
      param_1[0xdc] = 0;
      param_1[0x52] = param_1[0x52] & 0xffffff7f;
      param_1[0xdd] = 0;
      param_1[0x53] = param_1[0x53];
      *(undefined2 *)(param_1 + 0xe0) = 0;
      param_1[0x52] = param_1[0x52] & 0xfffffeff;
      param_1[0xe9] = 0;
      param_1[0x53] = param_1[0x53];
      param_1[0xe7] = 0;
      param_1[0x52] = param_1[0x52] & 0xfffffbff;
      param_1[0xe3] = 0;
      param_1[0x53] = param_1[0x53];
      param_1[0xe5] = 0;
      param_1[0x52] = param_1[0x52] & 0xfffffff7;
      param_1[0x53] = param_1[0x53];
      param_1[0x52] = param_1[0x52] & 0xffffffef;
      param_1[0x53] = param_1[0x53];
      param_1[0x52] = param_1[0x52] & 0xffffefff;
      param_1[0x53] = param_1[0x53];
      param_1[0x52] = param_1[0x52] & 0xffffdfff;
      param_1[0x53] = param_1[0x53];
      param_1[0x52] = param_1[0x52] & 0xfffeffff;
      param_1[0x53] = param_1[0x53];
      param_1[0xea] = -1;
      DAT_005ba4b4 = DAT_005ba4b4 & 0xffffdfff;
      return;
    }
    if (iVar2 == 8) {
      FUN_00455360(param_1);
      FUN_00455620(param_1);
    }
  }
  return;
}


