/* Module: vegas30.exe
   Function: FUN_004934e0
   Address: 004934e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004935e4) */

void FUN_004934e0(int param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  HWND pHVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  FUN_00492f70(param_1);
  pHVar6 = GetCapture();
  if (pHVar6 == *(HWND *)(param_1 + 4)) {
    FUN_00454f40(param_1);
    ReleaseCapture();
  }
  if (*(int *)(param_1 + 0xa4) == 2) {
    if (param_4 != 0) {
      FUN_004931f0(param_1);
      FUN_00469280(param_1);
    }
  }
  else {
    if (*(int *)(param_1 + 0xa4) != 9) {
      *(undefined4 *)(param_1 + 0xa4) = 0;
      return;
    }
    if (param_4 == 0) {
      if ((((*(int *)(param_1 + 0x90) < param_2 + -10) || (param_2 + 10 < *(int *)(param_1 + 0x90)))
          || (*(int *)(param_1 + 0x94) < param_3 + -10)) ||
         (param_3 + 10 < *(int *)(param_1 + 0x94))) {
        lVar10 = ftol();
        lVar10 = lVar10 + *(longlong *)(param_1 + 0xb88);
        iVar8 = (int)((ulonglong)lVar10 >> 0x20);
        iVar3 = *(int *)(param_1 + 0x9c);
        lVar5 = lVar10;
        if (*(longlong *)(param_1 + 0x98) < lVar10) {
          lVar5 = *(longlong *)(param_1 + 0x98);
        }
        if ((iVar8 <= iVar3) && ((iVar8 < iVar3 || ((uint)lVar10 < *(uint *)(param_1 + 0x98))))) {
          lVar10 = CONCAT44(iVar3,*(undefined4 *)(param_1 + 0x98));
        }
        uVar2 = *(uint *)(param_1 + 0xbb0);
        uVar7 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f) >> 1;
        lVar4 = (longlong)(param_3 - *(int *)(param_1 + 0xac4)) *
                (longlong)*(int *)(param_1 + 0xbac);
        if (lVar4 < 0) {
          lVar4 = CONCAT44((int)((ulonglong)lVar4 >> 0x20) - (uint)((uint)lVar4 < uVar7),
                           (uint)lVar4 - uVar7);
          uVar7 = 0;
        }
        iVar3 = *(int *)(param_1 + 0xa0);
        iVar8 = *(int *)(param_1 + 0xba8) +
                (int)((longlong)(lVar4 + (ulonglong)uVar7) / (longlong)(int)uVar2);
        iVar9 = iVar3;
        if (iVar8 <= iVar3) {
          iVar9 = iVar8;
        }
        if (iVar8 < iVar3) {
          iVar8 = iVar3;
        }
        if (*(int *)(param_1 + 0x208) != 2) {
          FUN_004543c0(param_1,lVar5,lVar10 - lVar5,0);
        }
        if (*(int *)(param_1 + 0x208) != 1) {
          FUN_004cb050(param_1,iVar9,iVar8 - iVar9);
        }
      }
      else {
        pcVar1 = *(code **)(*(int *)(param_1 + 0xab4) + 0x30);
        if (pcVar1 == (code *)0x0) {
          FUN_00458c00(param_1,0x80000001,0x80000001);
        }
        else {
          (*pcVar1)();
        }
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0xaf0);
  if ((-1 < iVar3) && (iVar3 < 4)) {
    FUN_00458e80(param_1,iVar3);
    DAT_0064767c = DAT_0064767c | 4;
  }
  *(undefined4 *)(param_1 + 0xa4) = 0;
  FUN_004530a0(param_1,0);
  return;
}


