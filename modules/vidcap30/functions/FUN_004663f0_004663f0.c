/* Module: vidcap30.exe
   Function: FUN_004663f0
   Address: 004663f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_004663f0(int param_1,int *param_2)

{
  uint *puVar1;
  LPCVOID pMem;
  uint3 uVar2;
  uint3 uVar3;
  uint3 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  HGLOBAL pvVar9;
  SIZE_T dwBytes;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 unaff_EBX;
  undefined4 *unaff_EBP;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar12;
  int *unaff_retaddr;
  undefined1 uStack_50;
  byte bStack_4f;
  byte bStack_4e;
  undefined1 uStack_4d;
  undefined1 local_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined4 uStack_48;
  LPCRITICAL_SECTION p_Stack_44;
  byte bStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined1 local_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  int iStack_38;
  uint uStack_34;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  uint uStack_4;
  
  uStack_50 = (undefined1)unaff_EBX;
  bStack_4f = (byte)((uint)unaff_EBX >> 8);
  bStack_4e = (byte)((uint)unaff_EBX >> 0x10);
  uStack_4d = (undefined1)((uint)unaff_EBX >> 0x18);
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x38);
  local_3c = SUB41(lpCriticalSection,0);
  uStack_3b = (undefined1)((uint)lpCriticalSection >> 8);
  uStack_3a = (undefined1)((uint)lpCriticalSection >> 0x10);
  uStack_39 = (undefined1)((uint)lpCriticalSection >> 0x18);
  EnterCriticalSection(lpCriticalSection);
  iVar5 = (**(code **)(*param_2 + 0xc))(param_2,&local_4c);
  if (-1 < iVar5) {
    iVar5 = *(int *)(param_1 + 200);
    iVar7 = *(int *)(param_1 + 0xc4);
    iVar6 = (**(code **)(*param_2 + 0x14))(param_2,auStack_30,auStack_28);
    iVar5 = ((iVar5 + 1) % iVar7) * 0x58;
    puVar1 = (uint *)(*(int *)(param_1 + 0xbc) + iVar5);
    uVar8 = *puVar1;
    *puVar1 = (-1 < iVar6 ^ uVar8) & 1 ^ uVar8;
    if (-1 < iVar6) {
      iVar7 = *(int *)(param_1 + 200);
      iVar6 = *(int *)(param_1 + 0xbc);
      *(uint *)(iVar6 + 0x28 + iVar7 * 0x58) =
           CONCAT13(uStack_39,CONCAT12(uStack_3a,CONCAT11(uStack_3b,local_3c)));
      *(int *)(iVar6 + 0x2c + iVar7 * 0x58) = iStack_38;
    }
    iVar7 = (**(code **)(*param_2 + 0x2c))(param_2);
    uStack_4 = (uint)(iVar7 == 120000);
    if ((unaff_retaddr == (int *)0x0) || (iVar7 = unaff_retaddr[4], iVar7 == 0)) {
      iVar7 = -0x7fffbffb;
    }
    else {
      uStack_50 = (undefined1)iVar7;
      bStack_4f = (byte)((uint)iVar7 >> 8);
      bStack_4e = (byte)((uint)iVar7 >> 0x10);
      uStack_4d = (undefined1)((uint)iVar7 >> 0x18);
      iVar7 = 0;
    }
    puVar1 = (uint *)(*(int *)(param_1 + 0xbc) + iVar5);
    *puVar1 = (uint)(-1 < iVar7) << 2 | *puVar1 & 0xfffffffb;
    if (-1 < iVar7) {
      *(uint *)(*(int *)(param_1 + 0xbc) + 0xc + iVar5) = ((byte)~bStack_4e & 0x20) >> 5;
    }
    if ((unaff_retaddr == (int *)0x0) || (iVar7 = unaff_retaddr[5], iVar7 == 0)) {
      iVar7 = -0x7fffbffb;
    }
    else {
      uStack_50 = (undefined1)iVar7;
      bStack_4f = (byte)((uint)iVar7 >> 8);
      bStack_4e = (byte)((uint)iVar7 >> 0x10);
      uStack_4d = (undefined1)((uint)iVar7 >> 0x18);
      iVar7 = 0;
    }
    puVar1 = (uint *)(*(int *)(param_1 + 0xbc) + iVar5);
    *puVar1 = (uint)(-1 < iVar7) << 1 | *puVar1 & 0xfffffffd;
    if (-1 < iVar7) {
      *(uint *)(*(int *)(param_1 + 0xbc) + 4 + iVar5) = (bStack_4f & 7) + (bStack_4e & 3) * 8;
      *(undefined4 *)(*(int *)(param_1 + 0xbc) + 8 + iVar5) = 1;
      if ((((bStack_4e & 0x10) == 0x10) && ((bStack_4e & 0x80) == 0x80)) && ((bStack_4e & 8) == 8))
      {
        *(undefined4 *)(*(int *)(param_1 + 0xbc) + 8 + iVar5) = 0;
      }
    }
    *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x50 + iVar5) = 0;
    iVar7 = FUN_004614c0(unaff_EBP,uStack_4,&bStack_40);
    puVar1 = (uint *)(*(int *)(param_1 + 0xbc) + iVar5);
    *puVar1 = (uint)(-1 < iVar7) << 3 | *puVar1 & 0xfffffff7;
    if (iVar7 < 0) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
    }
    else {
      uVar2 = CONCAT12(uStack_3b,CONCAT11(local_3c,uStack_3d));
      iStack_20 = 3 - (uint)(uStack_4 != 0);
      uStack_c = 0;
      iStack_1c = (uVar2 & 0xf) + ((uVar2 & 0xff) >> 4 & 3) * 10;
      uVar2 = CONCAT12(local_3c,CONCAT11(uStack_3d,uStack_3e));
      iStack_18 = (uVar2 & 0xf) + ((uVar2 & 0xff) >> 4 & 7) * 10;
      uVar2 = CONCAT12(uStack_3d,CONCAT11(uStack_3e,uStack_3f));
      iStack_14 = (uVar2 & 0xf) + ((uVar2 & 0xff) >> 4 & 7) * 10;
      uVar2 = CONCAT12(uStack_3e,CONCAT11(uStack_3f,bStack_40));
      iStack_10 = (uVar2 & 0xf) + ((uVar2 & 0xff) >> 4 & 3) * 10;
      uVar8 = _SFSMPTE_SMPTEToFrameCount_4(&iStack_20);
      uStack_50 = (undefined1)uVar8;
      bStack_4f = (byte)(uVar8 >> 8);
      bStack_4e = (byte)(uVar8 >> 0x10);
      uStack_4d = (undefined1)(uVar8 >> 0x18);
      iStack_38 = uVar8 + 1;
      local_4c = 0;
      uStack_4b = 0;
      uStack_4a = 0;
      uStack_49 = 0;
      uStack_34 = (uint)(0xfffffffe < uVar8);
      (**(code **)(*param_2 + 0x48))(param_2,&uStack_50,&iStack_38);
      iVar7 = *(int *)(param_1 + 0x104);
      if ((-1 < iVar7) && ((0 < iVar7 || (*(uint *)(param_1 + 0x100) != 0)))) {
        iVar6 = CONCAT13(uStack_49,CONCAT12(uStack_4a,CONCAT11(uStack_4b,local_4c)));
        uVar8 = CONCAT13(uStack_4d,CONCAT12(bStack_4e,CONCAT11(bStack_4f,uStack_50)));
        if ((iVar7 <= iVar6) && ((iVar7 < iVar6 || (*(uint *)(param_1 + 0x100) <= uVar8)))) {
          *(uint *)(*(int *)(param_1 + 0xbc) + 0x50 + iVar5) = uVar8 - *(int *)(param_1 + 0x100);
        }
      }
      *(int *)(param_1 + 0x100) = iStack_38;
      *(uint *)(param_1 + 0x104) = uStack_34;
      *(uint *)(*(int *)(param_1 + 0xbc) + 0x10 + iVar5) = (uint)((byte)~bStack_40 >> 7);
      *(uint *)(*(int *)(param_1 + 0xbc) + 0x14 + iVar5) =
           CONCAT13(uStack_3d,CONCAT12(uStack_3e,CONCAT11(uStack_3f,bStack_40)));
      if (*(int *)(param_1 + 0xd4) != 0) {
        iVar7 = FUN_00466380(*(int *)(param_1 + 0xbc) + 0x14 + iVar5,param_1 + 0xd8);
        if (iVar7 != 0) {
          pMem = *(LPCVOID *)(param_1 + 0xdc);
          if (pMem != (LPCVOID)0x0) {
            pvVar9 = GlobalHandle(pMem);
            GlobalUnlock(pvVar9);
            pvVar9 = GlobalHandle(pMem);
            GlobalFree(pvVar9);
          }
          dwBytes = (**(code **)(*param_2 + 0x2c))(param_2);
          *(SIZE_T *)(param_1 + 0xe0) = dwBytes;
          if ((int)dwBytes < 1) {
            *(undefined4 *)(param_1 + 0xdc) = 0;
          }
          else {
            pvVar9 = GlobalAlloc(0x40,dwBytes);
            puVar10 = GlobalLock(pvVar9);
            *(undefined4 **)(param_1 + 0xdc) = puVar10;
            if (puVar10 == (undefined4 *)0x0) {
              *(undefined4 *)(param_1 + 0xe0) = 0;
            }
            else {
              uVar8 = *(uint *)(param_1 + 0xe0);
              puVar12 = unaff_EBP;
              for (uVar11 = uVar8 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *puVar10 = *puVar12;
                puVar12 = puVar12 + 1;
                puVar10 = puVar10 + 1;
              }
              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *(undefined1 *)puVar10 = *(undefined1 *)puVar12;
                puVar12 = (undefined4 *)((int)puVar12 + 1);
                puVar10 = (undefined4 *)((int)puVar10 + 1);
              }
              *(undefined4 *)(param_1 + 0xd4) = 0;
            }
          }
        }
      }
    }
    uVar8 = uStack_4;
    if ((unaff_retaddr == (int *)0x0) || ((int *)*unaff_retaddr == (int *)0x0)) {
      iVar7 = -0x7fffbffb;
    }
    else {
      iVar7 = 0;
      unaff_retaddr = (int *)*unaff_retaddr;
    }
    puVar1 = (uint *)(*(int *)(param_1 + 0xbc) + iVar5);
    *puVar1 = (uint)(-1 < iVar7) << 4 | *puVar1 & 0xffffffef;
    if (-1 < iVar7) {
      *(uint *)(*(int *)(param_1 + 0xbc) + 0x18 + iVar5) = ((uint)unaff_retaddr >> 0x18 & 0x38) >> 3
      ;
    }
    iVar7 = FUN_00461350(unaff_EBP,uStack_4,&uStack_48);
    if (-1 < iVar7) {
      iVar7 = FUN_004613f0(unaff_EBP,uVar8,&uStack_50);
      if (-1 < iVar7) {
        *(uint *)(*(int *)(param_1 + 0xbc) + iVar5) =
             *(uint *)(*(int *)(param_1 + 0xbc) + iVar5) | 0x20;
        *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x1c + iVar5) = uStack_48;
        uVar4 = CONCAT12(uStack_4b,CONCAT11(local_4c,uStack_4d));
        uVar3 = CONCAT12(local_4c,CONCAT11(uStack_4d,bStack_4e));
        uVar2 = CONCAT12(uStack_4d,CONCAT11(bStack_4e,bStack_4f));
        *(uint *)(*(int *)(param_1 + 0xbc) + 0x20 + iVar5) =
             (uVar2 & 0xf) +
             (((uVar2 & 0xff) >> 4 & 7) +
             ((uVar3 & 0xf) +
             (((uVar3 & 0xff) >> 4 & 7) + ((uVar4 & 0xf) + ((uVar4 & 0xff) >> 4 & 3) * 10) * 6) * 10
             ) * 6) * 10;
      }
    }
    iVar5 = 0;
    lpCriticalSection = p_Stack_44;
  }
  LeaveCriticalSection(lpCriticalSection);
  return iVar5;
}


