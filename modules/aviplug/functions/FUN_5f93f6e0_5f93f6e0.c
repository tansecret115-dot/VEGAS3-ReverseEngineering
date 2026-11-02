/* Module: aviplug.dll
   Function: FUN_5f93f6e0
   Address: 5f93f6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f93f6e0(uint param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  HANDLE hFile;
  DWORD DVar5;
  BOOL BVar6;
  uint uVar7;
  uchar local_134 [260];
  CHAR local_30 [32];
  undefined4 local_10;
  LONG local_c;
  int local_8;
  
  uVar2 = param_1;
  uVar7 = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 0x94) != -1) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x1c);
  if (*(int *)(iVar4 + 0x20) == 0) {
    return -0x7fff0001;
  }
  param_1 = 0xffffffff;
  if (*(int *)(iVar4 + 0x20) != 0) {
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(uVar2 + 0x40) + 4) * uVar7 +
                               *(int *)(*(int *)(uVar2 + 0x40) + 8)) + 8);
      if (iVar1 == 0x73646976) {
        if (uVar7 != 0xffffffff) goto LAB_5f93f779;
        break;
      }
      if (iVar1 == 0x73766169) {
        param_1 = uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(iVar4 + 0x20));
  }
  uVar7 = -(uint)(param_1 != 0xffffffff) & param_1;
LAB_5f93f779:
  *(uint *)(uVar2 + 0x44) = uVar7;
  piVar3 = (int *)(*(int *)(*(int *)(uVar2 + 0x40) + 4) * uVar7 +
                  *(int *)(*(int *)(uVar2 + 0x40) + 8));
  *(int *)(iVar4 + 0x28) = (int)*(short *)(*piVar3 + 0x3c) - (int)*(short *)(*piVar3 + 0x38);
  *(int *)(*(int *)(uVar2 + 0x1c) + 0x2c) =
       (int)*(short *)(*piVar3 + 0x3e) - (int)*(short *)(*piVar3 + 0x3a);
  iVar4 = MulDiv(1000000,*(int *)(*piVar3 + 0x1c),*(int *)(*piVar3 + 0x20));
  *(int *)(*(int *)(uVar2 + 0x1c) + 8) = iVar4;
  hFile = CreateFileA((LPCSTR)(uVar2 + 0x9c),0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,
                      *(DWORD *)(uVar2 + 0x1a0),(HANDLE)0x0);
  *(HANDLE *)(uVar2 + 0x94) = hFile;
  if (hFile == (HANDLE)0xffffffff) {
    local_8 = -0x7ffb1ff9;
  }
  else {
    uVar7 = *(int *)(*(int *)(uVar2 + 0x10) + 4) + 8;
    local_10 = 0;
    local_c = 0;
    DVar5 = SetFilePointer(hFile,0,&local_c,0);
    *(DWORD *)(uVar2 + 0x78) = DVar5;
    *(LONG *)(uVar2 + 0x7c) = local_c;
    BVar6 = WriteFile(*(HANDLE *)(uVar2 + 0x94),*(LPCVOID *)(uVar2 + 0x10),uVar7,&param_1,
                      (LPOVERLAPPED)0x0);
    if ((BVar6 == 0) || (param_1 < uVar7)) {
      local_8 = -0x7ffb1ff7;
    }
    else {
      uVar7 = *(uint *)(uVar2 + 0x78);
      *(uint *)(uVar2 + 0x78) = uVar7 + param_1;
      *(uint *)(uVar2 + 0x7c) = *(int *)(uVar2 + 0x7c) + (uint)CARRY4(uVar7,param_1);
      if (*(int *)(uVar2 + 8) == 0) {
        *(undefined4 *)(uVar2 + 0x88) = 0x80000000;
        *(undefined4 *)(uVar2 + 0x8c) = 0;
      }
      else {
        uVar7 = 0;
        if (*(int *)(*(int *)(uVar2 + 0x1c) + 0x20) != 0) {
          do {
            local_8 = FUN_5f93f580(uVar2,uVar7);
            if (local_8 < 0) goto LAB_5f93f977;
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(uint *)(*(int *)(uVar2 + 0x1c) + 0x20));
          if (local_8 < 0) goto LAB_5f93f977;
        }
        *(undefined4 *)(uVar2 + 0x88) = 0x40000000;
        *(undefined4 *)(uVar2 + 0x8c) = 0;
        *(undefined4 *)(*(int *)(uVar2 + 0x34) + 4) = 0x10;
        *(undefined4 *)(*(int *)(uVar2 + 0x34) + 8) = 0x78784637;
      }
      *(undefined4 *)(uVar2 + 0x1a8) = *(undefined4 *)(uVar2 + 0x78);
      *(undefined4 *)(uVar2 + 0x1ac) = *(undefined4 *)(uVar2 + 0x7c);
      *(undefined4 *)(uVar2 + 0x1b0) = 0;
      *(undefined4 *)(uVar2 + 0x1b4) = 0;
      FUN_5f98d0f0((uchar *)(uVar2 + 0x9c),local_134,0x104);
      GetVolumeInformationA
                ((LPCSTR)local_134,(LPSTR)0x0,0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,local_30,0x20
                );
      FUN_5f9d5af0();
      FUN_5f9d5af0();
      lstrcpynA(&stack0xfffffec0,local_30,4);
      lstrcpynA(&stack0xfffffec0,"FAT",4);
      iVar4 = lstrcmpA(&stack0xfffffec0,&stack0xfffffec0);
      if (iVar4 == 0) {
        *(undefined4 *)(uVar2 + 0x1b8) = 0xffc00000;
        *(undefined4 *)(uVar2 + 0x1bc) = 0;
      }
      else {
        *(undefined4 *)(uVar2 + 0x1b8) = 0xffffffff;
        *(undefined4 *)(uVar2 + 0x1bc) = 0x7fffffff;
      }
      if (-1 < local_8) {
        return local_8;
      }
    }
  }
LAB_5f93f977:
  if (*(HANDLE *)(uVar2 + 0x94) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(uVar2 + 0x94));
    *(undefined4 *)(uVar2 + 0x94) = 0xffffffff;
    if ((*(int *)(uVar2 + 0x78) != -1) || (*(int *)(uVar2 + 0x7c) != -1)) {
      DeleteFileA((LPCSTR)(uVar2 + 0x9c));
      *(undefined4 *)(uVar2 + 0x78) = 0xffffffff;
      *(undefined4 *)(uVar2 + 0x7c) = 0xffffffff;
      *(undefined4 *)(*(int *)(uVar2 + 0x28) + 4) = 4;
      *(int *)(*(int *)(uVar2 + 0x10) + 4) = *(int *)(uVar2 + 0x28) - *(int *)(uVar2 + 0x10);
      piVar3 = (int *)(*(int *)(uVar2 + 0x10) + 4);
      *piVar3 = *piVar3 + *(int *)(*(int *)(uVar2 + 0x28) + 4);
    }
    *(uint *)(uVar2 + 0x98) = *(uint *)(uVar2 + 0x98) & 0xfffffffe;
  }
  return local_8;
}


