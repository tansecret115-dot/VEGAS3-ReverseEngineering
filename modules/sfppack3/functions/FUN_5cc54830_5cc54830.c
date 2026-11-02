/* Module: sfppack3.dll
   Function: FUN_5cc54830
   Address: 5cc54830
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc54830(HWND param_1,HANDLE param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  HFONT pHVar3;
  int iVar4;
  LOGFONTA *pLVar5;
  LOGFONTA local_3c;
  
  puVar1 = (undefined4 *)GetWindowLongA(param_1,4);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = GetWindowLongA((HWND)*puVar1,-0x10);
    if ((uVar2 & 0x10) != 0) {
      pLVar5 = &local_3c;
      for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
        pLVar5->lfHeight = 0;
        pLVar5 = (LOGFONTA *)&pLVar5->lfWidth;
      }
      GetObjectA(param_2,0x3c,&local_3c);
      local_3c.lfUnderline = '\x01';
      pHVar3 = CreateFontIndirectA(&local_3c);
      puVar1[8] = 1;
      puVar1[2] = pHVar3;
      return;
    }
    puVar1[2] = param_2;
  }
  return;
}


