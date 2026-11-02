/* Module: sftrans1.dll
   Function: FUN_0048dff0
   Address: 0048dff0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048dff0(int param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  HGLOBAL hMem;
  LPVOID pvVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 local_20;
  undefined8 local_18;
  
  if ((param_2 != (int *)0x0) && (puVar11 = (undefined4 *)*param_2, puVar11 != (undefined4 *)0x0)) {
    uVar2 = ftol();
    uVar3 = ftol();
    uVar4 = ftol();
    uVar5 = ftol();
    iVar10 = param_2[3];
    local_20 = CONCAT13(uVar5,CONCAT21(CONCAT11(uVar2,uVar3),uVar4));
    iVar9 = param_2[4] - param_2[2];
    iVar1 = param_2[6];
    if (iVar10 < param_2[5]) {
      do {
        iVar8 = iVar9;
        puVar12 = puVar11;
        if (0 < iVar9) {
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar12 = local_20;
            puVar12 = puVar12 + 1;
          }
        }
        puVar11 = puVar11 + iVar1 + iVar9;
        iVar10 = iVar10 + 1;
      } while (iVar10 < param_2[5]);
    }
    if (0 < *(int *)(*(int *)(param_1 + 8) + 0xd1c)) {
      if (*(int *)(*(int *)(param_1 + 8) + 0xd38) == 0) {
        hMem = GlobalAlloc(0x40,0x170);
        pvVar6 = GlobalLock(hMem);
        if (pvVar6 == (LPVOID)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = FUN_0053af90();
        }
        *(undefined4 *)(*(int *)(param_1 + 8) + 0xd38) = uVar7;
        if (*(int *)(*(int *)(param_1 + 8) + 0xd38) == 0) {
          return;
        }
      }
      uVar7 = ftol();
      *(undefined4 *)(param_1 + 0x568) = uVar7;
      uVar7 = ftol();
      *(undefined4 *)(param_1 + 0x56c) = uVar7;
      iVar10 = FUN_0048d0d0();
      if (-1 < iVar10) {
        iVar10 = *(int *)(param_1 + 8);
        local_18 = *(double *)(iVar10 + 0xd28);
        if (*(int *)(iVar10 + 0xa58) == 0) {
          if (*(int *)(iVar10 + 0xab4) != 0) {
            local_18 = _DAT_00555908 - local_18;
          }
          FUN_0048e220(param_2,(undefined4)local_18,local_18._4_4_);
          return;
        }
        FUN_0048e5e0(param_2,*(undefined4 *)(iVar10 + 0xd28),*(undefined4 *)(iVar10 + 0xd2c));
      }
    }
  }
  return;
}


