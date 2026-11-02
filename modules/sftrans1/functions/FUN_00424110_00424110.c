/* Module: sftrans1.dll
   Function: FUN_00424110
   Address: 00424110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00424110(int param_1)

{
  LPCVOID pMem;
  undefined4 *puVar1;
  int iVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  byte bVar5;
  int *piVar6;
  int local_c;
  
  local_c = 0;
  piVar6 = (int *)(param_1 + 0x70);
  do {
    iVar2 = piVar6[-1];
    if (iVar2 != 2) {
      if (iVar2 == 0) {
LAB_00424180:
        piVar6[-1] = 2;
        pvVar3 = GlobalAlloc(0x40,0x680);
        pvVar4 = GlobalLock(pvVar3);
        if (pvVar4 == (LPVOID)0x0) {
          pvVar4 = (LPVOID)0x0;
        }
        else {
          FUN_004029a0(pvVar4,0x68,0x10,FUN_00422360);
        }
        *piVar6 = (int)pvVar4;
        if (pvVar4 == (LPVOID)0x0) {
          piVar6[-1] = 0;
          goto LAB_004242fe;
        }
      }
      else {
        if (0x10 < iVar2) {
          bVar5 = 0;
          for (; iVar2 != 0; iVar2 = iVar2 >> 1) {
            bVar5 = bVar5 + 1;
          }
          iVar2 = 1 << (bVar5 & 0x1f);
          if (iVar2 != 0x10) {
            if (0 < iVar2) {
              pMem = (LPCVOID)*piVar6;
              pvVar3 = GlobalHandle(pMem);
              GlobalUnlock(pvVar3);
              pvVar3 = GlobalHandle(pMem);
              GlobalFree(pvVar3);
              piVar6[-1] = 0;
            }
            goto LAB_00424180;
          }
        }
        piVar6[-1] = 2;
      }
    }
    FUN_00423e40();
    iVar2 = *piVar6;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    puVar1 = (undefined4 *)*piVar6;
    *puVar1 = 0;
    puVar1[1] = 0;
    iVar2 = *piVar6;
    *(undefined4 *)(iVar2 + 0x40) = 0x9999999a;
    *(undefined4 *)(iVar2 + 0x44) = 0x3fc99999;
    iVar2 = *piVar6;
    *(undefined4 *)(iVar2 + 0x18) = 0x9999999a;
    *(undefined4 *)(iVar2 + 0x1c) = 0x3fc99999;
    iVar2 = *piVar6;
    *(undefined4 *)(iVar2 + 0x48) = 0;
    *(undefined4 *)(iVar2 + 0x4c) = 0x3ff00000;
    iVar2 = *piVar6;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0x3ff00000;
    iVar2 = *piVar6;
    *(undefined4 *)(iVar2 + 0x58) = 0;
    *(undefined4 *)(iVar2 + 0x5c) = 0x40498000;
    iVar2 = *piVar6;
    *(undefined4 *)(iVar2 + 0x50) = 0;
    *(undefined4 *)(iVar2 + 0x54) = 0x40498000;
    iVar2 = *piVar6;
    *(undefined4 *)(iVar2 + 0x28) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0xc0498000;
    iVar2 = *piVar6;
    *(undefined4 *)(iVar2 + 0x28) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0xc0498000;
    *(undefined1 *)(*piVar6 + 0x13) = 0;
    *(undefined1 *)(*piVar6 + 0x12) = 0;
    FUN_00423e40();
    iVar2 = *piVar6;
    *(undefined4 *)(iVar2 + 0x70) = 0;
    *(undefined4 *)(iVar2 + 0x74) = 0x406fe000;
    iVar2 = *piVar6;
    *(undefined4 *)(iVar2 + 0x68) = 0;
    *(undefined4 *)(iVar2 + 0x6c) = 0x406fe000;
    iVar2 = *piVar6;
    *(undefined4 *)(iVar2 + 0xa8) = 0x9999999a;
    *(undefined4 *)(iVar2 + 0xac) = 0x3fc99999;
    iVar2 = *piVar6;
    *(undefined4 *)(iVar2 + 0x80) = 0x9999999a;
    *(undefined4 *)(iVar2 + 0x84) = 0x3fc99999;
    iVar2 = *piVar6;
    *(undefined4 *)(iVar2 + 0xb0) = 0;
    *(undefined4 *)(iVar2 + 0xb4) = 0x3ff00000;
    iVar2 = *piVar6;
    *(undefined4 *)(iVar2 + 0x88) = 0;
    *(undefined4 *)(iVar2 + 0x8c) = 0x3ff00000;
    iVar2 = *piVar6;
    *(undefined4 *)(iVar2 + 0x98) = 0;
    *(undefined4 *)(iVar2 + 0x9c) = 0xc0498000;
    iVar2 = *piVar6;
    *(undefined4 *)(iVar2 + 0x90) = 0;
    *(undefined4 *)(iVar2 + 0x94) = 0xc0498000;
    iVar2 = *piVar6;
    *(undefined4 *)(iVar2 + 0xb8) = 0;
    *(undefined4 *)(iVar2 + 0xbc) = 0x40498000;
    iVar2 = *piVar6;
    *(undefined4 *)(iVar2 + 0xb8) = 0;
    *(undefined4 *)(iVar2 + 0xbc) = 0x40498000;
    *(undefined1 *)(*piVar6 + 0x7b) = 0;
    iVar2 = *piVar6;
    piVar6 = piVar6 + 2;
    *(undefined1 *)(iVar2 + 0x7a) = 0;
    local_c = local_c + 1;
    if (3 < local_c) {
LAB_004242fe:
      *(undefined4 *)(param_1 + 0xb0) = 1;
      if (*(HWND *)(param_1 + 0x110) != (HWND)0x0) {
        PostMessageA(*(HWND *)(param_1 + 0x110),0x111,*(WPARAM *)(param_1 + 0x114),0);
      }
      piVar6 = *(int **)(param_1 + 0x10c);
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0xc))(piVar6);
      }
      return 0;
    }
  } while( true );
}


