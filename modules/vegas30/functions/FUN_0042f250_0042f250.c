/* Module: vegas30.exe
   Function: FUN_0042f250
   Address: 0042f250
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0042f43b) */

long FUN_0042f250(void)

{
  long lVar1;
  HCURSOR pHVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LPCSTR lpString;
  undefined4 *puVar6;
  uint in_stack_00000010;
  int in_stack_00000014;
  uint in_stack_00000018;
  undefined4 in_stack_0000001c;
  uint in_stack_00000020;
  undefined1 *in_stack_0000002c;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  int in_stack_0000004c;
  undefined4 in_stack_00000154;
  undefined4 *in_stack_00008984;
  int in_stack_0000898c;
  
  FUN_0060ac30();
  puVar6 = (undefined4 *)&stack0x0000026c;
  for (iVar4 = 0x145; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar6 = &stack0x00000010;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  in_stack_0000001c = 0x8200;
  in_stack_0000002c = &LAB_0042f1c0;
  in_stack_00000014 = (-(uint)(in_stack_0000898c != 0) & 0xffffff50) + 0xbf;
  in_stack_00000018 = -(uint)(in_stack_0000898c != 0) & 4 | 1;
  in_stack_00000034 = 1;
  in_stack_00000038 = 1;
  in_stack_00000010 = -(uint)(in_stack_0000898c != 0) & 0x610a80;
  in_stack_00000040 = 0;
  lVar1 = Project_FileOpenDlg((HWND__ *)*in_stack_00008984,&stack0x00000780,
                              (SFFILE_DLG_PARAMS *)&stack0x00000010,
                              (SFFILETYPEINFO *)&stack0x0000026c);
  if (lVar1 == 0) {
    SfOpenFile_GetPathName(&stack0x00000780,in_stack_00000020,&stack0x00000050,0x104);
    _SfAddSlashToPathName_8();
    lpString = &stack0x00000780 + in_stack_00000020;
    iVar4 = lstrlenA(&stack0x00000050);
    pHVar2 = (HCURSOR)_SfLoadCursor_8();
    pHVar2 = SetCursor(pHVar2);
    while (iVar3 = lstrlenA(lpString), iVar3 != 0) {
      lstrcpynA(&stack0x00000050 + iVar4,lpString,0x104 - iVar4);
      (&stack0x00000153)[(0x104 - iVar4) + iVar4 + -0x104] = 0;
      if (in_stack_0000004c != 0) {
        puVar6 = &stack0x00000154;
        for (iVar5 = 0x46; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        in_stack_00000154 = 2;
        SfPrintF();
        FUN_005f0420();
      }
      FUN_004ec280();
      lpString = lpString + iVar3 + 1;
    }
    SetCursor(pHVar2);
  }
  return lVar1;
}


