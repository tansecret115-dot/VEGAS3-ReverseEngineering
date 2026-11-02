/* Module: sftrans1.dll
   Function: FUN_004228d0
   Address: 004228d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004228d0(int *param_1)

{
  LPCVOID pMem;
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  byte bVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  int local_10;
  
  local_10 = 0;
  do {
    piVar7 = param_1 + 2;
    iVar1 = param_1[1];
    if (iVar1 != 2) {
      if (iVar1 == 0) {
LAB_00422946:
        param_1[1] = 2;
        pvVar2 = GlobalAlloc(0x40,0x680);
        pvVar3 = GlobalLock(pvVar2);
        if (pvVar3 == (LPVOID)0x0) {
          pvVar3 = (LPVOID)0x0;
        }
        else {
          iVar1 = 0x10;
          puVar6 = (undefined4 *)((int)pvVar3 + 0x28);
          do {
            puVar6[-4] = 0;
            puVar6[-2] = 0;
            *puVar6 = 0;
            puVar6[2] = 0;
            puVar6[-3] = 0;
            puVar6[-1] = 0;
            puVar6[1] = 0;
            puVar6[3] = 0;
            *(undefined1 *)(puVar6 + 4) = 0;
            *(undefined1 *)((int)puVar6 + 0x11) = 0;
            puVar6[6] = 0;
            puVar6[8] = 0;
            puVar6[10] = 0;
            puVar6[0xc] = 0;
            puVar6[7] = 0;
            puVar6[9] = 0;
            puVar6[0xb] = 0;
            puVar6[0xd] = 0;
            *(undefined1 *)(puVar6 + 0xe) = 0;
            *(undefined1 *)((int)puVar6 + 0x39) = 0;
            puVar8 = puVar6 + -10;
            for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
            *(undefined1 *)((int)puVar6 + -0x16) = 1;
            *(undefined1 *)((int)puVar6 + -0x15) = 1;
            *(undefined1 *)(puVar6 + -5) = 1;
            *(undefined1 *)((int)puVar6 + -0x13) = 1;
            iVar1 = iVar1 + -1;
            puVar6 = puVar6 + 0x1a;
          } while (iVar1 != 0);
        }
        *piVar7 = (int)pvVar3;
        if (pvVar3 == (LPVOID)0x0) {
          param_1[1] = 0;
          return 0x8007000e;
        }
      }
      else {
        if (0x10 < iVar1) {
          bVar4 = 0;
          for (; iVar1 != 0; iVar1 = iVar1 >> 1) {
            bVar4 = bVar4 + 1;
          }
          iVar1 = 1 << (bVar4 & 0x1f);
          if (iVar1 != 0x10) {
            if (0 < iVar1) {
              pMem = (LPCVOID)*piVar7;
              pvVar2 = GlobalHandle(pMem);
              GlobalUnlock(pvVar2);
              pvVar2 = GlobalHandle(pMem);
              GlobalFree(pvVar2);
              param_1[1] = 0;
            }
            goto LAB_00422946;
          }
        }
        param_1[1] = 2;
      }
    }
    puVar6 = (undefined4 *)*piVar7;
    puVar8 = puVar6;
    for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined1 *)((int)puVar6 + 0x12) = 1;
    *(undefined1 *)((int)puVar6 + 0x13) = 1;
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)((int)puVar6 + 0x15) = 1;
    iVar1 = *piVar7;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    puVar6 = (undefined4 *)*piVar7;
    *puVar6 = 0;
    puVar6[1] = 0;
    iVar1 = *piVar7;
    *(undefined4 *)(iVar1 + 0x40) = 0x9999999a;
    *(undefined4 *)(iVar1 + 0x44) = 0x3fc99999;
    iVar1 = *piVar7;
    *(undefined4 *)(iVar1 + 0x18) = 0x9999999a;
    *(undefined4 *)(iVar1 + 0x1c) = 0x3fc99999;
    iVar1 = *piVar7;
    *(undefined4 *)(iVar1 + 0x48) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = 0x3ff00000;
    iVar1 = *piVar7;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0x3ff00000;
    iVar1 = *piVar7;
    *(undefined4 *)(iVar1 + 0x58) = 0;
    *(undefined4 *)(iVar1 + 0x5c) = 0x40498000;
    iVar1 = *piVar7;
    *(undefined4 *)(iVar1 + 0x50) = 0;
    *(undefined4 *)(iVar1 + 0x54) = 0x40498000;
    iVar1 = *piVar7;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0xc0498000;
    iVar1 = *piVar7;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0xc0498000;
    *(undefined1 *)(*piVar7 + 0x13) = 0;
    *(undefined1 *)(*piVar7 + 0x12) = 0;
    iVar1 = *piVar7;
    puVar6 = (undefined4 *)(iVar1 + 0x68);
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined1 *)(iVar1 + 0x7a) = 1;
    *(undefined1 *)(iVar1 + 0x7b) = 1;
    *(undefined1 *)(iVar1 + 0x7c) = 1;
    *(undefined1 *)(iVar1 + 0x7d) = 1;
    iVar1 = *piVar7;
    *(undefined4 *)(iVar1 + 0x70) = 0;
    *(undefined4 *)(iVar1 + 0x74) = 0x406fe000;
    iVar1 = *piVar7;
    *(undefined4 *)(iVar1 + 0x68) = 0;
    *(undefined4 *)(iVar1 + 0x6c) = 0x406fe000;
    iVar1 = *piVar7;
    *(undefined4 *)(iVar1 + 0xa8) = 0x9999999a;
    *(undefined4 *)(iVar1 + 0xac) = 0x3fc99999;
    iVar1 = *piVar7;
    *(undefined4 *)(iVar1 + 0x80) = 0x9999999a;
    *(undefined4 *)(iVar1 + 0x84) = 0x3fc99999;
    iVar1 = *piVar7;
    *(undefined4 *)(iVar1 + 0xb0) = 0;
    *(undefined4 *)(iVar1 + 0xb4) = 0x3ff00000;
    iVar1 = *piVar7;
    *(undefined4 *)(iVar1 + 0x88) = 0;
    *(undefined4 *)(iVar1 + 0x8c) = 0x3ff00000;
    iVar1 = *piVar7;
    *(undefined4 *)(iVar1 + 0x98) = 0;
    *(undefined4 *)(iVar1 + 0x9c) = 0xc0498000;
    iVar1 = *piVar7;
    *(undefined4 *)(iVar1 + 0x90) = 0;
    *(undefined4 *)(iVar1 + 0x94) = 0xc0498000;
    iVar1 = *piVar7;
    *(undefined4 *)(iVar1 + 0xb8) = 0;
    *(undefined4 *)(iVar1 + 0xbc) = 0x40498000;
    iVar1 = *piVar7;
    *(undefined4 *)(iVar1 + 0xb8) = 0;
    *(undefined4 *)(iVar1 + 0xbc) = 0x40498000;
    *(undefined1 *)(*piVar7 + 0x7b) = 0;
    *(undefined1 *)(*piVar7 + 0x7a) = 0;
    local_10 = local_10 + 1;
    param_1 = piVar7;
    if (3 < local_10) {
      return 0;
    }
  } while( true );
}


