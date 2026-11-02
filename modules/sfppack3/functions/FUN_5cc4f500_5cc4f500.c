/* Module: sfppack3.dll
   Function: FUN_5cc4f500
   Address: 5cc4f500
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc4f500(HWND param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)GetWindowLongA(param_1,0);
  iVar2 = FUN_5cc4f230(puVar1,(LONG *)0x0);
  if ((iVar2 < 0) && (puVar1[0xe] != 0)) {
    KillTimer((HWND)*puVar1,puVar1[0xe]);
    puVar1[0xe] = 0;
  }
  if (iVar2 != puVar1[1]) {
    puVar1[1] = iVar2;
    InvalidateRect(param_1,(RECT *)0x0,1);
  }
  return;
}


