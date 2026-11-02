/* Module: vidcap30.exe
   Function: FUN_00405040
   Address: 00405040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405040(int *param_1,int *param_2,LONG param_3,LONG param_4,int param_5)

{
  int *piVar1;
  code *pcVar2;
  POINT Point;
  HWND pHVar3;
  int *piVar4;
  
  piVar4 = (int *)0x0;
  Point.y = param_4;
  Point.x = param_3;
  pHVar3 = WindowFromPoint(Point);
  if ((pHVar3 != (HWND)0x0) && (pHVar3 != (HWND)*param_1)) {
    piVar4 = (int *)FUN_00404b90(pHVar3);
  }
  piVar1 = (int *)param_1[0x2b];
  if (piVar1 != (int *)0x0) {
    if ((piVar4 != piVar1) && (*(code **)(*piVar1 + 0x14) != (code *)0x0)) {
      (**(code **)(*piVar1 + 0x14))(piVar1,param_2,param_3,param_4,1);
    }
    param_1[0x2b] = 0;
  }
  if ((piVar4 == (int *)0x0) || (param_1[0x2d] != piVar4[5])) {
    FUN_00416f40(param_2,*param_1);
    if (*param_2 < 1) {
      return 1;
    }
    FUN_00416f90(param_2,*param_1);
    if (*param_2 < 1) {
      return 1;
    }
    if (param_1[0x2c] != 0) {
      return 1;
    }
    if (piVar4 == (int *)0x0) {
      return 1;
    }
    pcVar2 = *(code **)(*piVar4 + 0x14);
  }
  else {
    pcVar2 = *(code **)(*piVar4 + 0x14);
  }
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(piVar4,param_2,param_3,param_4,3 - (uint)(param_5 != 0));
  }
  return 1;
}


