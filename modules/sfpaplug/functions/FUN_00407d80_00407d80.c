/* Module: sfpaplug.dll
   Function: FUN_00407d80
   Address: 00407d80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00407d80(HANDLE param_1,int param_2)

{
  short *lpBuffer;
  HANDLE hFile;
  int iVar1;
  BOOL BVar2;
  int iVar3;
  int local_c [2];
  LONG local_4;
  
  hFile = param_1;
  BVar2 = ReadFile(param_1,local_c,4,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  iVar1 = param_2;
  if (BVar2 == 0) {
    return 0x8004e008;
  }
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + (int)param_1;
  if (local_c[0] == -1) {
    *(undefined4 *)(param_2 + 0x100) = 1;
    BVar2 = ReadFile(hFile,(LPVOID)(param_2 + 0x104),0x10,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      return 0x8004e008;
    }
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + (int)param_1;
    if (*(short *)(iVar1 + 0x22) != 2) goto LAB_00407e55;
    BVar2 = ReadFile(hFile,(LPVOID)(iVar1 + 0x114),0x10,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      return 0x8004e008;
    }
    iVar3 = *(int *)(iVar1 + 4) + (int)param_1;
  }
  else {
    local_4 = -1;
    *(undefined4 *)(param_2 + 0x100) = 0;
    local_c[1] = 0xfffffffc;
    SetFilePointer(hFile,-4,&local_4,1);
    iVar3 = *(int *)(iVar1 + 4) - (int)param_1;
  }
  *(int *)(iVar1 + 4) = iVar3;
LAB_00407e55:
  lpBuffer = (short *)(iVar1 + 0x124);
  BVar2 = ReadFile(hFile,lpBuffer,2,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  if (BVar2 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + (int)param_1;
    if (*lpBuffer < 0) {
      *(undefined4 *)(iVar1 + 0x13c) = 1;
      *lpBuffer = -*lpBuffer;
    }
    if (((*lpBuffer != 0) && (*lpBuffer < 0x201)) &&
       (BVar2 = ReadFile(hFile,(LPVOID)(iVar1 + 0x126),2,(LPDWORD)&param_1,(LPOVERLAPPED)0x0),
       BVar2 != 0)) {
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + (int)param_1;
      BVar2 = ReadFile(hFile,(LPVOID)(iVar1 + 0x128),(uint)*(ushort *)(iVar1 + 0x22),
                       (LPDWORD)&param_1,(LPOVERLAPPED)0x0);
      if (BVar2 != 0) {
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + (int)param_1;
        BVar2 = ReadFile(hFile,(LPVOID)(iVar1 + 0x12a),(uint)*(ushort *)(iVar1 + 0x22),
                         (LPDWORD)&param_1,(LPOVERLAPPED)0x0);
        if (BVar2 != 0) {
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + (int)param_1;
          if (*(int *)(iVar1 + 0x6c) != 0) {
            BVar2 = ReadFile(hFile,(LPVOID)(iVar1 + 300),4,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
            if (BVar2 == 0) {
              return 0x8004e008;
            }
            *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + (int)param_1;
            if (*(short *)(iVar1 + 0x22) == 2) {
              BVar2 = ReadFile(hFile,(LPVOID)(iVar1 + 0x131),4,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
              if (BVar2 == 0) {
                return 0x8004e008;
              }
              *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + (int)param_1;
            }
          }
          if (*(int *)(iVar1 + 0x70) != 0) {
            BVar2 = ReadFile(hFile,(LPVOID)(iVar1 + 0x138),4,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
            if (BVar2 == 0) {
              return 0x8004e008;
            }
            *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + (int)param_1;
          }
          *(int *)(iVar1 + 0x54) = (int)*lpBuffer;
          *(uint *)(iVar1 + 0x60) = (uint)*(ushort *)(iVar1 + 0x126);
          *(int *)(iVar1 + 0x74) = *(int *)(iVar1 + 0x74) + 1;
          return 0;
        }
      }
    }
  }
  return 0x8004e008;
}


