/* Module: wmfplug2.dll
   Function: FUN_00409650
   Address: 00409650
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00409650(int param_1)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *unaff_EBX;
  int iVar5;
  int *piVar6;
  int *unaff_EDI;
  int *piVar7;
  bool bVar8;
  undefined1 *puStack_450;
  int *piStack_44c;
  undefined1 auStack_448 [4];
  undefined1 *puStack_444;
  undefined4 *puStack_440;
  int *piStack_43c;
  undefined4 uVar9;
  int local_420;
  undefined4 local_418 [2];
  int local_410;
  undefined1 auStack_40c [12];
  int aiStack_400 [256];
  
  if (*(int *)(param_1 + 8) == 0) {
    return -0x7fffbffb;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  piStack_43c = (int *)0x409685;
  hMem = GlobalAlloc(0x42,*(int *)(param_1 + 0x30) << 5);
  pvVar1 = GlobalLock(hMem);
  *(LPVOID *)(param_1 + 0x5c) = pvVar1;
  if (pvVar1 == (LPVOID)0x0) {
    return -0x7ff8fff2;
  }
  local_420 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    iVar5 = 0;
    while( true ) {
      piStack_43c = *(int **)(param_1 + 0x4c);
      puStack_440 = (undefined4 *)0x4096cb;
      local_410 = (**(code **)(*piStack_43c + 0x18))();
      if (local_410 < 0) break;
      puStack_440 = local_418;
      puStack_444 = auStack_40c;
      local_418[0] = 0x400;
      piStack_44c = (int *)0x4096ef;
      iVar2 = (**(code **)(*unaff_EBX + 0x10))();
      piStack_44c = unaff_EDI;
      if (iVar2 < 0) {
        puStack_450 = (undefined1 *)0x4097fc;
        (**(code **)(*unaff_EDI + 8))();
        return iVar2;
      }
      puStack_450 = (undefined1 *)0x409703;
      (**(code **)(*unaff_EDI + 8))();
      puStack_450 = &stack0xfffffbc8;
      unaff_EDI = (int *)0x0;
      uVar9 = 8;
      (**(code **)(**(int **)(param_1 + 0x54) + 0x14))
                (*(int **)(param_1 + 0x54),&stack0xfffffbd0,L"Duration",&stack0xfffffbd4,
                 &stack0xfffffbdc);
      iVar2 = *(int *)(param_1 + 0x5c);
      *(int **)(iVar2 + 0x10 + iVar5) = piStack_43c;
      *(undefined4 *)(iVar2 + 0x14 + iVar5) = uVar9;
      puStack_450 = (undefined1 *)0x4;
      iVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0x14))
                        (*(int **)(param_1 + 0x54),auStack_448,L"Bitrate",&puStack_444,
                         *(int *)(param_1 + 0x5c) + 0xc + iVar5,&puStack_450);
      iVar3 = 4;
      bVar8 = true;
      piVar6 = &DAT_0047b640;
      piVar7 = aiStack_400;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar8 = *piVar6 == *piVar7;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      } while (bVar8);
      if (bVar8) {
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar5) = 2;
        *(int *)(*(int *)(param_1 + 0x5c) + 4 + iVar5) = local_420;
        uVar4 = *(uint *)(param_1 + 0x40) | 2;
LAB_004097d1:
        *(uint *)(param_1 + 0x40) = uVar4;
      }
      else {
        iVar3 = 4;
        bVar8 = true;
        piVar6 = &DAT_0047b630;
        piVar7 = aiStack_400;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar8 = *piVar6 == *piVar7;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
        } while (bVar8);
        if (bVar8) {
          *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar5) = 1;
          *(int *)(*(int *)(param_1 + 0x5c) + 4 + iVar5) = local_420;
          uVar4 = *(uint *)(param_1 + 0x40) | 1;
          goto LAB_004097d1;
        }
      }
      local_420 = local_420 + 1;
      iVar5 = iVar5 + 0x20;
      if (*(int *)(param_1 + 0x30) <= local_420) {
        return iVar2;
      }
    }
  }
  return local_410;
}


