/* Module: vegas30.exe
   Function: FUN_0043d120
   Address: 0043d120
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043d120(undefined4 param_1,DWORD param_2,DWORD param_3,DWORD param_4,uint param_5,
                int param_6,uint param_7,int param_8)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  HANDLE hFile_00;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  LPCSTR in_stack_00020040;
  LPCSTR in_stack_00020044;
  int in_stack_00020048;
  int *in_stack_0002004c;
  
  FUN_0060ac30();
  iVar4 = 0;
  hFile = CreateFileA(in_stack_00020040,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000000,
                      (HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar2 = GetLastError();
    iVar4 = _SfErrorHandler_TranslateWin32Error_4(DVar2);
    return iVar4;
  }
  BVar1 = GetFileTime(hFile,(LPFILETIME)&stack0x0000002c,(LPFILETIME)&stack0x00000034,
                      (LPFILETIME)&stack0x00000024);
  if (BVar1 != 0) {
    DVar2 = 2;
    if (in_stack_00020048 != 0) {
      DVar2 = 1;
    }
    hFile_00 = CreateFileA(in_stack_00020044,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,DVar2,0x8000080
                           ,(HANDLE)0x0);
    if (hFile_00 != (HANDLE)0xffffffff) {
      iVar7 = 0;
      param_3 = GetFileSize(hFile,&param_4);
      uVar5 = 0;
      param_6 = in_stack_0002004c[1] - *in_stack_0002004c;
      do {
        BVar1 = ReadFile(hFile,&stack0x0000003c,0x20000,&param_2,(LPOVERLAPPED)0x0);
        if (BVar1 == 0) {
          iVar7 = -0x7ffb1ff8;
          goto LAB_0043d2c1;
        }
        if (param_2 != 0) {
          BVar1 = WriteFile(hFile_00,&stack0x0000003c,param_2,&param_5,(LPOVERLAPPED)0x0);
          if ((BVar1 == 0) || (param_2 != param_5)) {
            iVar7 = -0x7ffb1ff7;
            goto LAB_0043d2c1;
          }
          bVar6 = CARRY4(uVar5,param_5);
          uVar5 = uVar5 + param_5;
          iVar4 = iVar4 + (uint)bVar6;
          param_7 = uVar5;
          param_8 = iVar4;
          uVar3 = ftol();
          FUN_004e7320(in_stack_0002004c[2],uVar3);
          if ((*(byte *)(in_stack_0002004c[2] + 0x1c) & 1) != 0) {
            iVar7 = -0x7ffb1ff4;
            goto LAB_0043d2c1;
          }
        }
      } while ((iVar4 <= (int)param_4) && ((iVar4 < (int)param_4 || (uVar5 < param_3))));
      BVar1 = SetFileTime(hFile_00,(FILETIME *)&stack0x0000002c,(FILETIME *)&stack0x00000034,
                          (FILETIME *)&stack0x00000024);
      if (BVar1 == 0) {
        DVar2 = GetLastError();
        iVar7 = _SfErrorHandler_TranslateWin32Error_4(DVar2);
      }
LAB_0043d2c1:
      CloseHandle(hFile_00);
      if (iVar7 < 0) {
        DeleteFileA(in_stack_00020044);
      }
      goto LAB_0043d2e2;
    }
  }
  DVar2 = GetLastError();
  iVar7 = _SfErrorHandler_TranslateWin32Error_4(DVar2);
LAB_0043d2e2:
  CloseHandle(hFile);
  return iVar7;
}


