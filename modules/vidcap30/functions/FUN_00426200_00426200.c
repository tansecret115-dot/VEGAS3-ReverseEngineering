/* Module: vidcap30.exe
   Function: FUN_00426200
   Address: 00426200
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00426200(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((*param_1 == 8) && (piVar1 = (int *)param_1[0xff], piVar1 != (int *)0x0)) {
    if ((param_1[0x52] & 0x2000000U) == 0) {
      iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
      if (-1 < iVar2) {
        param_1[0x52] = param_1[0x52] & 0xfeffffff;
        param_1[0x53] = param_1[0x53];
        return iVar2;
      }
    }
    else {
      iVar2 = (**(code **)(*(int *)param_1[0xd4] + 0x10))((int *)param_1[0xd4],piVar1);
      if (-1 < iVar2) {
        param_1[0x52] = param_1[0x52] & 0xfeffffff;
        piVar1 = (int *)param_1[0xff];
        param_1[0x53] = param_1[0x53];
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        param_1[0xff] = 0;
      }
    }
  }
  return iVar2;
}


