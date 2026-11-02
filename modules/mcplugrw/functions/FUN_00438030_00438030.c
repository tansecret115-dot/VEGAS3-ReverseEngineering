/* Module: mcplugrw.dll
   Function: FUN_00438030
   Address: 00438030
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_00438030(void *param_1)

{
  uint uVar1;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  uint uStack_7c8;
  uint uStack_7c4;
  int iStack_7c0;
  int iStack_7bc;
  int aiStack_7b8 [4];
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
  int local_568 [4];
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
  
  piVar8 = local_568;
  for (iVar7 = 0xd8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  local_514[0] = '\0';
  local_410 = 0;
  local_30c = 0;
  if (*(int *)((int)param_1 + 0x20) != 0) {
    uVar9 = FUN_00437fb0(param_1);
    MultiByteToWideChar(0,1,"Entries",-1,local_208,0x104);
    local_2 = 0;
    (**(code **)(**(int **)((int)param_1 + 0x20) + 4))(local_208,uVar9);
    (**(code **)(**(int **)((int)param_1 + 0x20) + 0xc))(0xaaaaaa7);
  }
  uVar1 = FUN_0043ca50(param_1,local_568);
  while (uVar1 == 0) {
    iVar2 = FUN_00437f60(param_1,(LPCSTR)local_514);
    iVar7 = local_568[3];
    if (iVar2 == 0) {
      piVar8 = aiStack_7b8;
      for (iVar2 = 0x94; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar8 = 0;
        piVar8 = piVar8 + 1;
      }
      aiStack_7b8[3] = iVar7;
      uStack_7a8 = uStack_558;
      uStack_78c = uStack_53c;
      uStack_788 = uStack_538;
      uStack_784 = uStack_524;
      iStack_790 = iStack_540;
      uStack_7a4 = uStack_554;
      uStack_794 = uStack_544;
      iStack_780 = iStack_534;
      uStack_798 = uStack_548;
      uStack_778 = *(undefined4 *)((int)param_1 + 0x18);
      uStack_7a0 = uStack_550;
      aiStack_7b8[1] = local_568[1];
      uStack_79c = uStack_54c;
      uStack_774 = *(undefined4 *)((int)param_1 + 0x1c);
      aiStack_7b8[0] = 0xa034d55;
      aiStack_7b8[2] = 0;
      _mbscpy(auStack_770,local_514);
      uStack_66c = 0;
      BVar3 = WriteFile(*(HANDLE *)((int)param_1 + 0xc),aiStack_7b8,0x40,&uStack_7c8,
                        (LPOVERLAPPED)0x0);
      uVar1 = *(uint *)((int)param_1 + 0x18);
      *(uint *)((int)param_1 + 0x18) = uVar1 + uStack_7c8;
      *(uint *)((int)param_1 + 0x1c) =
           *(int *)((int)param_1 + 0x1c) + (uint)CARRY4(uVar1,uStack_7c8);
      if (BVar3 != 0) {
        MultiByteToWideChar(0,1,(LPCSTR)auStack_770,-1,local_208,0x104);
        local_2 = 0;
        BVar3 = WriteFile(*(HANDLE *)((int)param_1 + 0xc),local_208,iStack_780 * 2,&uStack_7c8,
                          (LPOVERLAPPED)0x0);
        if (BVar3 != 0) {
          uVar1 = *(uint *)((int)param_1 + 0x18);
          *(uint *)((int)param_1 + 0x18) = uVar1 + uStack_7c8;
          *(uint *)((int)param_1 + 0x1c) =
               *(int *)((int)param_1 + 0x1c) + (uint)CARRY4(uVar1,uStack_7c8);
          uVar4 = iStack_530 * 2 + iStack_534 * 2;
          uVar5 = uVar4 + uStack_51c;
          uStack_7c4 = uStack_544;
          uVar6 = uVar5 + 0x40;
          iStack_7c0 = iStack_540;
          uVar1 = *(uint *)((int)param_1 + 0x890);
          iVar7 = FUN_00435830(*(HANDLE *)((int)param_1 + 8),uVar1 + uVar6,
                               *(int *)((int)param_1 + 0x894) +
                               (uint)CARRY4(iStack_530 * 2,iStack_534 * 2) + iStack_518 +
                               (uint)CARRY4(uVar4,uStack_51c) + (uint)(0xffffffbf < uVar5) +
                               (uint)CARRY4(uVar1,uVar6),uStack_544,iStack_540,
                               *(HANDLE *)((int)param_1 + 0xc),
                               *(uint *)((int)param_1 + 0x18) + uVar1,
                               *(int *)((int)param_1 + 0x1c) + *(int *)((int)param_1 + 0x894) +
                               (uint)CARRY4(*(uint *)((int)param_1 + 0x18),uVar1));
          if (-1 < iVar7) {
            uVar1 = *(uint *)((int)param_1 + 0x18);
            *(uint *)((int)param_1 + 0x18) = uVar1 + uStack_7c4;
            *(uint *)((int)param_1 + 0x1c) =
                 *(int *)((int)param_1 + 0x1c) + iStack_7c0 + (uint)CARRY4(uVar1,uStack_7c4);
            FUN_00424d90(*(int **)((int)param_1 + 0x10),aiStack_7b8,0x250,-1,&iStack_7bc);
            *(int *)((int)param_1 + 0x89c) = *(int *)((int)param_1 + 0x89c) + 1;
          }
        }
      }
    }
    uVar1 = FUN_0043cb10(param_1,local_568);
  }
  if (*(int **)((int)param_1 + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x20) + 0xc))();
  }
  return (-1 < (int)uVar1) - 1 & uVar1;
}


