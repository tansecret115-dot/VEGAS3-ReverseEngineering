/* Module: vegas30.exe
   Function: FUN_0040c650
   Address: 0040c650
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040c650(int *param_1,LONG param_2,LONG param_3)

{
  POINT Point;
  HWND pHVar1;
  int *piVar2;
  int iVar3;
  
  Point.y = param_3;
  Point.x = param_2;
  pHVar1 = WindowFromPoint(Point);
  if ((pHVar1 != (HWND)0x0) && (pHVar1 != (HWND)*param_1)) {
    piVar2 = (int *)FUN_0040c090(pHVar1);
    if (piVar2 != (int *)0x0) {
      if (param_1[0x36] == piVar2[5]) {
        if (*(code **)(*piVar2 + 0x14) != (code *)0x0) {
          (**(code **)(*piVar2 + 0x14))(piVar2,0,param_2,param_3,4);
        }
        return 1;
      }
      if (*(code **)(*piVar2 + 0x14) != (code *)0x0) {
        iVar3 = (**(code **)(*piVar2 + 0x14))(piVar2,0,param_2,param_3,4);
        if (iVar3 != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}


