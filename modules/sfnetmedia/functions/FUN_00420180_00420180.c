/* Module: sfnetmedia.dll
   Function: FUN_00420180
   Address: 00420180
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00420180(HWND param_1,int param_2)

{
  HFONT wParam;
  int *unaff_EDI;
  LPARAM lParam;
  HWND__ local_334;
  uint *local_330;
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
  local_334.unused = *(int *)(param_2 + 0x10);
  local_32c = (int *)0x0;
  local_330 = (uint *)0x0;
  local_328 = (int *)0x0;
  if ((int *)local_334.unused == (int *)0x0) {
    if ((*(int *)(param_2 + 0x14) == 0) || (local_30c[0] == '\0')) goto LAB_00420276;
    local_208[0] = L'\0';
    MultiByteToWideChar(0,1,(LPCSTR)local_30c,-1,local_208,0x104);
    local_2 = 0;
    (**(code **)(**(int **)(param_2 + 0x14) + 0x58))(*(int **)(param_2 + 0x14),local_208,&local_334)
    ;
    if ((int *)local_334.unused != (int *)0x0) goto LAB_00420224;
  }
  else {
LAB_00420224:
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*local_334.unused + 0xc))(local_334.unused,&local_32c);
    (**(code **)(*unaff_EDI + 0x58))(unaff_EDI,&stack0xfffffcc8);
  }
  if (local_330 != (uint *)0x0) {
    (**(code **)*local_330)(local_330,&DAT_00434dc0,&local_328);
  }
  if (local_328 != (int *)0x0) {
    (**(code **)(*local_328 + 0xc))(local_328,auStack_324);
  }
LAB_00420276:
  FUN_00417320(param_1,(BYTE *)0x0);
  lParam = 0;
  wParam = FUN_0042bb10(0x66);
  SendMessageA(param_1,0x30,(WPARAM)wParam,lParam);
  FUN_0041ffa0(param_1,(int *)local_334.unused,(LPCSTR)local_30c,0x104);
  FUN_0041fe80(param_1,(int *)local_334.unused,(LPCSTR)local_30c);
  FUN_0041fdf0(param_1,local_30c);
  FUN_0041fd60(param_1,(LPCSTR)local_30c);
  FUN_0041fb40(param_1,(LPCSTR)local_30c);
  FUN_0041fa00(param_1,(LPCSTR)local_30c);
  FUN_0041f9b0(param_1,local_334);
  FUN_0041f800(param_1,(int *)local_334.unused,local_330);
  FUN_0041ed90(param_1,(int *)local_330);
  FUN_00420050(param_1,*(int **)(param_2 + 0x14),(undefined4 *)local_334.unused);
  FUN_0041ec00(param_1,*(undefined4 *)(param_2 + 0x14),local_32c);
  if (local_328 != (int *)0x0) {
    (**(code **)(*local_328 + 8))(local_328);
  }
  if (local_330 != (uint *)0x0) {
    (**(code **)(*local_330 + 8))(local_330);
    local_330 = (uint *)0x0;
  }
  if (local_32c != (int *)0x0) {
    (**(code **)(*local_32c + 8))(local_32c);
    local_32c = (int *)0x0;
  }
  if ((int *)local_334.unused != (int *)0x0) {
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*local_334.unused + 8))();
  }
  return;
}


