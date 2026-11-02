/* Module: wmfplug2.dll
   Function: FUN_00414df0
   Address: 00414df0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00415083) */

int FUN_00414df0(uint *param_1,uint param_2)

{
  ushort *puVar1;
  int iVar2;
  HGLOBAL pvVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *unaff_EBX;
  int *unaff_EBP;
  LPVOID pMem;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  uint unaff_retaddr;
  int *piStack_34;
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;
  uint uStack_20;
  uint uStack_1c;
  int *piStack_18;
  int local_14;
  int *piStack_c;
  int local_8;
  uint local_4;
  
  piStack_34 = &local_8;
  local_4 = param_2;
  local_14 = 0x7fffffff;
  *param_1 = param_2;
  iVar2 = WMCreateProfileManager();
  if (-1 < iVar2) {
    pMem = (LPVOID)0x0;
    iVar2 = (**(code **)*piStack_c)(piStack_c,&DAT_0047c7e0,&stack0xffffffd0);
    if (((-1 < iVar2) &&
        (iVar2 = (**(code **)(*unaff_EBP + 0xc))(unaff_EBP,&DAT_0047b630,&uStack_1c), -1 < iVar2))
       && (uStack_28 = 0, uStack_1c != 0)) {
      while (iVar2 = (**(code **)(*unaff_EBP + 0x10))(unaff_EBP,&DAT_0047b630,uStack_28,&uStack_20),
            -1 < iVar2) {
        uStack_2c = 0;
        if (uStack_20 != 0) {
          do {
            iVar2 = (**(code **)(*unaff_EBP + 0x14))
                              (unaff_EBP,&DAT_0047b630,uStack_28,uStack_2c,&piStack_34);
            if (iVar2 < 0) goto LAB_00415025;
            iVar2 = (**(code **)*piStack_34)(piStack_34,&DAT_0047c7f0,&stack0xffffffc8);
            if (piStack_34 != (int *)0x0) {
              (**(code **)(*piStack_34 + 8))(piStack_34);
            }
            piStack_34 = (int *)0x0;
            if ((iVar2 < 0) ||
               (iVar2 = (**(code **)(*unaff_EBX + 0x10))(unaff_EBX,0,&stack0xffffffd0), iVar2 < 0))
            goto LAB_00415025;
            if (pMem != (LPCVOID)0x0) {
              pvVar3 = GlobalHandle(pMem);
              GlobalUnlock(pvVar3);
              pvVar3 = GlobalHandle(pMem);
              GlobalFree(pvVar3);
            }
            pvVar3 = GlobalAlloc(0x40,0);
            pMem = GlobalLock(pvVar3);
            if (pMem == (LPVOID)0x0) {
              iVar2 = -0x7ff8fff2;
              goto LAB_00415043;
            }
            iVar2 = (**(code **)(*unaff_EBX + 0x10))(unaff_EBX,pMem,&stack0xffffffd0);
            if (iVar2 < 0) goto LAB_00415025;
            if (unaff_EBX != (int *)0x0) {
              (**(code **)(*unaff_EBX + 8))(unaff_EBX);
            }
            unaff_EBX = (int *)0x0;
            iVar5 = 4;
            bVar9 = true;
            piVar7 = (int *)((int)pMem + 0x2c);
            piVar8 = &DAT_0047c0d8;
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              bVar9 = *piVar7 == *piVar8;
              piVar7 = piVar7 + 1;
              piVar8 = piVar8 + 1;
            } while (bVar9);
            if (!bVar9) {
              iVar2 = -0x7fffbffb;
              goto LAB_00415025;
            }
            puVar1 = *(ushort **)((int)pMem + 0x44);
            if (((*(uint **)(puVar1 + 2) == param_1) && (puVar1[1] == local_4)) &&
               (*puVar1 == unaff_retaddr)) {
              uVar4 = *(int *)(puVar1 + 4) * 8 - local_8;
              uVar6 = (int)uVar4 >> 0x1f;
              iVar5 = (uVar4 ^ uVar6) - uVar6;
              if (iVar5 < iStack_24) {
                iStack_24 = iVar5;
                local_14 = *(int *)(puVar1 + 4) * 8;
              }
            }
            uStack_2c = uStack_2c + 1;
          } while (uStack_2c < uStack_20);
        }
        uStack_28 = uStack_28 + 1;
        if (uStack_1c <= uStack_28) break;
      }
LAB_00415025:
      if (pMem != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle(pMem);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(pMem);
        GlobalFree(pvVar3);
      }
    }
LAB_00415043:
    if (unaff_EBX != (int *)0x0) {
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    }
    if (unaff_EBP != (int *)0x0) {
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
    }
    if (piStack_34 != (int *)0x0) {
      (**(code **)(*piStack_34 + 8))(piStack_34);
    }
    piStack_34 = (int *)0x0;
    if (piStack_18 != (int *)0x0) {
      (**(code **)(*piStack_18 + 8))(piStack_18);
    }
    if (-1 < iVar2) {
      *piStack_c = local_14;
    }
  }
  return iVar2;
}


