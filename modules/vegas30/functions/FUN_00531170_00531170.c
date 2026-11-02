/* Module: vegas30.exe
   Function: FUN_00531170
   Address: 00531170
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00531170(undefined4 param_1,HCURSOR param_2,int param_3,uchar param_4)

{
  uchar uVar1;
  HCURSOR hCursor;
  char *pcVar2;
  BOOL BVar3;
  uchar *_Source;
  HGLOBAL pvVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  LPCVOID unaff_retaddr;
  DWORD in_stack_00000024;
  HWND in_stack_00000028;
  HINSTANCE in_stack_0000002c;
  LPCSTR in_stack_00000030;
  LPSTR in_stack_00000034;
  DWORD in_stack_00000038;
  DWORD in_stack_0000003c;
  char *in_stack_00000040;
  DWORD in_stack_00000044;
  LPCSTR in_stack_00000050;
  LPCSTR in_stack_00000054;
  DWORD in_stack_00000058;
  uint in_stack_0000005c;
  LPCSTR in_stack_00000060;
  undefined1 *in_stack_00000064;
  code *in_stack_00000068;
  LPCSTR in_stack_0000006c;
  CHAR in_stack_00000070;
  undefined4 in_stack_00000170;
  char in_stack_00000174;
  WCHAR in_stack_0000037c;
  int *in_stack_00001afc;
  HWND in_stack_00001e2c;
  undefined4 *in_stack_00001e30;
  
  FUN_0060ac30();
  puVar6 = (undefined4 *)&stack0x00000684;
  for (iVar5 = 0x5e8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar6 = in_stack_00001e30;
  puVar7 = (undefined4 *)&stack0x00000684;
  for (iVar5 = 0x28c; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = in_stack_00001e30;
  puVar7 = (undefined4 *)&stack0x000010b4;
  for (iVar5 = 0x28c; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  param_3 = 0;
  SetCapture(in_stack_00001e2c);
  hCursor = (HCURSOR)_SfLoadCursor_8();
  param_2 = SetCursor(hCursor);
  FUN_00530ac0();
  SetCursor(param_2);
  ReleaseCapture();
  puVar6 = &stack0x00000024;
  for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  in_stack_00000024 = 0x4c;
  in_stack_00000054 = (LPCSTR)_SfGetString_8();
  in_stack_00000064 = &stack0x00000684;
  in_stack_00000034 = (LPSTR)0x0;
  in_stack_00000038 = 0;
  in_stack_0000003c = 1;
  in_stack_0000005c = 0;
  in_stack_00000060 = (LPCSTR)0x0;
  in_stack_00000174 = '\0';
  in_stack_00000068 = FUN_00530460;
  in_stack_00000058 = 0x80866;
  in_stack_0000006c = (LPCSTR)0x325;
  in_stack_0000002c = (HINSTANCE)_SfFindResInstance_12();
  pcVar2 = (char *)_SfGetFileNameExtensionPtrA_4();
  if (*pcVar2 != '\0') {
    _mbscpy(&param_4,(uchar *)(pcVar2 + 1));
  }
  in_stack_0000003c = FUN_0052e9c0();
  _mbscpy(&stack0x00000278,&DAT_006474f4);
  in_stack_00000050 = &stack0x00000278;
  FUN_0052e8f0();
  in_stack_00000060 = (LPCSTR)&param_4;
  _splitpath(&stack0x00000684,(char *)0x0,(char *)0x0,&stack0x00000174,(char *)0x0);
  SfPrintF();
  in_stack_00000040 = &stack0x000010b4;
  in_stack_00000044 = 0x104;
  BVar3 = GetSaveFileNameA((LPOPENFILENAMEA)&stack0x00000024);
  if (BVar3 == 0) {
    CommDlgExtendedError();
    iVar5 = param_3;
  }
  else {
    SfOpenFile_GetPathName(in_stack_00000040,in_stack_0000005c & 0xffff,&DAT_006474f4,0x104);
    _splitpath(&stack0x000010b4,(char *)&param_1,&stack0x00000584,(char *)0x0,(char *)&param_4);
    _makepath(&DAT_006474f4,(char *)&param_1,&stack0x00000584,(char *)0x0,(char *)0x0);
    _Source = &param_4;
    uVar1 = param_4;
    while ((uVar1 != '\0' && (uVar1 == '.'))) {
      _Source = (uchar *)CharNextA((LPCSTR)_Source);
      uVar1 = *_Source;
    }
    _mbscpy(&DAT_006489ac,_Source);
    DAT_006490e4 = *(undefined4 *)(&stack0x00001afc + in_stack_0000003c * 4);
    puVar6 = (undefined4 *)&stack0x000010b4;
    puVar7 = in_stack_00001e30;
    for (iVar5 = 0x28c; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    if (in_stack_00001afc != (int *)0x0) {
      (**(code **)(*in_stack_00001afc + 0x10))();
      (**(code **)(*DAT_0064b510 + 0x80))();
      if ((&stack0x00000000 == (undefined1 *)0xfffffc84) || (in_stack_0000037c != L'\0')) {
        WideCharToMultiByte(0,0,(LPCWSTR)&stack0x0000037c,-1,&stack0x00000070,0x104,(LPCSTR)0x0,
                            (LPBOOL)0x0);
      }
      else if (&stack0x00000000 != (undefined1 *)0xffffff90) {
        in_stack_00000070 = '\0';
      }
      in_stack_00000170._3_1_ = 0;
      lstrcpynA(&DAT_006490e8,&stack0x00000070,0x104);
      DAT_006491eb = 0;
      in_stack_00001e30[0x44] = in_stack_00001afc;
    }
    iVar5 = 1;
  }
  if (in_stack_0000003c != 0) {
    (**(code **)(*DAT_0064b510 + 0x94))();
  }
  if (unaff_retaddr != (LPCVOID)0x0) {
    pvVar4 = GlobalHandle(unaff_retaddr);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(unaff_retaddr);
    GlobalFree(pvVar4);
  }
  return iVar5 == 0;
}


