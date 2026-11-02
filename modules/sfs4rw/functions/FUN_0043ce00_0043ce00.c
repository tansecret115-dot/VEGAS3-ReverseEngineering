/* Module: sfs4rw.dll
   Function: FUN_0043ce00
   Address: 0043ce00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0043ce00(void *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int local_784;
  int local_770 [9];
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
  
  iVar6 = 0;
  if (*(int *)((int)param_1 + 0x24) != 3) {
    return -0x7fffbffb;
  }
  iVar4 = FUN_0043d220((int)param_1);
  if (iVar4 != 0) {
    piVar7 = local_770;
    for (iVar6 = 0xd8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar7 = 0;
      piVar7 = piVar7 + 1;
    }
    local_71c[0] = '\0';
    local_618 = 0;
    local_514 = 0;
    *(undefined4 *)((int)param_1 + 0x18) = 0;
    bVar3 = false;
    *(undefined4 *)((int)param_1 + 0x1c) = 0;
    iVar6 = FUN_0043c9d0(param_1,local_770);
    if (iVar6 == 0) {
      local_784 = 0;
      while( true ) {
        iVar6 = local_720;
        uVar2 = local_724;
        iVar4 = 0;
        piVar7 = *(int **)(*(int *)(*(int *)((int)param_1 + 0x10) + 8) + local_784);
        if (piVar7 == (int *)0x0) break;
        if (*piVar7 == 0) {
          piVar7[2] = *(int *)((int)param_1 + 0x18);
          piVar7[3] = *(int *)((int)param_1 + 0x1c);
          uVar1 = (local_738 + local_73c) * 2 + 0x40;
          uVar8 = uVar1 + local_74c;
          iVar5 = local_748 + (uint)CARRY4(uVar1,local_74c);
          if ((*(int *)((int)param_1 + 0x20) != 0) && (DAT_004aedf4 == 0)) {
            MultiByteToWideChar(0,1,"Entries",-1,local_410,0x104);
            local_20a = 0;
            if ((*(byte *)((int)param_1 + 0x888) & 1) == 0) {
              (**(code **)(**(int **)((int)param_1 + 0x20) + 4))(local_410,0,0);
            }
            (**(code **)(**(int **)((int)param_1 + 0x20) + 0xc))(0xaaaaaa7);
            DAT_004aedf4 = 1;
          }
          uVar1 = *(uint *)((int)param_1 + 0x890);
          iVar4 = FUN_004357b0(*(HANDLE *)((int)param_1 + 8),uVar1 + uVar2,
                               *(int *)((int)param_1 + 0x894) + iVar6 + (uint)CARRY4(uVar1,uVar2),
                               uVar8,iVar5,*(HANDLE *)((int)param_1 + 0xc),
                               uVar1 + *(uint *)((int)param_1 + 0x18),
                               *(int *)((int)param_1 + 0x894) + *(int *)((int)param_1 + 0x1c) +
                               (uint)CARRY4(uVar1,*(uint *)((int)param_1 + 0x18)));
          if (iVar4 < 0) goto LAB_0043d043;
          uVar2 = *(uint *)((int)param_1 + 0x18);
          *(uint *)((int)param_1 + 0x18) = uVar2 + uVar8;
          *(uint *)((int)param_1 + 0x1c) =
               *(int *)((int)param_1 + 0x1c) + iVar5 + (uint)CARRY4(uVar2,uVar8);
        }
        else {
          DAT_004aedf4 = 0;
          if (*(int *)((int)param_1 + 0x20) != 0) {
            MultiByteToWideChar(0,1,local_71c,-1,aWStack_208,0x104);
            uStack_2 = 0;
            FUN_0044de40(*(void **)((int)param_1 + 0x20),aWStack_208);
            (**(code **)(**(int **)((int)param_1 + 0x20) + 0xc))(0xaaaaaa3);
          }
          bVar3 = true;
          piVar7[2] = -1;
          piVar7[3] = -1;
          *(int *)((int)param_1 + 0x89c) = *(int *)((int)param_1 + 0x89c) + -1;
        }
        if (iVar4 < 0) goto LAB_0043d043;
        *(int **)(*(int *)(*(int *)((int)param_1 + 0x10) + 8) + local_784) = piVar7;
        iVar6 = FUN_0043ca90(param_1,local_770);
        if ((iVar6 < 0) || (local_784 = local_784 + 4, iVar6 != 0)) goto LAB_0043d043;
      }
      FUN_0043c400(param_1,0xaaaaaaa3,(uchar *)"SubmitDeleteList",(uchar *)0x0);
    }
LAB_0043d043:
    iVar6 = FUN_0043d090(param_1,*(int *)((int)param_1 + 0x10));
    if (*(int **)((int)param_1 + 0x20) != (int *)0x0) {
      (**(code **)(**(int **)((int)param_1 + 0x20) + 0xc))(iVar6);
    }
    if ((-1 < iVar6) && (bVar3)) {
      *(undefined4 *)((int)param_1 + 0x8a8) = 1;
    }
  }
  return iVar6;
}


