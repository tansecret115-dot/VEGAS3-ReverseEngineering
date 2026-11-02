/* Module: vegas30.exe
   Function: FUN_004be140
   Address: 004be140
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004be140(int param_1,undefined4 param_2,undefined4 param_3,short param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  SetCapture(*(HWND *)(param_1 + 4));
  *(undefined4 *)(param_1 + 0xa8) = param_2;
  *(undefined4 *)(param_1 + 0xc40) = 0;
  *(undefined4 *)(param_1 + 0xac) = param_3;
  if ((DAT_00647794 == 2) ||
     ((DAT_00647794 == 1 && (*(int *)(param_1 + 0xb78) != 0 || *(int *)(param_1 + 0xb7c) != 0)))) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(uint *)(param_1 + 0x18) = iVar1 << 0x10 | *(uint *)(param_1 + 0x18) & 0xfffeffff;
  *(undefined4 *)(param_1 + 0xb0) = 400;
  *(undefined4 *)(param_1 + 0xb4) = 400;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 1;
  if (param_4 == 8) {
    uVar3 = *(uint *)(param_1 + 0xb48);
    iVar1 = *(int *)(param_1 + 0xb4c);
    *(uint *)(param_1 + 0x1a8) = -uVar3;
    *(uint *)(param_1 + 0x1ac) = -(iVar1 + (uint)(uVar3 != 0));
    uVar6 = *(uint *)(param_1 + 0x600) - *(uint *)(param_1 + 0xb50);
    *(uint *)(param_1 + 0x1b0) = uVar6 - uVar3;
    *(uint *)(param_1 + 0x1b4) =
         (((*(int *)(param_1 + 0x604) - *(int *)(param_1 + 0xb54)) -
          (uint)(*(uint *)(param_1 + 0x600) < *(uint *)(param_1 + 0xb50))) - iVar1) -
         (uint)(uVar6 < uVar3);
  }
  else {
    if (param_4 != 9) {
      if (param_4 == 10) {
        uVar3 = *(uint *)(param_1 + 0xb50);
        iVar1 = *(int *)(param_1 + 0xb54);
        *(uint *)(param_1 + 0x1a8) = -uVar3;
        uVar6 = *(uint *)(param_1 + 0xb48);
        *(uint *)(param_1 + 0x1ac) = -(iVar1 + (uint)(uVar3 != 0));
        uVar5 = *(uint *)(param_1 + 0x600) - uVar6;
        *(uint *)(param_1 + 0x1b0) = uVar5 - uVar3;
        *(uint *)(param_1 + 0x98) = uVar6 + uVar3;
        *(uint *)(param_1 + 0x1b4) =
             (((*(int *)(param_1 + 0x604) - *(int *)(param_1 + 0xb4c)) -
              (uint)(*(uint *)(param_1 + 0x600) < uVar6)) - iVar1) - (uint)(uVar5 < uVar3);
        *(uint *)(param_1 + 0x9c) = *(int *)(param_1 + 0xb4c) + iVar1 + (uint)CARRY4(uVar6,uVar3);
      }
      goto LAB_004be2ea;
    }
    uVar3 = *(uint *)(param_1 + 0xb48);
    iVar1 = *(int *)(param_1 + 0xb4c);
    *(uint *)(param_1 + 0x1a8) = -uVar3;
    *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_1 + 0xb50);
    *(uint *)(param_1 + 0x1ac) = -(iVar1 + (uint)(uVar3 != 0));
    *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_1 + 0xb54);
  }
  *(uint *)(param_1 + 0x98) = uVar3;
  *(int *)(param_1 + 0x9c) = iVar1;
LAB_004be2ea:
  uVar7 = ftol();
  uVar3 = *(uint *)(param_1 + 0x98) - (uint)uVar7;
  *(uint *)(param_1 + 0x1a0) = uVar3 - *(uint *)(param_1 + 0xb88);
  iVar1 = *(int *)(param_1 + 0x1ac);
  *(uint *)(param_1 + 0x1a4) =
       (((*(int *)(param_1 + 0x9c) - (int)((ulonglong)uVar7 >> 0x20)) -
        (uint)(*(uint *)(param_1 + 0x98) < (uint)uVar7)) - *(int *)(param_1 + 0xb8c)) -
       (uint)(uVar3 < *(uint *)(param_1 + 0xb88));
  iVar2 = *(int *)(param_1 + 0x1a8);
  if ((-1 < iVar1) && ((0 < iVar1 || (iVar2 != 0)))) {
    iVar2 = 0;
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x1a8) = iVar2;
  iVar2 = *(int *)(param_1 + 0x1b4);
  *(int *)(param_1 + 0x1ac) = iVar1;
  uVar4 = *(undefined4 *)(param_1 + 0x1b0);
  if ((iVar2 < 1) && (iVar2 < 0)) {
    uVar4 = 0;
    iVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0x1b0) = uVar4;
  *(int *)(param_1 + 0x1b4) = iVar2;
  return;
}


