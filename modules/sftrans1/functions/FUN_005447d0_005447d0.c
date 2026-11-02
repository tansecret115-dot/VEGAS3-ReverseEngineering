/* Module: sftrans1.dll
   Function: FUN_005447d0
   Address: 005447d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005447d0(HDC param_1,undefined2 *param_2,DWORD param_3)

{
  DWORD DVar1;
  int iVar2;
  undefined2 *pvBuffer;
  
  pvBuffer = param_2;
  iVar2 = 1;
  param_2 = (undefined2 *)0x7;
  do {
    DVar1 = GetFontData(param_1,DAT_005771e0,param_3,pvBuffer,2);
    *pvBuffer = CONCAT11(*(undefined1 *)pvBuffer,*(undefined1 *)((int)pvBuffer + 1));
    pvBuffer = pvBuffer + 1;
    if ((DVar1 == 2) && (iVar2 != 0)) {
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
    param_3 = param_3 + 2;
    param_2 = (undefined2 *)((int)param_2 + -1);
  } while (param_2 != (undefined2 *)0x0);
  return iVar2;
}


