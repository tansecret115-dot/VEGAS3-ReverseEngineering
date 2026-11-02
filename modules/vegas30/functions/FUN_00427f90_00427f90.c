/* Module: vegas30.exe
   Function: FUN_00427f90
   Address: 00427f90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00427f90(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  __int64 _Var4;
  undefined8 uVar5;
  
  if (DAT_0064762c == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(DAT_0064762c + 0x80);
  }
  iVar3 = 1;
  if ((((iVar2 != 0) && (*(int *)(iVar2 + 0x94 + param_3 * 8) != 0)) &&
      (*(int *)(iVar2 + 0x4f4) == 0)) && (*(int *)(iVar2 + 0x4f8) == 0)) {
    iVar1 = Transport_IsPlaying();
    if (iVar1 != 0) {
      if ((param_3 == 0) && ((DAT_0064761c & 0x800) == 0)) {
        if (param_2 < 1) {
          if (param_2 < 0) {
            _Var4 = Transport_GetPos();
          }
          else {
            _Var4 = CONCAT44(param_2,param_1);
          }
        }
        else {
          _Var4 = CONCAT44(param_2,param_1);
        }
        iVar3 = (**(code **)(**(int **)(iVar2 + 0x94) + 0x1c))(_Var4);
        if (-1 < iVar3) {
          (**(code **)(**(int **)(iVar2 + 0x94) + 0x10))();
        }
      }
      return iVar3;
    }
    uVar5 = CONCAT44(param_2,param_1);
    if ((param_2 < 1) && (uVar5 = CONCAT44(param_2,param_1), param_2 < 0)) {
      uVar5 = FUN_004581e0(DAT_00647630);
    }
    iVar1 = FUN_005fc2b0();
    if (iVar1 == 0) {
      iVar3 = (**(code **)(**(int **)(iVar2 + 0x94 + param_3 * 8) + 0x20))(uVar5);
    }
    return iVar3;
  }
  return 1;
}


