/* Module: wmfplug2.dll
   Function: FUN_004150c0
   Address: 004150c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004150c0(uint param_1,byte param_2,int *param_3,SIZE_T param_4,undefined4 param_5,
                undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  HGLOBAL pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *unaff_EBX;
  LPVOID pMem;
  ushort *unaff_EBP;
  int *unaff_ESI;
  int *piVar6;
  ushort *puVar7;
  int *piVar8;
  ushort *puVar9;
  code *pcVar10;
  undefined4 *puVar11;
  bool bVar12;
  int unaff_retaddr;
  int *local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint uStack_58;
  undefined4 auStack_54 [4];
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  ushort *puStack_10;
  uint uStack_8;
  int iStack_4;
  
  local_68 = (int *)0x0;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  pMem = (LPVOID)0x0;
  iVar1 = (**(code **)*param_7)(param_7,&DAT_0047c7e0,&local_60);
  if ((-1 < iVar1) &&
     (iVar1 = (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,&DAT_0047b630,&uStack_58), -1 < iVar1)) {
    local_60 = 0;
    if (uStack_58 != 0) {
      do {
        uVar5 = local_60;
        iVar1 = (**(code **)(*unaff_EBX + 0x10))(unaff_EBX,&DAT_0047b630,local_60,&local_5c);
        if (iVar1 < 0) goto LAB_00415528;
        local_64 = 0;
        if (local_5c != 0) {
          do {
            if (pMem != (LPCVOID)0x0) {
              pvVar2 = GlobalHandle(pMem);
              GlobalUnlock(pvVar2);
              pvVar2 = GlobalHandle(pMem);
              GlobalFree(pvVar2);
            }
            pMem = (LPCVOID)0x0;
            param_4 = 0;
            iVar1 = (**(code **)(*unaff_EBX + 0x14))
                              (unaff_EBX,&DAT_0047b630,uVar5,local_64,&stack0xffffff8c);
            if (iVar1 < 0) goto LAB_00415528;
            if (local_68 != (int *)0x0) {
              (**(code **)(*local_68 + 8))(local_68);
              local_68 = (int *)0x0;
            }
            iVar1 = (**(code **)*unaff_ESI)(unaff_ESI,&DAT_0047c7f0,&local_68);
            if (unaff_ESI != (int *)0x0) {
              (**(code **)(*unaff_ESI + 8))(unaff_ESI);
              unaff_ESI = (int *)0x0;
            }
            if ((iVar1 < 0) ||
               (iVar1 = (**(code **)(*local_68 + 0x10))(local_68,0,&param_4), iVar1 < 0))
            goto LAB_00415528;
            pvVar2 = GlobalAlloc(0x40,param_4);
            pMem = GlobalLock(pvVar2);
            if (pMem == (LPVOID)0x0) {
              iVar1 = -0x7ff8fff2;
              pcVar10 = GlobalHandle_exref;
              goto LAB_0041537c;
            }
            iVar1 = (**(code **)(*local_68 + 0x10))(local_68,pMem,&param_4);
            if (iVar1 < 0) goto LAB_00415528;
            iVar3 = 4;
            bVar12 = true;
            piVar6 = (int *)((int)pMem + 0x2c);
            piVar8 = &DAT_0047c0d8;
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              bVar12 = *piVar6 == *piVar8;
              piVar6 = piVar6 + 1;
              piVar8 = piVar8 + 1;
            } while (bVar12);
            if (!bVar12) {
              iVar1 = -0x7fffbffb;
              goto LAB_00415528;
            }
            puVar7 = *(ushort **)((int)pMem + 0x44);
            iVar3 = *(int *)(puVar7 + 4) * 8 - iStack_4;
            if ((((0xf9 < iVar3) || (iVar3 < -0xf9)) || (*(int *)(puVar7 + 2) != unaff_retaddr)) ||
               ((puVar7[1] != param_1 || (*puVar7 != uStack_8)))) goto LAB_00415334;
            if (unaff_EBP == (ushort *)0x0) {
LAB_00415302:
              pvVar2 = GlobalAlloc(0x40,*(SIZE_T *)((int)pMem + 0x40));
              unaff_EBP = GlobalLock(pvVar2);
              if (unaff_EBP == (ushort *)0x0) {
                iVar1 = -0x7ff8fff2;
                goto LAB_00415528;
              }
              uVar5 = *(uint *)((int)pMem + 0x40);
              puVar9 = unaff_EBP;
              for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                *(undefined4 *)puVar9 = *(undefined4 *)puVar7;
                puVar7 = puVar7 + 2;
                puVar9 = puVar9 + 2;
              }
              for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(char *)puVar9 = (char)*puVar7;
                puVar7 = (ushort *)((int)puVar7 + 1);
                puVar9 = (ushort *)((int)puVar9 + 1);
              }
            }
            else if ((param_2 & 1) == 0) {
              if (unaff_EBP[6] <= puVar7[6]) goto LAB_004152e6;
            }
            else if (puVar7[6] <= unaff_EBP[6]) {
LAB_004152e6:
              pvVar2 = GlobalHandle(unaff_EBP);
              GlobalUnlock(pvVar2);
              pvVar2 = GlobalHandle(unaff_EBP);
              GlobalFree(pvVar2);
              goto LAB_00415302;
            }
LAB_00415334:
            local_64 = local_64 + 1;
            uVar5 = local_60;
          } while (local_64 < local_5c);
        }
        if (iVar1 < 0) goto LAB_00415528;
        local_60 = uVar5 + 1;
      } while (local_60 < uStack_58);
    }
    if (-1 < iVar1) {
      if (unaff_EBP == (ushort *)0x0) {
        iVar1 = -0x3ff2f43e;
      }
      else {
        puVar11 = auStack_54;
        for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        auStack_54[0] = DAT_0047b630;
        auStack_54[1] = DAT_0047b634;
        auStack_54[2] = DAT_0047b638;
        auStack_54[3] = DAT_0047b63c;
        uStack_40 = DAT_0047c834;
        uStack_3c = DAT_0047c838;
        uStack_38 = DAT_0047c83c;
        uStack_44 = (uint)*unaff_EBP;
        uStack_2c = (uint)unaff_EBP[6];
        uStack_28 = DAT_0047c0d8;
        uStack_24 = DAT_0047c0dc;
        uStack_20 = DAT_0047c0e0;
        uStack_1c = DAT_0047c0e4;
        iStack_14 = unaff_EBP[8] + 0x12;
        uStack_34 = 1;
        uStack_30 = 0;
        uStack_18 = 0;
        puStack_10 = unaff_EBP;
        iVar1 = (**(code **)(*param_3 + 0x3c))(param_3,&DAT_0047b630,&stack0xffffff8c);
        if ((-1 < iVar1) &&
           (iVar1 = FUN_00414480(unaff_ESI,1,L"Audio Stream",L"Audio",*(int *)(unaff_EBP + 4) << 3),
           -1 < iVar1)) {
          iVar1 = (**(code **)(*param_3 + 0x34))(param_3,unaff_ESI);
        }
      }
    }
LAB_00415528:
    pcVar10 = GlobalHandle_exref;
    if (pMem != (LPCVOID)0x0) {
      pvVar2 = GlobalHandle(pMem);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(pMem);
      GlobalFree(pvVar2);
    }
LAB_0041537c:
    if (unaff_EBP != (ushort *)0x0) {
      pvVar2 = (HGLOBAL)(*pcVar10)(unaff_EBP);
      GlobalUnlock(pvVar2);
      pvVar2 = (HGLOBAL)(*pcVar10)(unaff_ESI);
      GlobalFree(pvVar2);
    }
  }
  if (unaff_EBX != (int *)0x0) {
    (**(code **)(*unaff_EBX + 8))(unaff_EBX);
  }
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  if (local_68 != (int *)0x0) {
    (**(code **)(*local_68 + 8))(local_68);
  }
  return iVar1;
}


