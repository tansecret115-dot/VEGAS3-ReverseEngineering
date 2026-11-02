/* Module: vegas30k.dll
   Function: FUN_0101f280
   Address: 0101f280
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0101f280(HWND param_1,int param_2)

{
  int iVar1;
  WPARAM wParam;
  undefined4 uVar2;
  int *unaff_EDI;
  LPARAM lParam;
  int *local_334;
  int *local_330;
  int *local_32c;
  int *local_328;
  undefined1 auStack_324 [24];
  uchar local_30c [260];
  WCHAR local_208 [259];
  undefined2 local_2;
  
  local_30c[0] = '\0';
  if (*(uchar **)(param_2 + 8) != (uchar *)0x0) {
    _mbscpy(local_30c,*(uchar **)(param_2 + 8));
  }
  local_334 = *(int **)(param_2 + 0x10);
  uVar2 = 0;
  local_32c = (int *)0x0;
  local_330 = (int *)0x0;
  local_328 = (int *)0x0;
  if (local_334 == (int *)0x0) {
    if ((*(int *)(param_2 + 0x14) == 0) || (local_30c[0] == '\0')) goto LAB_0101f376;
    local_208[0] = L'\0';
    MultiByteToWideChar(0,1,(LPCSTR)local_30c,-1,local_208,0x104);
    local_2 = 0;
    (**(code **)(**(int **)(param_2 + 0x14) + 0x58))(*(int **)(param_2 + 0x14),local_208,&local_334)
    ;
    if (local_334 != (int *)0x0) goto LAB_0101f324;
  }
  else {
LAB_0101f324:
    (**(code **)(*local_334 + 0xc))(local_334,&local_32c);
    (**(code **)(*unaff_EDI + 0x58))(unaff_EDI,&stack0xfffffcc8);
  }
  if (local_330 != (int *)0x0) {
    (**(code **)*local_330)(local_330,&DAT_011da0d0,&local_328);
  }
  if (local_328 != (int *)0x0) {
    iVar1 = (**(code **)(*local_328 + 0xc))(local_328,auStack_324);
    if ((-1 < iVar1) && (iVar1 != 1)) {
      uVar2 = 1;
    }
  }
LAB_0101f376:
  SfMEditPrintF(param_1,0);
  lParam = 0;
  wParam = _SfGetUIFont_4(0x66);
  SendMessageA(param_1,0x30,wParam,lParam);
  FUN_0101f0a0(param_1,local_334,local_30c,0x104);
  FUN_0101ef80(param_1,local_334,local_30c);
  FUN_0101eef0(param_1,local_30c);
  FUN_0101ee60(param_1,local_30c);
  FUN_0101ec40(param_1,local_30c);
  FUN_0101eb00(param_1,local_30c);
  FUN_0101eab0(param_1,local_334);
  FUN_0101e900(param_1,local_334,local_330,uVar2,auStack_324);
  FUN_0101de90(param_1,local_330);
  FUN_0101f150(param_1,*(undefined4 *)(param_2 + 0x14),local_334);
  FUN_0101dd00(param_1,*(undefined4 *)(param_2 + 0x14),local_32c);
  if (local_328 != (int *)0x0) {
    (**(code **)(*local_328 + 8))(local_328);
  }
  if (local_330 != (int *)0x0) {
    (**(code **)(*local_330 + 8))(local_330);
    local_330 = (int *)0x0;
  }
  if (local_32c != (int *)0x0) {
    (**(code **)(*local_32c + 8))(local_32c);
    local_32c = (int *)0x0;
  }
  if (local_334 != (int *)0x0) {
    (**(code **)(*local_334 + 8))();
  }
  return;
}


