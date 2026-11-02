/* Module: qt4plug.dll
   Function: FUN_5f51b1c0
   Address: 5f51b1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_5f51b1c0(int *param_1)

{
  int iVar1;
  int iVar2;
  HGLOBAL hMem;
  LPVOID pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int unaff_retaddr;
  int iVar9;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_10;
  
  iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  iVar7 = 0;
  if (-1 < iVar2) {
    hMem = GlobalAlloc(0x42,unaff_retaddr * 0x30);
    pvVar3 = GlobalLock(hMem);
    param_1[0xd3] = (int)pvVar3;
    if (pvVar3 == (LPVOID)0x0) {
      return -0x7ff8fff2;
    }
    FUN_5f575ff0();
    FUN_5f575fb0();
    iStack_2c = 0;
    iStack_30 = 0;
    iStack_28 = 0;
    iVar9 = 0;
    if (0 < unaff_retaddr) {
      do {
        iVar1 = iVar9 + 1;
        FUN_5f5773f0();
        FUN_5f576510();
        FUN_5f576650();
        FUN_5f576330();
        FUN_5f576350();
        iVar4 = FUN_5f5765b0();
        iStack_10 = FUN_5f576570();
        if (iStack_10 == 0) {
          iStack_10 = 1;
        }
        FUN_5f5769b0();
        iVar5 = FUN_5f576750();
        iVar6 = param_1[0xd3];
        *(int *)(iVar6 + 0x18 + iVar7) = iVar5;
        *(int *)(iVar6 + 0x1c + iVar7) = iVar5 >> 0x1f;
        if (iStack_24 == 0x736f756e) {
          *(int *)(param_1[0xd3] + 8 + iVar7) = iStack_2c;
          *(undefined4 *)(param_1[0xd3] + iVar7) = 1;
          if ((double)iVar4 / (double)iStack_10 != _DAT_5f596570) {
            *(double *)(param_1[0xd3] + iVar7 + 0x20) =
                 (double)*(longlong *)(param_1[0xd3] + 0x18 + iVar7) /
                 ((double)iVar4 / (double)iStack_10);
          }
          iVar4 = param_1[0xd3];
          iVar6 = ftol();
          if (iVar6 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = ftol();
          }
          *(undefined8 *)(iVar4 + iVar7 + 0x10) = uVar8;
          iStack_2c = iStack_2c + 1;
          *(int *)(param_1[0xd3] + 4 + iVar7) = iVar9;
        }
        else if (iStack_24 == 0x74657874) {
          *(int *)(param_1[0xd3] + 8 + iVar7) = iStack_28;
          iStack_28 = iStack_28 + 1;
          *(undefined4 *)(param_1[0xd3] + iVar7) = 8;
          *(int *)(param_1[0xd3] + 4 + iVar7) = iVar9;
        }
        else if (iStack_24 == 0x76696465) {
          *(int *)(param_1[0xd3] + 8 + iVar7) = iStack_30;
          *(undefined4 *)(param_1[0xd3] + iVar7) = 2;
          if ((double)iVar4 / (double)iStack_10 != _DAT_5f596570) {
            *(double *)(param_1[0xd3] + iVar7 + 0x20) =
                 (double)*(longlong *)(param_1[0xd3] + 0x18 + iVar7) /
                 ((double)iVar4 / (double)iStack_10);
          }
          iVar4 = param_1[0xd3];
          uVar8 = ftol();
          *(undefined8 *)(iVar4 + iVar7 + 0x10) = uVar8;
          iStack_30 = iStack_30 + 1;
          *(int *)(param_1[0xd3] + 4 + iVar7) = iVar9;
        }
        else {
          *(undefined4 *)(param_1[0xd3] + iVar7) = 0;
          *(int *)(param_1[0xd3] + 4 + iVar7) = iVar9;
        }
        iVar7 = iVar7 + 0x30;
        iVar9 = iVar1;
      } while (iVar1 < unaff_retaddr);
    }
  }
  return iVar2;
}


