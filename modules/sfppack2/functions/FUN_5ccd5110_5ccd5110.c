/* Module: sfppack2.dll
   Function: FUN_5ccd5110
   Address: 5ccd5110
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5ccd5110(void *this,short *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  DWORD DVar5;
  HGLOBAL pvVar6;
  LPVOID pvVar7;
  uint uVar8;
  uint uVar9;
  
  if ((*(int *)((int)this + 0x304) != 0) && (*(int *)((int)this + 0x308) != 0)) {
    *(short **)((int)this + 0x2b8) = param_1;
    *(short **)((int)this + 0x818) = param_1;
    *(undefined4 *)((int)this + 700) = param_2;
    *(undefined4 *)((int)this + 0x81c) = param_2;
    if (*param_1 == 1) {
      sVar3 = param_1[7];
      if (sVar3 == 8) {
        *(undefined1 **)((int)this + 0xa94) = &LAB_5ccdb3e0;
        *(undefined1 **)((int)this + 0xa90) = &LAB_5ccdb550;
      }
      else if (sVar3 == 0x10) {
        *(undefined1 **)((int)this + 0xa94) = &LAB_5ccdb670;
        *(undefined1 **)((int)this + 0xa90) = &LAB_5ccdb800;
      }
      else {
        if (sVar3 != 0x20) {
          return -0x7fffbffb;
        }
        *(undefined1 **)((int)this + 0xa94) = &LAB_5ccdbdc0;
        *(undefined1 **)((int)this + 0xa90) = &LAB_5ccdbf80;
      }
    }
    else if (param_1[7] == 0x20) {
      *(undefined1 **)((int)this + 0xa94) = &LAB_5ccdb920;
      *(undefined1 **)((int)this + 0xa90) = &LAB_5ccdba10;
    }
    else {
      if (param_1[7] != 0x40) {
        return -0x7fffbffb;
      }
      *(undefined1 **)((int)this + 0xa94) = &LAB_5ccdc080;
      *(code **)((int)this + 0xa90) = FUN_5ccdc170;
    }
    FUN_5ccd2f30(this,(undefined4 *)((int)this + 0x338));
    iVar4 = FUN_5ccd5360((undefined4 *)((int)this + 0x2d0));
    *(undefined4 *)((int)this + 0x27c) = 0;
    *(undefined4 *)((int)this + 0x284) = 0;
    *(int *)((int)this + 0xa84) = *(int *)((int)this + 800) * 5;
    DVar5 = timeGetTime();
    srand(DVar5 >> 3);
    DVar5 = timeGetTime();
    *(DWORD *)((int)this + 0xa9c) = (DVar5 >> 3 & 1) * *(int *)(*(int *)((int)this + 0x2b8) + 4);
    *(undefined4 *)((int)this + 0xaa0) = 0;
    if (*(LPCVOID *)((int)this + 0xaa4) != (LPCVOID)0x0) {
      pvVar6 = GlobalHandle(*(LPCVOID *)((int)this + 0xaa4));
      GlobalUnlock(pvVar6);
      pvVar6 = GlobalHandle(*(LPCVOID *)((int)this + 0xaa4));
      GlobalFree(pvVar6);
    }
    *(undefined4 *)((int)this + 0xaa8) = 0;
    *(undefined4 *)((int)this + 0xaac) = 0;
    *(undefined4 *)((int)this + 0xab0) = 0;
    if (DAT_5cd679f8 == 0) {
      uVar9 = *(uint *)(*(int *)((int)this + 0x2b8) + 4) / 100;
      *(uint *)((int)this + 0xaa0) = uVar9;
      pvVar6 = GlobalAlloc(0x42,uVar9 << 2);
      pvVar7 = GlobalLock(pvVar6);
      uVar9 = *(uint *)((int)this + 0xaa0);
      *(LPVOID *)((int)this + 0xaa4) = pvVar7;
      uVar8 = 0;
      if (uVar9 != 0) {
        do {
          *(float *)(*(int *)((int)this + 0xaa4) + uVar8 * 4) =
               (float)uVar8 / (float)(int)(uVar9 - 1);
          *(float *)(*(int *)((int)this + 0xaa4) + uVar8 * 4) =
               *(float *)(*(int *)((int)this + 0xaa4) + uVar8 * 4) - _DAT_5cd5172c;
          iVar1 = uVar8 * 4;
          iVar2 = uVar8 * 4;
          uVar8 = uVar8 + 1;
          *(float *)(*(int *)((int)this + 0xaa4) + iVar2) =
               *(float *)(*(int *)((int)this + 0xaa4) + iVar1) * _DAT_5cd51728;
          uVar9 = *(uint *)((int)this + 0xaa0);
        } while (uVar8 < uVar9);
      }
    }
    *(uint *)((int)this + 0x2c0) = (uint)(-1 < iVar4);
    return iVar4;
  }
  return -0x7fffbffb;
}


