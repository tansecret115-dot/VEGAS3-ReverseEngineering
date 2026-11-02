/* Module: mp3rw.dll
   Function: FUN_004840d0
   Address: 004840d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004840d0(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  int *piVar11;
  int local_14;
  int iStack_c;
  
  iVar5 = *(int *)(param_1 + 0x1d1);
  if (*(int *)(param_1 + 0x82) == 1) {
    local_14 = 0x1fe;
    *(undefined1 *)(iVar5 + 0x1c) = 1;
  }
  else {
    local_14 = 0;
    *(undefined1 *)(iVar5 + 0x1c) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x96);
  uVar3 = (**(code **)(*(int *)(param_1 + 4) + 8))(param_1,1,local_14 + 0x100);
  *(undefined4 *)(iVar5 + 0x18) = uVar3;
  iVar4 = *(int *)(iVar5 + 0x14);
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x96)) {
    piVar11 = (int *)(iVar5 + 0x1d);
    do {
      iVar7 = *piVar11;
      iVar4 = iVar4 / iVar7;
      if (iVar1 != 0) {
        *(int *)(*(int *)(iVar5 + 0x18) + iVar10 * 4) =
             *(int *)(*(int *)(iVar5 + 0x18) + iVar10 * 4) + 0xff;
      }
      iVar6 = 0;
      iVar7 = iVar7 + -1;
      puVar2 = *(undefined1 **)(*(int *)(iVar5 + 0x18) + iVar10 * 4);
      iVar5 = FUN_00484220(param_1,iVar10,0,iVar7);
      iVar8 = 0;
      do {
        while (iVar5 < iVar8) {
          iVar6 = iVar6 + 1;
          iVar5 = FUN_00484220(iStack_c,iVar10,iVar6,iVar7);
        }
        puVar2[iVar8] = (char)iVar4 * (char)iVar6;
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0x100);
      if (iVar1 != 0) {
        iVar5 = 1;
        puVar9 = puVar2;
        do {
          puVar9 = puVar9 + -1;
          iVar7 = iVar5 + 1;
          *puVar9 = *puVar2;
          puVar2[iVar5 + 0xff] = puVar2[0xff];
          iVar5 = iVar7;
        } while (iVar7 < 0x100);
      }
      iVar10 = iVar10 + 1;
      piVar11 = piVar11 + 1;
      iVar5 = local_14;
      param_1 = iStack_c;
    } while (iVar10 < *(int *)(iStack_c + 0x96));
  }
  return;
}


