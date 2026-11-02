/* Module: vegas30k.dll
   Function: _FXPackage_LoadPackageData@8
   Address: 01029ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _FXPackage_LoadPackageData_8(HKEY param_1,DWORD param_2,DWORD param_3,DWORD param_4)

{
  LSTATUS LVar1;
  HANDLE hFile;
  DWORD DVar2;
  HGLOBAL pvVar3;
  LPVOID lpBuffer;
  BOOL BVar4;
  int iVar5;
  int *piVar6;
  uint nNumberOfBytesToRead;
  int *piVar7;
  bool bVar8;
  int *in_stack_00001018;
  int *in_stack_0000101c;
  
                    /* 0x29ee0  643  _FXPackage_LoadPackageData@8 */
  FUN_01002100();
  if (in_stack_00001018 == (int *)0x0) {
    return -0x7fffbffd;
  }
  if (in_stack_0000101c == (int *)0x0) {
    return -0x7fffbffd;
  }
  iVar5 = 4;
  bVar8 = true;
  piVar6 = &DAT_011dab90;
  piVar7 = in_stack_0000101c;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar8 = *piVar6 == *piVar7;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  } while (bVar8);
  if (bVar8) {
    return -0x7fffbffd;
  }
  param_1 = (HKEY)0x0;
  iVar5 = _FXPackage_OpenPackageRegKey_24
                    (*in_stack_0000101c,in_stack_0000101c[1],in_stack_0000101c[2],
                     in_stack_0000101c[3],&param_1,0);
  if (iVar5 == 0) {
    RegQueryValueExA(param_1,"Name",(LPDWORD)0x0,&param_2,(LPBYTE)(in_stack_0000101c + 4),
                     (LPDWORD)&stack0x00000000);
    RegQueryValueExA(param_1,"Type",(LPDWORD)0x0,&param_2,(LPBYTE)(in_stack_0000101c + 0x45),
                     (LPDWORD)&stack0x00000000);
    RegQueryValueExA(param_1,"Flags",(LPDWORD)0x0,&param_2,(LPBYTE)(in_stack_0000101c + 0x46),
                     (LPDWORD)&stack0x00000000);
    LVar1 = RegQueryValueExA(param_1,"Stream",(LPDWORD)0x0,&param_2,&stack0x00000014,
                             (LPDWORD)&stack0x00000000);
    if (LVar1 == 0) {
      if (param_2 == 1) {
        hFile = CreateFileA(&stack0x00000014,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                            (HANDLE)0x0);
        if (hFile == (HANDLE)0xffffffff) {
          iVar5 = -0x7ffb1ff9;
        }
        else {
          DVar2 = SetFilePointer(hFile,0,(PLONG)0x0,2);
          SetFilePointer(hFile,0,(PLONG)0x0,0);
          param_3 = DVar2;
          if (0xffff < DVar2) {
            param_3 = 0x10000;
          }
          pvVar3 = GlobalAlloc(0x40,param_3);
          lpBuffer = GlobalLock(pvVar3);
          if (lpBuffer != (LPVOID)0x0) {
            if (DVar2 != 0) {
              while( true ) {
                nNumberOfBytesToRead = param_3;
                if (DVar2 < param_3) {
                  nNumberOfBytesToRead = DVar2;
                }
                BVar4 = ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,&param_4,(LPOVERLAPPED)0x0);
                if ((BVar4 == 0) || (param_4 != nNumberOfBytesToRead)) break;
                iVar5 = (**(code **)(*in_stack_00001018 + 0x10))
                                  (in_stack_00001018,lpBuffer,param_4,0);
                if ((iVar5 < 0) || (DVar2 = DVar2 - param_4, DVar2 == 0)) goto LAB_0102a0ec;
              }
              iVar5 = -0x7ffb1ff8;
            }
LAB_0102a0ec:
            pvVar3 = GlobalHandle(lpBuffer);
            GlobalUnlock(pvVar3);
            pvVar3 = GlobalHandle(lpBuffer);
            GlobalFree(pvVar3);
          }
          CloseHandle(hFile);
        }
      }
      else if (param_2 == 3) {
        iVar5 = (**(code **)(*in_stack_00001018 + 0x10))
                          (in_stack_00001018,&stack0x00000014,0x1000,0);
      }
    }
    RegCloseKey(param_1);
  }
  return iVar5;
}


