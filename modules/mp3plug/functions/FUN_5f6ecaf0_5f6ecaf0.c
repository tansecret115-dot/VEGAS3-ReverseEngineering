/* Module: mp3plug.dll
   Function: FUN_5f6ecaf0
   Address: 5f6ecaf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined ** __cdecl FUN_5f6ecaf0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar1 = FUN_5f6d9720(1,0x24);
  *param_1 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    ppuVar3 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75d9e0,(char *)0x3e,(undefined *)0x0
                           ,s_out_of_memory_5f75c330);
    return ppuVar3;
  }
  piVar2 = FUN_5f705180(0x6c0);
  *puVar1 = piVar2;
  if (piVar2 == (int *)0x0) {
    ppuVar3 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75d9e0,(char *)0x42,(undefined *)0x0
                           ,s_CreateFloatModuleBuffer___failed_5f75da20);
  }
  else {
    piVar2 = FUN_5f705180(0x540);
    puVar1[1] = piVar2;
    if (piVar2 == (int *)0x0) {
      ppuVar3 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75d9e0,(char *)0x49,
                             (undefined *)0x0,s_CreateFloatModuleBuffer___failed_5f75da20);
    }
    else {
      ppuVar3 = FUN_5f7054a0(puVar1 + 2,3,0x400);
      if (ppuVar3 == (undefined **)0x0) {
        ppuVar3 = FUN_5f7054a0(puVar1 + 3,9,0x100);
        if (ppuVar3 == (undefined **)0x0) {
          ppuVar3 = FUN_5f705930(puVar1 + 4,0,0x400);
          if (ppuVar3 == (undefined **)0x0) {
            puVar5 = (undefined4 *)0x100;
            ppuVar3 = FUN_5f705930(puVar1 + 5,2,0x100);
            if (ppuVar3 == (undefined **)0x0) {
              ppuVar3 = FUN_5f705aa0(puVar1 + 6,param_2,puVar5);
              if (ppuVar3 == (undefined **)0x0) {
                puVar5 = FUN_5f706390();
                puVar1[7] = puVar5;
                if (puVar5 != (undefined4 *)0x0) {
                  FUN_5f7052f0((uint *)*puVar1,0x6c0);
                  FUN_5f7052f0((uint *)puVar1[1],0x540);
                  iVar4 = -3;
                  do {
                    FUN_5f7058a0((uint *)puVar1[2]);
                    iVar4 = iVar4 + 1;
                  } while (iVar4 != 0);
                  iVar4 = -9;
                  do {
                    FUN_5f7058a0((uint *)puVar1[3]);
                    iVar4 = iVar4 + 1;
                  } while (iVar4 != 0);
                  puVar1[8] = 0;
                  return (undefined **)0x0;
                }
                ppuVar3 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75d9e0,(char *)0x6e,
                                       (undefined *)0x0,s_CreatePolyPhaseAnalyseChannel___f_5f75da50
                                      );
              }
              else {
                ppuVar3 = (undefined **)
                          FUN_5f6d8eb0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75d9e0,0x68,0,
                                       (int)ppuVar3);
              }
            }
            else {
              ppuVar3 = (undefined **)
                        FUN_5f6d8eb0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75d9e0,0x62,0,(int)ppuVar3
                                    );
            }
          }
          else {
            ppuVar3 = (undefined **)
                      FUN_5f6d8eb0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75d9e0,0x5d,0,(int)ppuVar3);
          }
        }
        else {
          ppuVar3 = (undefined **)
                    FUN_5f6d8eb0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75d9e0,0x57,0,(int)ppuVar3);
        }
      }
      else {
        ppuVar3 = (undefined **)
                  FUN_5f6d8eb0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75d9e0,0x50,0,(int)ppuVar3);
      }
    }
  }
  FUN_5f6ecde4();
  *param_1 = 0;
  return ppuVar3;
}


