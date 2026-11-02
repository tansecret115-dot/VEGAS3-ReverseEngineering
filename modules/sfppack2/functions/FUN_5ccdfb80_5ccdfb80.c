/* Module: sfppack2.dll
   Function: FUN_5ccdfb80
   Address: 5ccdfb80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5ccdfb80(void *this,short *param_1,undefined4 param_2)

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
  
  *(short **)((int)this + 0x54) = param_1;
  *(short **)((int)this + 0x108) = param_1;
  *(undefined4 *)((int)this + 0x58) = param_2;
  *(undefined4 *)((int)this + 0x10c) = param_2;
  if (*param_1 == 1) {
    sVar3 = param_1[7];
    if (sVar3 == 8) {
      *(undefined1 **)((int)this + 0x138) = &LAB_5cce1040;
      *(undefined1 **)((int)this + 0x134) = &LAB_5cce11a0;
    }
    else if (sVar3 == 0x10) {
      *(undefined1 **)((int)this + 0x138) = &LAB_5cce12b0;
      *(undefined1 **)((int)this + 0x134) = &LAB_5cce1430;
    }
    else {
      if (sVar3 != 0x20) {
        return -0x7fffbffb;
      }
      *(undefined1 **)((int)this + 0x138) = &LAB_5cce1990;
      *(undefined1 **)((int)this + 0x134) = &LAB_5cce1b40;
    }
  }
  else if (param_1[7] == 0x20) {
    *(undefined1 **)((int)this + 0x138) = &LAB_5cce1540;
    *(undefined1 **)((int)this + 0x134) = &LAB_5cce1620;
  }
  else {
    if (param_1[7] != 0x40) {
      return -0x7fffbffb;
    }
    *(code **)((int)this + 0x138) = FUN_5cce1c30;
    *(code **)((int)this + 0x134) = FUN_5cce1d40;
  }
  FUN_5ccdd470(this,(undefined4 *)((int)this + 0xc0));
  iVar4 = FUN_5ccdfda0((uint *)((int)this + 0x68));
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(int *)((int)this + 300) = *(int *)((int)this + 0xb4) * 5;
  DVar5 = timeGetTime();
  srand(DVar5 >> 3);
  DVar5 = timeGetTime();
  *(DWORD *)((int)this + 0x140) = (DVar5 >> 3 & 1) * *(int *)(*(int *)((int)this + 0x54) + 4);
  *(undefined4 *)((int)this + 0x144) = 0;
  if (*(LPCVOID *)((int)this + 0x148) != (LPCVOID)0x0) {
    pvVar6 = GlobalHandle(*(LPCVOID *)((int)this + 0x148));
    GlobalUnlock(pvVar6);
    pvVar6 = GlobalHandle(*(LPCVOID *)((int)this + 0x148));
    GlobalFree(pvVar6);
  }
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  if (DAT_5cd679f8 == 0) {
    uVar9 = *(uint *)(*(int *)((int)this + 0x54) + 4) / 100;
    *(uint *)((int)this + 0x144) = uVar9;
    pvVar6 = GlobalAlloc(0x42,uVar9 << 2);
    pvVar7 = GlobalLock(pvVar6);
    uVar9 = *(uint *)((int)this + 0x144);
    *(LPVOID *)((int)this + 0x148) = pvVar7;
    uVar8 = 0;
    if (uVar9 != 0) {
      do {
        *(float *)(*(int *)((int)this + 0x148) + uVar8 * 4) = (float)uVar8 / (float)(int)(uVar9 - 1)
        ;
        *(float *)(*(int *)((int)this + 0x148) + uVar8 * 4) =
             *(float *)(*(int *)((int)this + 0x148) + uVar8 * 4) - _DAT_5cd5172c;
        iVar1 = uVar8 * 4;
        iVar2 = uVar8 * 4;
        uVar8 = uVar8 + 1;
        *(float *)(*(int *)((int)this + 0x148) + iVar2) =
             *(float *)(*(int *)((int)this + 0x148) + iVar1) * _DAT_5cd51728;
        uVar9 = *(uint *)((int)this + 0x144);
      } while (uVar8 < uVar9);
    }
  }
  *(uint *)((int)this + 0x5c) = (uint)(-1 < iVar4);
  return iVar4;
}


