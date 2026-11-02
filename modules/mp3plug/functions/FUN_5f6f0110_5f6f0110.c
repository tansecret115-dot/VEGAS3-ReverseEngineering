/* Module: mp3plug.dll
   Function: FUN_5f6f0110
   Address: 5f6f0110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined ** __cdecl FUN_5f6f0110(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  
  iVar1 = FUN_5f6d9760(0xddc);
  *param_2 = iVar1;
  if (iVar1 == 0) {
    ppuVar2 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75e020,(char *)0x48,(undefined *)0x0
                           ,s_out_of_memory_5f75c330);
    return ppuVar2;
  }
  iVar1 = FUN_5f6ebf90((int)param_3);
  *(int *)(*param_2 + 4) = iVar1;
  if (*(int *)(*param_2 + 4) == 0) {
    ppuVar2 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75e020,(char *)0x4c,(undefined *)0x0
                           ,s_GetCbBlockParam___failed_5f75dd50);
  }
  else {
    iVar1 = FUN_5f6ebfd0((int)param_3);
    *(int *)(*param_2 + 8) = iVar1;
    if (*(int *)(*param_2 + 8) == 0) {
      ppuVar2 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75e020,(char *)0x51,
                             (undefined *)0x0,s_GetPsyBlockParam___failed_5f75dd70);
    }
    else {
      iVar1 = FUN_5f6ec010((int)param_3);
      *(int *)(*param_2 + 0xc) = iVar1;
      if (*(int *)(*param_2 + 0xc) == 0) {
        ppuVar2 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75e020,(char *)0x56,
                               (undefined *)0x0,s_GetAdaptBlockParam___failed_5f75dd90);
      }
      else {
        *(undefined4 *)(*param_2 + 0x10) = *param_3;
        iVar3 = 0;
        *(undefined4 *)(*param_2 + 0xb2c) = 0;
        iVar1 = *param_2;
        if (0 < *(int *)**(undefined4 **)(iVar1 + 0xc)) {
          do {
            *(undefined4 *)(iVar1 + 0xc68 + iVar3 * 4) = 1;
            iVar1 = *param_2;
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)**(undefined4 **)(iVar1 + 0xc));
        }
        ppuVar2 = (undefined **)0x0;
        *(undefined4 *)(iVar1 + 0xcc0) = 0xffffffff;
      }
    }
  }
  if (ppuVar2 != (undefined **)0x0) {
    if (*param_2 != 0) {
      FUN_5f6d97a0(*param_2);
    }
    *param_2 = 0;
  }
  return ppuVar2;
}


