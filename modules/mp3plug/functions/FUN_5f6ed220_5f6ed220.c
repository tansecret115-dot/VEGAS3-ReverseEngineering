/* Module: mp3plug.dll
   Function: FUN_5f6ed220
   Address: 5f6ed220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined ** __cdecl FUN_5f6ed220(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined4 uVar5;
  int unaff_EBX;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int unaff_EBP;
  undefined4 *unaff_retaddr;
  undefined4 *local_18;
  
  puVar1 = FUN_5f6d9720(1,0x298);
  *param_1 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    ppuVar4 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75da90,(char *)0x98,(undefined *)0x0
                           ,s_out_of_memory_5f75c330);
    unaff_retaddr = param_1;
  }
  else {
    iVar2 = FUN_5f6ebf90(param_2);
    puVar1[1] = iVar2;
    iVar2 = FUN_5f6ebfd0(param_2);
    puVar1[2] = iVar2;
    iVar2 = FUN_5f6ec010(param_2);
    puVar1[3] = iVar2;
    *(undefined4 *)(puVar1[1] + 8) = 6;
    *(undefined4 *)(puVar1[1] + 0x1d8) = 0;
    FUN_5f6e0300(&DAT_5f75dad0,0x5f75dae0,s_the_short_thresholds__ratios__of_5f75db20,
                 (undefined4 *)(puVar1[1] + 0x1d8));
    puVar1[0x99] = 0;
    FUN_5f6e0300(s_preNoTone_5f75dbc0,0x5f75dbd0,s_to_fill_the_preecho_fifos_a_sepa_5f75dc00,
                 puVar1 + 0x99);
    iVar2 = FUN_5f6ed040(**(int **)puVar1[1],(*(int **)puVar1[1])[3]);
    if (iVar2 == 0) {
      ppuVar4 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75da90,(char *)0xb6,
                             (undefined *)0x0,s_out_of_memory_5f75c330);
      unaff_retaddr = param_1;
    }
    else {
      local_18 = param_1;
      puVar7 = puVar1;
      do {
        iVar2 = **(int **)(puVar1[1] + 4);
        iVar3 = FUN_5f6d9760((*(int **)(puVar1[1] + 4))[3] * 4);
        puVar7[10] = iVar3;
        puVar6 = local_18;
        if (iVar3 == 0) {
LAB_5f6ed75a:
          unaff_retaddr = puVar6;
          ppuVar4 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75da90,(char *)0xbf,
                                 (undefined *)0x0,s_out_of_memory_5f75c330);
          goto LAB_5f6ed48b;
        }
        iVar3 = FUN_5f6d9760(0x5f6ed37f);
        puVar7[0xb] = iVar3;
        puVar6 = local_18;
        if (iVar3 == 0) goto LAB_5f6ed75a;
        iVar3 = FUN_5f6d9760(iVar2 * 4);
        puVar7[0xc] = iVar3;
        puVar6 = local_18;
        if (iVar3 == 0) goto LAB_5f6ed75a;
        iVar3 = FUN_5f6d9760(iVar2 * 4);
        puVar7[0xd] = iVar3;
        puVar6 = local_18;
        if (iVar3 == 0) goto LAB_5f6ed75a;
        iVar3 = FUN_5f6d9760(iVar2 * 4);
        puVar7[0xe] = iVar3;
        puVar6 = local_18;
        if (iVar3 == 0) goto LAB_5f6ed75a;
        local_18 = (undefined4 *)0x42;
        iVar2 = FUN_5f6d9760(iVar2 * 4);
        puVar7[0xf] = iVar2;
        puVar6 = unaff_retaddr;
        if (iVar2 == 0) goto LAB_5f6ed75a;
        puVar7 = puVar7 + 6;
      } while ((int)puVar7 < unaff_EBP);
      ppuVar4 = FUN_5f7054a0(puVar1 + 0x1c,3,**(uint **)puVar1[1]);
      if (ppuVar4 == (undefined **)0x0) {
        ppuVar4 = FUN_5f7054a0(puVar1 + 0x1d,3,**(uint **)(puVar1[1] + 4));
        if (ppuVar4 == (undefined **)0x0) {
          iVar2 = -3;
          do {
            FUN_5f7057c0((uint *)puVar1[0x1c],*(undefined4 **)(*(int *)puVar1[1] + 0x3b0));
            iVar2 = iVar2 + 1;
          } while (iVar2 != 0);
          iVar2 = -3;
          do {
            FUN_5f7057c0((uint *)puVar1[0x1d],*(undefined4 **)(*(int *)(puVar1[1] + 4) + 0x3b0));
            iVar2 = iVar2 + 1;
          } while (iVar2 != 0);
          iVar2 = FUN_5f6d9760(**(int **)puVar1[1] * 4);
          puVar1[0x22] = iVar2;
          if (iVar2 == 0) {
            ppuVar4 = FUN_5f6d94e0(0x5f6ed74f,(char *)0xea,(undefined *)0x0,s_out_of_memory_5f75c330
                                  );
          }
          else {
            puVar7 = puVar1 + 3;
            puVar6 = puVar1;
            while( true ) {
              iVar2 = FUN_5f6d9760(**(int **)(puVar1[1] + 4) * 4);
              puVar6[0x23] = iVar2;
              if (iVar2 == 0) break;
              puVar6 = puVar6 + 1;
              if (0x5f6ed552 < (int)puVar6) {
                uVar5 = FUN_5f6d9760(0x5f6ed5d3);
                puVar1[0x9a] = uVar5;
                puVar6 = puVar1;
                do {
                  uVar5 = FUN_5f6d9760(0x34);
                  puVar6[0x9b] = uVar5;
                  puVar6 = puVar6 + 1;
                } while ((int)puVar6 < (int)(puVar1 + 3));
                uVar5 = FUN_5f6d9760(0x5f6ed642);
                *(undefined4 *)(unaff_EBX + 0x278) = uVar5;
                iVar2 = unaff_EBX + 0xc;
                do {
                  uVar5 = FUN_5f6d9760(0x34);
                  *(undefined4 *)(unaff_EBX + 0x27c) = uVar5;
                  unaff_EBX = unaff_EBX + 4;
                } while (unaff_EBX < iVar2);
                uVar5 = FUN_5f6d9760(0x5f6ed6b2);
                puVar1[0xa5] = uVar5;
                do {
                  uVar5 = FUN_5f6d9760(0x34);
                  puVar7[0xa3] = uVar5;
                  puVar7 = puVar7 + 1;
                } while ((int)puVar7 < (int)(puVar1 + 6));
                return (undefined **)0x0;
              }
            }
            unaff_retaddr = (undefined4 *)0xe7;
            ppuVar4 = FUN_5f6d94e0(0x5f6ed724,(char *)0xf2,(undefined *)0x0,s_out_of_memory_5f75c330
                                  );
          }
        }
        else {
          ppuVar4 = (undefined **)
                    FUN_5f6d8eb0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75da90,0xd6,0,(int)ppuVar4);
        }
      }
      else {
        ppuVar4 = (undefined **)
                  FUN_5f6d8eb0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75da90,0xcc,0,(int)ppuVar4);
      }
    }
  }
LAB_5f6ed48b:
  FUN_5f6ed7f4();
  *unaff_retaddr = 0;
  return ppuVar4;
}


