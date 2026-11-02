/* Module: mp3plug.dll
   Function: FUN_5f6ee710
   Address: 5f6ee710
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined ** __cdecl FUN_5f6ee710(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iStack_28;
  int iStack_24;
  char *pcStack_20;
  int *piStack_1c;
  int *piStack_18;
  undefined **ppuStack_14;
  
  puVar2 = FUN_5f6d9720(1,0x114);
  *param_1 = (int)puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    ppuVar4 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75dce0,(char *)0x98,(undefined *)0x0
                           ,s_out_of_memory_5f75c330);
    return ppuVar4;
  }
  puVar2[2] = 0;
  *(undefined4 *)(*param_1 + 0x1c) = 0;
  FUN_5f6e0300(s_starving_5f75dd20,0x5f75dd30,"",(undefined4 *)(*param_1 + 0x1c));
  *(undefined4 *)*param_1 = *param_2;
  iVar3 = FUN_5f6ebf90((int)param_2);
  *(int *)(*param_1 + 0x10) = iVar3;
  if (*(int *)(*param_1 + 0x10) == 0) {
    ppuStack_14 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75dce0,(char *)0xa2,
                               (undefined *)0x0,s_GetCbBlockParam___failed_5f75dd50);
  }
  else {
    iVar3 = FUN_5f6ebfd0((int)param_2);
    *(int *)(*param_1 + 0x14) = iVar3;
    if (*(int *)(*param_1 + 0x14) == 0) {
      ppuStack_14 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75dce0,(char *)0xa7,
                                 (undefined *)0x0,s_GetPsyBlockParam___failed_5f75dd70);
    }
    else {
      iVar3 = FUN_5f6ec010((int)param_2);
      *(int *)(*param_1 + 0x18) = iVar3;
      iVar3 = *param_1;
      if (*(int *)(iVar3 + 0x18) == 0) {
        ppuStack_14 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75dce0,(char *)0xac,
                                   (undefined *)0x0,s_GetAdaptBlockParam___failed_5f75dd90);
      }
      else {
        ppuVar4 = FUN_5f6ee5a0(*(int *)(**(int **)(iVar3 + 0x14) + 8),
                               *(int *)**(undefined4 **)(iVar3 + 0x10));
        if (ppuVar4 == (undefined **)0x0) {
          iVar3 = -0x48;
          do {
            iVar7 = *param_1;
            iVar1 = **(int **)(*(int *)(iVar7 + 0x10) + 4);
            uVar5 = FUN_5f6d9760(*(int *)(*(int *)(*(int *)(iVar7 + 0x14) + 4) + 8) * 8);
            *(undefined4 *)(iVar7 + 0x80 + iVar3) = uVar5;
            uVar5 = FUN_5f6d9760(iVar1 * 4);
            *(undefined4 *)(iVar7 + 0x84 + iVar3) = uVar5;
            uVar5 = FUN_5f6d9760(iVar1 * 4);
            *(undefined4 *)(iVar7 + 0x88 + iVar3) = uVar5;
            iStack_28 = 0x43;
            uVar5 = FUN_5f6d9760(iVar1 * 4);
            *(undefined4 *)(iVar7 + 0x8c + iVar3) = uVar5;
            if ((((*(int *)(iVar7 + 0x80 + iVar3) == 0) || (*(int *)(iVar7 + 0x84 + iVar3) == 0)) ||
                (*(int *)(iVar7 + 0x88 + iVar3) == 0)) || (*(int *)(iVar7 + 0x8c + iVar3) == 0)) {
              iStack_28 = 0x47;
              pcStack_20 = s_out_of_memory_5f75c330;
              iStack_24 = 0;
              ppuVar4 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75dce0,(char *)0x47,
                                     (undefined *)0x0,s_out_of_memory_5f75c330);
            }
            else {
              ppuVar4 = (undefined **)0x0;
            }
            if (ppuVar4 != (undefined **)0x0) {
              ppuStack_14 = (undefined **)
                            FUN_5f6d8eb0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75dce0,0xc1,0,
                                         (int)ppuVar4);
              goto LAB_5f6ee80f;
            }
            iVar3 = iVar3 + 0x18;
          } while (iVar3 != 0);
          param_1 = (int *)*param_1;
          ppuStack_14 = (undefined **)0x0;
          piStack_1c = param_1 + 2;
          piStack_18 = param_1;
          do {
            iVar3 = FUN_5f6d9760(0x58);
            piStack_1c[0x20] = iVar3;
            pcVar6 = pcStack_20 + iStack_24;
            do {
              uVar5 = FUN_5f6d9760(0x34);
              *(undefined4 *)(pcVar6 + 0x88) = uVar5;
              pcVar6 = pcVar6 + 4;
            } while ((int)pcVar6 < (int)(pcStack_20 + iStack_24 + 0xc));
            piStack_1c = piStack_1c + 3;
            piStack_18 = piStack_18 + 1;
          } while ((int)piStack_18 < iStack_24);
          iStack_24 = *param_1;
          iVar3 = iStack_24 + 8;
          pcStack_20 = (char *)0x0;
          do {
            uVar5 = FUN_5f6d9760(0x58);
            *(undefined4 *)(iStack_28 + 0xa0) = uVar5;
            iVar7 = (int)pcStack_20 + iStack_24;
            do {
              uVar5 = FUN_5f6d9760(0x34);
              *(undefined4 *)(iVar7 + 0xa8) = uVar5;
              iVar7 = iVar7 + 4;
            } while (iVar7 < (int)pcStack_20 + 0xc + iStack_24);
            pcStack_20 = (char *)((int)pcStack_20 + 0xc);
            iStack_24 = iStack_24 + 4;
          } while (iStack_24 < iVar3);
          iStack_24 = *param_1;
          iVar3 = iStack_24 + 8;
          pcStack_20 = (char *)0x0;
          do {
            uVar5 = FUN_5f6d9760(0x58);
            *(undefined4 *)(iStack_28 + 0xc0) = uVar5;
            iVar7 = (int)pcStack_20 + iStack_24;
            do {
              uVar5 = FUN_5f6d9760(0x34);
              *(undefined4 *)(iVar7 + 200) = uVar5;
              iVar7 = iVar7 + 4;
            } while (iVar7 < (int)pcStack_20 + 0xc + iStack_24);
            pcStack_20 = (char *)((int)pcStack_20 + 0xc);
            iStack_24 = iStack_24 + 4;
          } while (iStack_24 < iVar3);
          iStack_24 = *param_1;
          iVar3 = iStack_24 + 8;
          pcStack_20 = (char *)0x0;
          do {
            uVar5 = FUN_5f6d9760(0x58);
            *(undefined4 *)(iStack_28 + 0xe0) = uVar5;
            iVar7 = (int)pcStack_20 + iStack_24;
            do {
              uVar5 = FUN_5f6d9760(0x34);
              *(undefined4 *)(iVar7 + 0xe8) = uVar5;
              iVar7 = iVar7 + 4;
            } while (iVar7 < (int)pcStack_20 + 0xc + iStack_24);
            pcStack_20 = (char *)((int)pcStack_20 + 0xc);
            iStack_24 = iStack_24 + 4;
          } while (iStack_24 < iVar3);
        }
        else {
          ppuStack_14 = (undefined **)
                        FUN_5f6d8eb0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75dce0,0xb8,0,(int)ppuVar4
                                    );
        }
      }
    }
  }
LAB_5f6ee80f:
  if (ppuStack_14 != (undefined **)0x0) {
    FUN_5f6eecf4();
    *param_1 = 0;
  }
  return ppuStack_14;
}


