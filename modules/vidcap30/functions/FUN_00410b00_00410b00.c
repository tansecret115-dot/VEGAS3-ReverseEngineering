/* Module: vidcap30.exe
   Function: FUN_00410b00
   Address: 00410b00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00410b00(HWND param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  WPARAM wParam;
  HWND pHVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uchar local_100 [256];
  
  puVar5 = (undefined4 *)*param_2;
  if (puVar5 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar5 = param_1;
  SetWindowLongA(param_1,-0x15,(LONG)puVar5);
  puVar2 = (undefined4 *)_SfGetUIFontSize_4(100);
  puVar5[7] = *puVar2;
  puVar5[8] = puVar2[1];
  uVar3 = FUN_00410190();
  puVar5[1] = uVar3;
  wParam = _SfGetUIFont_4(100);
  _SfGetTextExtent_16(wParam,&DAT_00587288,0xffffffff,puVar5 + 0xd);
  SfPrintF(local_100,"$d %% ($d of $d)",100,9999,9999);
  _SfGetTextExtent_16(wParam,local_100,0xffffffff,puVar5 + 0xb);
  puVar5[2] = puVar5[0xb] + 2;
  _mbscpy(local_100,(uchar *)"Cancel");
  piVar1 = puVar5 + 9;
  _SfGetTextExtent_16(wParam,local_100,0xffffffff,piVar1);
  iVar6 = puVar5[10] + 6;
  *piVar1 = *piVar1 + 10;
  iVar7 = puVar5[1];
  puVar5[10] = iVar6;
  if (iVar7 <= iVar6) {
    iVar6 = iVar7;
  }
  puVar5[10] = iVar6;
  iVar7 = (iVar7 - iVar6) / 2 + 2;
  pHVar4 = CreateWindowExA(4,"BUTTON",(LPCSTR)local_100,0x40000000,2,iVar7,*piVar1,iVar6,param_1,
                           (HMENU)0x2,DAT_005ba298,(LPVOID)0x0);
  puVar5[0x6e] = pHVar4;
  if (pHVar4 == (HWND)0x0) {
    return 0;
  }
  SendMessageA(pHVar4,0x30,wParam,0);
  iVar6 = *piVar1;
  pHVar4 = CreateWindowExA(0x20004,"SfKrn_DoneBar_Class","",0x40800000,iVar6 + 4,iVar7,puVar5[2],
                           puVar5[10],param_1,(HMENU)0xffffffff,DAT_005ba298,(LPVOID)0x0);
  puVar5[0x6d] = pHVar4;
  if (pHVar4 == (HWND)0x0) {
    return 0;
  }
  SendMessageA(pHVar4,0x30,wParam,0);
  SendMessageA(pHVar4,0x60d,0,100);
  SendMessageA(pHVar4,0x60c,0,0);
  puVar5[2] = puVar5[2] + iVar6 + 6;
  puVar5 = puVar5 + 0x73;
  iVar7 = 4;
  do {
    puVar5[2] = 0xffffffff;
    *puVar5 = 0;
    puVar5 = puVar5 + 0x21;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  FUN_00405de0(DAT_005ba4c0,param_1,0x2a);
  FUN_00405de0(DAT_005ba4c0,param_1,0x2b);
  FUN_00405de0(DAT_005ba4c0,param_1,0x2d);
  FUN_00405de0(DAT_005ba4c0,param_1,0x2c);
  if (DAT_005ba9a0 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00410190();
  }
  *(undefined4 *)(DAT_005ba4c0 + 100) = uVar3;
  return 1;
}


