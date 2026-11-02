/* Module: sfxpfx2.dll
   Function: FUN_5c89d930
   Address: 5c89d930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5c89d930(void *this,undefined4 param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  
  uVar9 = 0;
  uVar1 = MulDiv(0x2711,*(int *)(*(int *)((int)this + 0x44) + 4),10000);
  uVar8 = 0;
  if (*(int *)((int)this + 0x44) != 0) {
    uVar8 = (uint)*(ushort *)(*(int *)((int)this + 0x44) + 2);
  }
  if (uVar8 != 0) {
    piVar2 = (int *)((int)this + 0x128);
    uVar5 = uVar8;
    do {
      if (*piVar2 != 0) {
        uVar9 = uVar9 + 1;
      }
      piVar2 = piVar2 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (uVar9 == uVar8) {
    if ((param_2 == 0) && (uVar8 != 0)) {
      puVar7 = (undefined4 *)((int)this + 0x128);
      do {
        puVar10 = (undefined4 *)*puVar7;
        for (iVar6 = (uVar1 & 0x1fffffff) << 1; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        puVar7 = puVar7 + 1;
        uVar8 = uVar8 - 1;
        for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined1 *)puVar10 = 0;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
      } while (uVar8 != 0);
      return 0;
    }
  }
  else {
    puVar7 = (undefined4 *)((int)this + 0x128);
    param_2 = 0x10;
    do {
      if ((LPCVOID)*puVar7 != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle((LPCVOID)*puVar7);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle((LPCVOID)*puVar7);
        GlobalFree(pvVar3);
        *puVar7 = 0;
      }
      puVar7 = puVar7 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    uVar9 = 0;
    if (uVar8 != 0) {
      piVar2 = (int *)((int)this + 0x128);
      do {
        if (*piVar2 == 0) {
          pvVar3 = GlobalAlloc(0x40,uVar1 << 3);
          pvVar4 = GlobalLock(pvVar3);
          *piVar2 = (int)pvVar4;
          if (pvVar4 == (LPVOID)0x0) {
            return 0x8007000e;
          }
        }
        uVar9 = uVar9 + 1;
        piVar2 = piVar2 + 1;
      } while (uVar9 < uVar8);
      if (uVar8 != 0) {
        piVar2 = (int *)((int)this + 0x170);
        puVar7 = (undefined4 *)((int)this + 0xe8);
        do {
          piVar2[-1] = 0;
          iVar6 = MulDiv(0x2711,*(int *)(*(int *)((int)this + 0x44) + 4),10000);
          *piVar2 = iVar6 + -1;
          piVar2[1] = 0;
          piVar2[3] = 0;
          piVar2[2] = 0;
          piVar2[4] = 0;
          *puVar7 = 0;
          piVar2 = piVar2 + 6;
          uVar8 = uVar8 - 1;
          puVar7 = puVar7 + 1;
        } while (uVar8 != 0);
      }
    }
  }
  return 0;
}


