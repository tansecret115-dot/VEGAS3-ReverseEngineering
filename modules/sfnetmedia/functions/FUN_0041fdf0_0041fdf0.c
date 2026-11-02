/* Module: sfnetmedia.dll
   Function: FUN_0041fdf0
   Address: 0041fdf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041fdf0(HWND param_1,uchar *param_2)

{
  uchar uVar1;
  uchar *lpsz;
  uchar *puVar2;
  uchar *puVar3;
  BYTE *pBVar4;
  uchar local_104 [260];
  
  if (*param_2 != '\0') {
    FUN_00413410(param_2,local_104,0x104);
    puVar3 = local_104;
    puVar2 = local_104;
    uVar1 = local_104[0];
    while (lpsz = puVar3, uVar1 != '\0') {
      puVar3 = (uchar *)CharNextA((LPCSTR)lpsz);
      uVar1 = *puVar3;
      puVar2 = lpsz;
    }
    if (*puVar2 == '\\') {
      *puVar2 = '\0';
    }
    if (local_104[0] != '\0') {
      pBVar4 = FUN_00419120(DAT_00441d60,0x1144);
      FUN_00417320(param_1,pBVar4);
    }
  }
  return;
}


