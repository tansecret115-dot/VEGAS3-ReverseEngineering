/* Module: vegas30.exe
   Function: FUN_0050ff00
   Address: 0050ff00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0050ff00(HDC param_1,POINT *param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_4 < 1) {
    return 1;
  }
  do {
    switch(*(undefined1 *)(iVar1 + param_3)) {
    case 2:
    case 3:
      LineTo(param_1,param_2->x,param_2->y);
      break;
    case 4:
    case 5:
      PolyBezierTo(param_1,param_2,3);
      iVar1 = iVar1 + 2;
      param_2 = param_2 + 2;
      break;
    case 6:
      MoveToEx(param_1,param_2->x,param_2->y,(LPPOINT)0x0);
    }
    iVar1 = iVar1 + 1;
    param_2 = param_2 + 1;
  } while (iVar1 < param_4);
  return 1;
}


