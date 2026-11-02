/* Module: vegas30.exe
   Function: FUN_005b4e20
   Address: 005b4e20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005b4e20(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_b8;
  LONG local_b0;
  undefined1 local_ac [168];
  int local_4;
  
  *param_4 = 0;
  *param_3 = 0;
  if ((param_2 < 0x91) || (0xab < param_2)) {
    if ((param_2 < 0x138) || (0x157 < param_2)) {
      if ((param_2 < 0x158) || (0x177 < param_2)) {
        iVar8 = 0;
      }
      else {
        iVar8 = 3;
      }
    }
    else {
      iVar8 = 2;
    }
  }
  else {
    iVar8 = 1;
  }
  iVar7 = *(int *)(param_1 + 0x134);
  if ((iVar7 < 0x91) || (0xab < iVar7)) {
    if ((iVar7 < 0x138) || (0x157 < iVar7)) {
      if ((iVar7 < 0x158) || (0x177 < iVar7)) {
        iVar7 = 0;
      }
      else {
        iVar7 = 3;
      }
    }
    else {
      iVar7 = 2;
    }
  }
  else {
    iVar7 = 1;
  }
  iVar1 = FUN_005b51d0();
  if ((iVar1 == 0) || (*(int *)((iVar7 + iVar8 * 4) * 4 + 0x646740) == 0)) {
    iVar8 = 0;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x1c0);
    local_b0 = 0;
    SetFilePointer(*(HANDLE *)(param_1 + 0x118),iVar7,&local_b0,0);
    iVar8 = FUN_005b5a00(local_ac);
    if (-1 < iVar8) {
      iVar1 = 0;
      iVar8 = *(int *)(param_1 + 0x13c);
      if (iVar8 != 0) {
        iVar1 = FUN_005b7a20(iVar8);
        if (iVar1 == 0) {
          return -0x7ff8fff2;
        }
        pvVar2 = GlobalAlloc(0x42,iVar8 * 0xc);
        pvVar3 = GlobalLock(pvVar2);
        *param_3 = (int)pvVar3;
        if (pvVar3 == (LPVOID)0x0) {
          FUN_005b7a40(iVar1);
          return -0x7ff8fff2;
        }
      }
      iVar7 = FUN_005b7410((local_4 - iVar7) + -0xac,iVar1,iVar8);
      if (-1 < iVar7) {
        if (iVar8 != 0) {
          iVar6 = 0;
          puVar5 = (undefined4 *)(iVar1 + 0x14);
          local_b8 = iVar8;
          do {
            iVar4 = *param_3;
            *(undefined4 *)(iVar4 + iVar6) = puVar5[-1];
            iVar4 = iVar4 + iVar6;
            iVar6 = iVar6 + 0xc;
            *(undefined4 *)(iVar4 + 4) = *puVar5;
            local_b8 = local_b8 + -1;
            puVar5 = puVar5 + 8;
          } while (local_b8 != 0);
        }
        *param_4 = iVar8;
      }
      if (iVar1 != 0) {
        FUN_005b7a40(iVar1);
      }
      if (iVar7 < 0) {
        pvVar2 = GlobalHandle((LPCVOID)*param_3);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle((LPCVOID)*param_3);
        GlobalFree(pvVar2);
        *param_3 = 0;
      }
      return iVar7;
    }
  }
  return iVar8;
}


