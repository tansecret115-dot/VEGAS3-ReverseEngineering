/* Module: sfnetmedia.dll
   Function: FUN_00426470
   Address: 00426470
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00426470(int param_1,HANDLE param_2,int param_3,int *param_4)

{
  int *piVar1;
  HGLOBAL pvVar2;
  LPVOID lpBuffer;
  LPVOID lpBuffer_00;
  DWORD nNumberOfBytesToRead;
  BOOL BVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  LPVOID *ppvVar8;
  uint local_40;
  DWORD DStack_3c;
  LPVOID local_38;
  int *local_34;
  LPVOID local_2c;
  uint local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar6 = 0;
  pvVar2 = GlobalAlloc(0x42,0x20004);
  lpBuffer = GlobalLock(pvVar2);
  if (lpBuffer == (LPVOID)0x0) {
    return 0;
  }
  pvVar2 = GlobalAlloc(0x42,0x23333);
  lpBuffer_00 = GlobalLock(pvVar2);
  pcVar7 = GlobalHandle_exref;
  if (lpBuffer_00 != (LPVOID)0x0) {
    local_40 = *(uint *)(param_3 + 0x10);
    ppvVar8 = &local_38;
    for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppvVar8 = (LPVOID)0x0;
      ppvVar8 = ppvVar8 + 1;
    }
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    iVar5 = FUN_0042f7b0((int)&local_38,0xfffffff1,"1.1.3",0x38);
    piVar1 = param_4;
    if (iVar5 == 0) {
      if (param_4 != (int *)0x0) {
        (**(code **)(*param_4 + 0xc))(param_4,0,*(undefined4 *)(param_3 + 0x10),0);
      }
      local_28 = 0x23333;
      local_34 = (int *)0x0;
      local_38 = lpBuffer;
      local_2c = lpBuffer_00;
      while( true ) {
        if (local_40 == 0) {
          local_34 = (int *)0x1;
        }
        else if (local_34 == (int *)0x0) {
          nNumberOfBytesToRead = 0x20000;
          if (local_40 < 0x20001) {
            nNumberOfBytesToRead = local_40;
          }
          BVar3 = ReadFile(*(HANDLE *)(param_1 + 8),lpBuffer,nNumberOfBytesToRead,(LPDWORD)&param_4,
                           (LPOVERLAPPED)0x0);
          if (BVar3 != 0) {
            if ((piVar1 != (int *)0x0) &&
               ((iVar6 = (**(code **)(*piVar1 + 0x1c))(piVar1), iVar6 == -0x7ffb1ff4 ||
                (iVar6 = (**(code **)(*piVar1 + 0x18))(piVar1,*(int *)(param_3 + 0x10) - local_40,0)
                , iVar6 < 0)))) goto LAB_00426623;
            local_40 = local_40 - (int)param_4;
            local_34 = param_4;
            local_38 = lpBuffer;
          }
        }
        uVar4 = FUN_0042f8e0((int *)&local_38,0);
        if ((uVar4 != 0) && (uVar4 != 1)) break;
        if (local_28 < 0x23333) {
          BVar3 = WriteFile(param_2,lpBuffer_00,0x23333 - local_28,&DStack_3c,(LPOVERLAPPED)0x0);
          if (BVar3 == 0) break;
          local_28 = 0x23333;
          local_2c = lpBuffer_00;
        }
        if ((uVar4 == 1) || (iVar6 < 0)) goto LAB_00426623;
      }
      iVar6 = -0x7ffb1ff7;
LAB_00426623:
      iVar5 = FUN_0042f760((int)&local_38);
      if (iVar5 != 0) {
        iVar6 = -0x7ffb1ff7;
      }
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x18))(piVar1,*(undefined4 *)(param_3 + 0x10),0);
      }
    }
    pcVar7 = GlobalHandle_exref;
    pvVar2 = GlobalHandle(lpBuffer_00);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(lpBuffer_00);
    GlobalFree(pvVar2);
  }
  pvVar2 = (HGLOBAL)(*pcVar7)(lpBuffer);
  GlobalUnlock(pvVar2);
  pvVar2 = (HGLOBAL)(*pcVar7)(lpBuffer);
  GlobalFree(pvVar2);
  return iVar6;
}


