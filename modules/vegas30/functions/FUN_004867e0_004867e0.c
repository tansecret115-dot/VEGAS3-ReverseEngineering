/* Module: vegas30.exe
   Function: FUN_004867e0
   Address: 004867e0
   Source: Ghidra pseudocode (Stage 10 batch) */


tagBITMAPINFOHEADER * __fastcall FUN_004867e0(tagBITMAPINFOHEADER *param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  LONG LVar3;
  int iVar4;
  WORD *pWVar5;
  DWORD *pDVar6;
  bool bVar7;
  undefined4 uVar8;
  tagBITMAPINFOHEADER *local_4;
  
  local_4 = param_1;
  FUN_00582d30();
  param_1->biSize = (DWORD)&PTR_FUN_00612d2c;
  pWVar5 = (WORD *)&param_1->biHeight;
  for (iVar4 = 0xd8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(LONG *)pWVar5 = 0;
    pWVar5 = pWVar5 + 2;
  }
  SfLoadPngDib(DAT_00647204,(char *)0x628,0,&local_4);
  param_1->biPlanes = 0;
  param_1->biBitCount = 0;
  param_1->biHeight = (LONG)local_4;
  *(undefined1 *)&param_1->biCompression = 0;
  *(undefined1 *)&param_1[6].biClrImportant = 0;
  param_1[0xd].biCompression = 0;
  param_1[0xd].biSizeImage = 0;
  param_1[0xd].biClrUsed = 0;
  param_1[0xd].biClrImportant = 1;
  param_1[0xd].biXPelsPerMeter = 1;
  bVar7 = DAT_0064a7bc != 0;
  param_1[0xe].biYPelsPerMeter = 1;
  param_1[0xe].biXPelsPerMeter = bVar7 + 1;
  param_1[0xe].biClrUsed = 0;
  param_1[0xe].biClrImportant = 0;
  param_1[0xe].biWidth = DAT_0064ab74;
  pDVar6 = &param_1[0x15].biClrUsed;
  for (iVar4 = 0x28c; DVar1 = DAT_0064b138, iVar4 != 0; iVar4 = iVar4 + -1) {
    *pDVar6 = 0;
    pDVar6 = pDVar6 + 1;
  }
  uVar8 = 1;
  param_1[0x57].biSize = DAT_0064b138;
  uVar2 = FUN_005ba4b0(DVar1,0);
  LVar3 = FUN_005ba5c0(param_1[0x57].biSize,uVar2,uVar8);
  param_1[0xf].biHeight = LVar3;
  return param_1;
}


