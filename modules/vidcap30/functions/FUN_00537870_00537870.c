/* Module: vidcap30.exe
   Function: FUN_00537870
   Address: 00537870
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00537870(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int local_784;
  undefined4 local_770 [9];
  uint local_74c;
  int local_748;
  int local_73c;
  int local_738;
  uint local_724;
  int local_720;
  CHAR local_71c [260];
  undefined1 local_618;
  undefined1 local_514;
  WCHAR local_410 [259];
  undefined2 local_20a;
  WCHAR aWStack_208 [259];
  undefined2 uStack_2;
  
  iVar7 = 0;
  if (*(int *)(param_1 + 0x24) != 3) {
    return -0x7fffbffb;
  }
  iVar5 = CArchive2::IsDeleteRequested();
  if (iVar5 != 0) {
    puVar8 = local_770;
    for (iVar7 = 0xd8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    local_71c[0] = '\0';
    local_618 = 0;
    local_514 = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    bVar4 = false;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    iVar7 = FUN_00537440(local_770);
    if (iVar7 == 0) {
      local_784 = 0;
      while( true ) {
        iVar7 = local_720;
        uVar3 = local_724;
        iVar5 = 0;
        piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x10) + 8) + local_784);
        if (piVar2 == (int *)0x0) break;
        if (*piVar2 == 0) {
          piVar2[2] = *(int *)(param_1 + 0x18);
          piVar2[3] = *(int *)(param_1 + 0x1c);
          uVar1 = (local_738 + local_73c) * 2 + 0x40;
          uVar9 = uVar1 + local_74c;
          iVar6 = local_748 + (uint)CARRY4(uVar1,local_74c);
          if ((*(int *)(param_1 + 0x20) != 0) && (DAT_006624a0 == 0)) {
            MultiByteToWideChar(0,1,"Entries",-1,local_410,0x104);
            local_20a = 0;
            if ((*(byte *)(param_1 + 0x888) & 1) == 0) {
              (**(code **)(**(int **)(param_1 + 0x20) + 4))(local_410,0,0);
            }
            (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa7);
            DAT_006624a0 = 1;
          }
          uVar1 = *(uint *)(param_1 + 0x890);
          iVar5 = FUN_00530220(*(undefined4 *)(param_1 + 8),uVar1 + uVar3,
                               *(int *)(param_1 + 0x894) + iVar7 + (uint)CARRY4(uVar1,uVar3),uVar9,
                               iVar6,*(undefined4 *)(param_1 + 0xc),
                               uVar1 + *(uint *)(param_1 + 0x18),
                               *(int *)(param_1 + 0x894) + *(int *)(param_1 + 0x1c) +
                               (uint)CARRY4(uVar1,*(uint *)(param_1 + 0x18)));
          if (iVar5 < 0) goto LAB_00537ab3;
          uVar3 = *(uint *)(param_1 + 0x18);
          *(uint *)(param_1 + 0x18) = uVar3 + uVar9;
          *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iVar6 + (uint)CARRY4(uVar3,uVar9);
        }
        else {
          DAT_006624a0 = 0;
          if (*(int *)(param_1 + 0x20) != 0) {
            MultiByteToWideChar(0,1,local_71c,-1,aWStack_208,0x104);
            uStack_2 = 0;
            FUN_00555170(aWStack_208);
            (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa3);
          }
          bVar4 = true;
          piVar2[2] = -1;
          piVar2[3] = -1;
          *(int *)(param_1 + 0x89c) = *(int *)(param_1 + 0x89c) + -1;
        }
        if (iVar5 < 0) goto LAB_00537ab3;
        *(int **)(*(int *)(*(int *)(param_1 + 0x10) + 8) + local_784) = piVar2;
        iVar7 = FUN_00537500(local_770);
        if ((iVar7 < 0) || (local_784 = local_784 + 4, iVar7 != 0)) goto LAB_00537ab3;
      }
      FUN_00536e70(0xaaaaaaa3,"SubmitDeleteList",0);
    }
LAB_00537ab3:
    iVar7 = FUN_00537b00(*(undefined4 *)(param_1 + 0x10));
    if (*(int **)(param_1 + 0x20) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(iVar7);
    }
    if ((-1 < iVar7) && (bVar4)) {
      *(undefined4 *)(param_1 + 0x8a8) = 1;
    }
  }
  return iVar7;
}


