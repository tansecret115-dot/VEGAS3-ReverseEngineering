/* Module: sfpaplug.dll
   Function: FUN_00404530
   Address: 00404530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00404530(undefined4 *param_1,DWORD param_2,int param_3,int *param_4)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = 0;
  uVar4 = 0;
  if (param_2 != 0) {
    BVar1 = WriteFile((HANDLE)*param_1,param_1 + 0x40,4,&param_2,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      uVar4 = 0x8004e009;
    }
    BVar1 = WriteFile((HANDLE)*param_1,param_1 + 0x41,0x10,&param_2,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      uVar4 = 0x8004e009;
    }
    iVar2 = 0x14;
    if (*(short *)((int)param_1 + 0x22) == 2) {
      BVar1 = WriteFile((HANDLE)*param_1,param_1 + 0x45,0x10,&param_2,(LPOVERLAPPED)0x0);
      if (BVar1 == 0) {
        uVar4 = 0x8004e009;
      }
      iVar2 = 0x24;
    }
  }
  if (param_3 != 0) {
    *(short *)(param_1 + 0x49) = -*(short *)(param_1 + 0x49);
  }
  BVar1 = WriteFile((HANDLE)*param_1,param_1 + 0x49,2,&param_2,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    uVar4 = 0x8004e009;
  }
  BVar1 = WriteFile((HANDLE)*param_1,(LPCVOID)((int)param_1 + 0x126),2,&param_2,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    uVar4 = 0x8004e009;
  }
  BVar1 = WriteFile((HANDLE)*param_1,param_1 + 0x4a,(uint)*(ushort *)((int)param_1 + 0x22),&param_2,
                    (LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    uVar4 = 0x8004e009;
  }
  BVar1 = WriteFile((HANDLE)*param_1,(LPCVOID)((int)param_1 + 0x12a),
                    (uint)*(ushort *)((int)param_1 + 0x22),&param_2,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    uVar4 = 0x8004e009;
  }
  iVar2 = iVar2 + 4 + (uint)*(ushort *)((int)param_1 + 0x22) * 2;
  iVar3 = iVar2;
  if (param_1[0x1b] != 0) {
    BVar1 = WriteFile((HANDLE)*param_1,param_1 + 0x4b,4,&param_2,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      uVar4 = 0x8004e009;
    }
    iVar3 = iVar2 + 4;
    if (*(short *)((int)param_1 + 0x22) == 2) {
      BVar1 = WriteFile((HANDLE)*param_1,(LPCVOID)((int)param_1 + 0x131),4,&param_2,
                        (LPOVERLAPPED)0x0);
      if (BVar1 == 0) {
        uVar4 = 0x8004e009;
      }
      iVar3 = iVar2 + 8;
    }
  }
  param_1[6] = param_1[6] + (int)*(short *)(param_1 + 0x49);
  param_1[5] = param_1[5] + iVar3;
  *param_4 = iVar3;
  return uVar4;
}


