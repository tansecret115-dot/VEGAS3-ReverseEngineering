/* Module: vidcap30.exe
   Function: FUN_0040f740
   Address: 0040f740
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0040f853) */
/* WARNING: Removing unreachable block (ram,0x0040f864) */

long FUN_0040f740(uint param_1,int param_2,HCURSOR param_3)

{
  long lVar1;
  int iVar2;
  HCURSOR hCursor;
  LPCSTR lpString;
  undefined4 *in_stack_00008318;
  
  FUN_00579db0();
  lVar1 = Project_FileOpenDlg((HWND__ *)*in_stack_00008318,&stack0x00000114,(ushort *)&param_1,2,
                              0xa8,"sfvidcap",0);
  if (lVar1 == 0) {
    FUN_00450030(&stack0x00000114,param_1 & 0xffff,&stack0x00000010,0x104);
    _SfAddSlashToPathName_8(&stack0x00000010,0x104);
    lpString = &stack0x00000114 + (param_1 & 0xffff);
    iVar2 = lstrlenA(&stack0x00000010);
    hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
    param_3 = SetCursor(hCursor);
    do {
      param_2 = lstrlenA(lpString);
      if (param_2 == 0) break;
      lstrcpynA(&stack0x00000010 + iVar2,lpString,0x104 - iVar2);
      (&stack0x00000113)[(0x104 - iVar2) + iVar2 + -0x104] = 0;
      lVar1 = FUN_00417770(&stack0x00000000,&stack0x00000010,0,0xffffffff,0);
      if (lVar1 < 0) {
        if (lVar1 == -0x7ffb1ff4) break;
        lVar1 = 0;
      }
      lpString = lpString + param_2 + 1;
    } while (-1 < lVar1);
    SetCursor(param_3);
  }
  return lVar1;
}


