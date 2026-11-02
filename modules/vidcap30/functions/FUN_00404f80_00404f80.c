/* Module: vidcap30.exe
   Function: FUN_00404f80
   Address: 00404f80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00404f80(int *param_1,undefined4 param_2,LONG param_3,LONG param_4)

{
  int *piVar1;
  POINT Point;
  HWND pHVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar4 = 0x7f88;
  Point.y = param_4;
  Point.x = param_3;
  pHVar2 = WindowFromPoint(Point);
  if (pHVar2 == (HWND)0x0) {
    return 0x7f88;
  }
  if (param_1[0x2c] != 0) {
    return 0xf;
  }
  if (pHVar2 == (HWND)*param_1) {
    return 0x7f88;
  }
  piVar3 = (int *)FUN_00404b90(pHVar2);
  piVar1 = (int *)param_1[0x2b];
  if (piVar1 != (int *)0x0) {
    if ((piVar3 != piVar1) && (*(code **)(*piVar1 + 0x14) != (code *)0x0)) {
      (**(code **)(*piVar1 + 0x14))(piVar1,0,param_3,param_4,1);
    }
    param_1[0x2b] = 0;
  }
  if (piVar3 != (int *)0x0) {
    uVar4 = 0x7f88;
    if (*(code **)(*piVar3 + 0x14) != (code *)0x0) {
      uVar4 = (**(code **)(*piVar3 + 0x14))(piVar3,param_2,param_3,param_4,0);
      param_1[0x2b] = (int)piVar3;
    }
  }
  return uVar4;
}


