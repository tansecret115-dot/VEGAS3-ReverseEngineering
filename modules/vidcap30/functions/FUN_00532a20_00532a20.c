/* Module: vidcap30.exe
   Function: FUN_00532a20
   Address: 00532a20
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_00532a20(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  BOOL BVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  uint uStack_7c8;
  uint uStack_7c4;
  int iStack_7c0;
  undefined1 auStack_7bc [4];
  undefined4 auStack_7b8 [4];
  undefined4 uStack_7a8;
  undefined4 uStack_7a4;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  undefined4 uStack_798;
  uint uStack_794;
  int iStack_790;
  undefined4 uStack_78c;
  undefined4 uStack_788;
  undefined4 uStack_784;
  int iStack_780;
  undefined4 uStack_778;
  undefined4 uStack_774;
  uchar auStack_770 [260];
  undefined1 uStack_66c;
  undefined4 local_568 [4];
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  uint uStack_544;
  int iStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  int iStack_534;
  int iStack_530;
  undefined4 uStack_524;
  uint uStack_51c;
  int iStack_518;
  uchar local_514 [260];
  undefined1 local_410;
  undefined1 local_30c;
  WCHAR local_208 [259];
  undefined2 local_2;
  
  puVar8 = local_568;
  for (iVar7 = 0xd8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_514[0] = '\0';
  local_410 = 0;
  local_30c = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar9 = FUN_005329a0();
    MultiByteToWideChar(0,1,"Entries",-1,local_208,0x104);
    local_2 = 0;
    (**(code **)(**(int **)(param_1 + 0x20) + 4))(local_208,uVar9);
    (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa7);
  }
  uVar2 = FUN_00537440(local_568);
  while (uVar2 == 0) {
    iVar7 = FUN_00532950(local_514);
    uVar1 = local_568[3];
    if (iVar7 == 0) {
      puVar8 = auStack_7b8;
      for (iVar7 = 0x94; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      auStack_7b8[3] = uVar1;
      uStack_7a8 = uStack_558;
      uStack_78c = uStack_53c;
      uStack_788 = uStack_538;
      uStack_784 = uStack_524;
      iStack_790 = iStack_540;
      uStack_7a4 = uStack_554;
      uStack_794 = uStack_544;
      iStack_780 = iStack_534;
      uStack_798 = uStack_548;
      uStack_778 = *(undefined4 *)(param_1 + 0x18);
      uStack_7a0 = uStack_550;
      auStack_7b8[1] = local_568[1];
      uStack_79c = uStack_54c;
      uStack_774 = *(undefined4 *)(param_1 + 0x1c);
      auStack_7b8[0] = 0xa034d55;
      auStack_7b8[2] = 0;
      _mbscpy(auStack_770,local_514);
      uStack_66c = 0;
      BVar3 = WriteFile(*(HANDLE *)(param_1 + 0xc),auStack_7b8,0x40,&uStack_7c8,(LPOVERLAPPED)0x0);
      uVar2 = *(uint *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x18) = uVar2 + uStack_7c8;
      *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (uint)CARRY4(uVar2,uStack_7c8);
      if (BVar3 != 0) {
        MultiByteToWideChar(0,1,(LPCSTR)auStack_770,-1,local_208,0x104);
        local_2 = 0;
        BVar3 = WriteFile(*(HANDLE *)(param_1 + 0xc),local_208,iStack_780 * 2,&uStack_7c8,
                          (LPOVERLAPPED)0x0);
        if (BVar3 != 0) {
          uVar2 = *(uint *)(param_1 + 0x18);
          *(uint *)(param_1 + 0x18) = uVar2 + uStack_7c8;
          *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (uint)CARRY4(uVar2,uStack_7c8);
          uVar4 = iStack_530 * 2 + iStack_534 * 2;
          uVar5 = uVar4 + uStack_51c;
          uStack_7c4 = uStack_544;
          uVar6 = uVar5 + 0x40;
          iStack_7c0 = iStack_540;
          uVar2 = *(uint *)(param_1 + 0x890);
          iVar7 = FUN_00530220(*(undefined4 *)(param_1 + 8),uVar2 + uVar6,
                               *(int *)(param_1 + 0x894) +
                               (uint)CARRY4(iStack_530 * 2,iStack_534 * 2) + iStack_518 +
                               (uint)CARRY4(uVar4,uStack_51c) + (uint)(0xffffffbf < uVar5) +
                               (uint)CARRY4(uVar2,uVar6),uStack_544,iStack_540,
                               *(undefined4 *)(param_1 + 0xc),*(uint *)(param_1 + 0x18) + uVar2,
                               *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x894) +
                               (uint)CARRY4(*(uint *)(param_1 + 0x18),uVar2));
          if (-1 < iVar7) {
            uVar2 = *(uint *)(param_1 + 0x18);
            *(uint *)(param_1 + 0x18) = uVar2 + uStack_7c4;
            *(uint *)(param_1 + 0x1c) =
                 *(int *)(param_1 + 0x1c) + iStack_7c0 + (uint)CARRY4(uVar2,uStack_7c4);
            _SfList_AllocAndInsertItem_20
                      (*(undefined4 *)(param_1 + 0x10),auStack_7b8,0x250,0xffffffff,auStack_7bc);
            *(int *)(param_1 + 0x89c) = *(int *)(param_1 + 0x89c) + 1;
          }
        }
      }
    }
    uVar2 = FUN_00537500(local_568);
  }
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaaf);
  }
  return (-1 < (int)uVar2) - 1 & uVar2;
}


