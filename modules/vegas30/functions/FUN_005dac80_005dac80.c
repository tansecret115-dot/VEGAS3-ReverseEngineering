/* Module: vegas30.exe
   Function: FUN_005dac80
   Address: 005dac80
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_005dac80(undefined4 param_1,IStream *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined4 *in_stack_00000020;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28 [40];
  
  riff64_SaveLocation(param_1,&local_30);
  FUN_005da1c0(1,1,local_30,local_2c,*(undefined4 *)param_3,*(undefined4 *)((int)param_3 + 4));
  iVar2 = 4;
  bVar5 = true;
  piVar3 = (int *)&stack0x00000010;
  piVar4 = &DAT_0062a720;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *piVar3 == *piVar4;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    lVar1 = FUN_00522d40(param_2,0,*in_stack_00000020,in_stack_00000020[1]);
  }
  else {
    iVar2 = 4;
    bVar5 = true;
    piVar3 = (int *)&stack0x00000010;
    piVar4 = &DAT_0062a6f0;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *piVar3 == *piVar4;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      lVar1 = tSFVIDEOFILTERCACHE::Create
                        (param_2,0,(tSFLIST **)*in_stack_00000020,
                         (tSFGUIDTRANSLATIONTABLE *)&DAT_00646c70,DAT_00646c90,
                         (_GUID *)&stack0x00000010);
      if (lVar1 < 0) {
        _SfGuidToString_12(&stack0x00000010,local_28,0x28);
        SfErrorHandler_DetailsAddString(0x8004e084,local_28);
        lVar1 = -0x7ffb1f7c;
      }
    }
    else {
      iVar2 = 4;
      bVar5 = true;
      piVar3 = (int *)&stack0x00000010;
      piVar4 = &DAT_0062a7c0;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *piVar3 == *piVar4;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (bVar5);
      if (bVar5) {
        lVar1 = FUN_005c0a90(param_2,0,*in_stack_00000020,in_stack_00000020[1]);
      }
      else {
        iVar2 = 4;
        bVar5 = true;
        piVar3 = (int *)&stack0x00000010;
        piVar4 = &DAT_0062a780;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar5 = *piVar3 == *piVar4;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
        } while (bVar5);
        if (bVar5) {
          lVar1 = FUN_005c09b0(param_2,0,*in_stack_00000020,in_stack_00000020[1],0x104,0);
        }
        else {
          iVar2 = 4;
          bVar5 = true;
          piVar3 = (int *)&stack0x00000010;
          piVar4 = &DAT_0062a740;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar5 = *piVar3 == *piVar4;
            piVar3 = piVar3 + 1;
            piVar4 = piVar4 + 1;
          } while (bVar5);
          if (bVar5) {
            lVar1 = FUN_005c1f50(param_2,0,*in_stack_00000020,in_stack_00000020[1]);
          }
          else {
            iVar2 = 4;
            bVar5 = true;
            piVar3 = (int *)&stack0x00000010;
            piVar4 = &DAT_0062a760;
            do {
              if (iVar2 == 0) break;
              iVar2 = iVar2 + -1;
              bVar5 = *piVar3 == *piVar4;
              piVar3 = piVar3 + 1;
              piVar4 = piVar4 + 1;
            } while (bVar5);
            if (bVar5) {
              lVar1 = FUN_005c1ea0(param_2,0,*in_stack_00000020);
            }
            else {
              iVar2 = 4;
              bVar5 = true;
              piVar3 = (int *)&stack0x00000010;
              piVar4 = &DAT_0062a690;
              do {
                if (iVar2 == 0) break;
                iVar2 = iVar2 + -1;
                bVar5 = *piVar3 == *piVar4;
                piVar3 = piVar3 + 1;
                piVar4 = piVar4 + 1;
              } while (bVar5);
              if (bVar5) {
                lVar1 = FUN_005c22f0(param_2,0,*in_stack_00000020,in_stack_00000020[1],
                                     in_stack_00000020[2]);
              }
              else {
                iVar2 = 4;
                bVar5 = true;
                piVar3 = (int *)&stack0x00000010;
                piVar4 = &DAT_0062a6a0;
                do {
                  if (iVar2 == 0) break;
                  iVar2 = iVar2 + -1;
                  bVar5 = *piVar3 == *piVar4;
                  piVar3 = piVar3 + 1;
                  piVar4 = piVar4 + 1;
                } while (bVar5);
                if (bVar5) {
                  lVar1 = FUN_005c24a0(param_2,0,*in_stack_00000020,in_stack_00000020[1]);
                }
                else {
                  iVar2 = 4;
                  bVar5 = true;
                  piVar3 = (int *)&stack0x00000010;
                  piVar4 = &DAT_0062a7e0;
                  do {
                    if (iVar2 == 0) break;
                    iVar2 = iVar2 + -1;
                    bVar5 = *piVar3 == *piVar4;
                    piVar3 = piVar3 + 1;
                    piVar4 = piVar4 + 1;
                  } while (bVar5);
                  if (bVar5) {
                    lVar1 = FUN_005c26b0(param_2,0,*in_stack_00000020,in_stack_00000020[1]);
                  }
                  else {
                    iVar2 = 4;
                    bVar5 = true;
                    piVar3 = (int *)&stack0x00000010;
                    piVar4 = &DAT_0062a590;
                    do {
                      if (iVar2 == 0) break;
                      iVar2 = iVar2 + -1;
                      bVar5 = *piVar3 == *piVar4;
                      piVar3 = piVar3 + 1;
                      piVar4 = piVar4 + 1;
                    } while (bVar5);
                    if (bVar5) {
                      lVar1 = FUN_005c0e90(param_2,0,*in_stack_00000020,in_stack_00000020[1],
                                           0xffffffff,in_stack_00000020[2],in_stack_00000020[3]);
                    }
                    else {
                      iVar2 = 4;
                      bVar5 = true;
                      piVar3 = (int *)&stack0x00000010;
                      piVar4 = &DAT_0062a5a0;
                      do {
                        if (iVar2 == 0) break;
                        iVar2 = iVar2 + -1;
                        bVar5 = *piVar3 == *piVar4;
                        piVar3 = piVar3 + 1;
                        piVar4 = piVar4 + 1;
                      } while (bVar5);
                      if (bVar5) {
                        lVar1 = FUN_005c1e50(param_2,0,*in_stack_00000020,in_stack_00000020[1],0,
                                             in_stack_00000020[2]);
                      }
                      else {
                        iVar2 = 4;
                        bVar5 = true;
                        piVar3 = (int *)&stack0x00000010;
                        piVar4 = &DAT_0062a560;
                        do {
                          if (iVar2 == 0) break;
                          iVar2 = iVar2 + -1;
                          bVar5 = *piVar3 == *piVar4;
                          piVar3 = piVar3 + 1;
                          piVar4 = piVar4 + 1;
                        } while (bVar5);
                        if (bVar5) {
                          lVar1 = FUN_005be080(param_2,0,*in_stack_00000020,in_stack_00000020[1],
                                               0xffffffff,0);
                        }
                        else {
                          iVar2 = 4;
                          bVar5 = true;
                          piVar3 = (int *)&stack0x00000010;
                          piVar4 = &DAT_0062a620;
                          do {
                            if (iVar2 == 0) break;
                            iVar2 = iVar2 + -1;
                            bVar5 = *piVar3 == *piVar4;
                            piVar3 = piVar3 + 1;
                            piVar4 = piVar4 + 1;
                          } while (bVar5);
                          if (bVar5) {
                            lVar1 = _summarylisttag::Create
                                              (param_2,0,(_summarylisttag *)*in_stack_00000020);
                          }
                          else {
                            iVar2 = 4;
                            bVar5 = true;
                            piVar3 = (int *)&stack0x00000010;
                            piVar4 = &DAT_0062a600;
                            do {
                              if (iVar2 == 0) break;
                              iVar2 = iVar2 + -1;
                              bVar5 = *piVar3 == *piVar4;
                              piVar3 = piVar3 + 1;
                              piVar4 = piVar4 + 1;
                            } while (bVar5);
                            if (bVar5) {
                              lVar1 = _sfmarker::Create(param_2,0,(tSFLIST *)*in_stack_00000020,-1);
                            }
                            else {
                              iVar2 = 4;
                              bVar5 = true;
                              piVar3 = (int *)&stack0x00000010;
                              piVar4 = &DAT_0062a800;
                              do {
                                if (iVar2 == 0) break;
                                iVar2 = iVar2 + -1;
                                bVar5 = *piVar3 == *piVar4;
                                piVar3 = piVar3 + 1;
                                piVar4 = piVar4 + 1;
                              } while (bVar5);
                              if (bVar5) {
                                lVar1 = FUN_005c2880(param_2,0,*in_stack_00000020,0xffffffff,1);
                              }
                              else {
                                iVar2 = 4;
                                bVar5 = true;
                                piVar3 = (int *)&stack0x00000010;
                                piVar4 = &DAT_0062a510;
                                do {
                                  if (iVar2 == 0) break;
                                  iVar2 = iVar2 + -1;
                                  bVar5 = *piVar3 == *piVar4;
                                  piVar3 = piVar3 + 1;
                                  piVar4 = piVar4 + 1;
                                } while (bVar5);
                                if (bVar5) {
                                  lVar1 = FUN_005bbed0(param_2,0,*in_stack_00000020,
                                                       in_stack_00000020[1]);
                                }
                                else {
                                  iVar2 = 4;
                                  bVar5 = true;
                                  piVar3 = (int *)&stack0x00000010;
                                  piVar4 = &DAT_0062a7a0;
                                  do {
                                    if (iVar2 == 0) break;
                                    iVar2 = iVar2 + -1;
                                    bVar5 = *piVar3 == *piVar4;
                                    piVar3 = piVar3 + 1;
                                    piVar4 = piVar4 + 1;
                                  } while (bVar5);
                                  if (bVar5) {
                                    lVar1 = FUN_005c0460(param_2,0,*in_stack_00000020);
                                  }
                                  else {
                                    iVar2 = 4;
                                    bVar5 = true;
                                    piVar3 = (int *)&stack0x00000010;
                                    piVar4 = &DAT_0062a640;
                                    do {
                                      if (iVar2 == 0) break;
                                      iVar2 = iVar2 + -1;
                                      bVar5 = *piVar3 == *piVar4;
                                      piVar3 = piVar3 + 1;
                                      piVar4 = piVar4 + 1;
                                    } while (bVar5);
                                    if (bVar5) {
                                      lVar1 = FUN_005e79b0(param_2,0,*in_stack_00000020);
                                    }
                                    else {
                                      iVar2 = 4;
                                      bVar5 = true;
                                      piVar3 = (int *)&stack0x00000010;
                                      piVar4 = &DAT_0062a650;
                                      do {
                                        if (iVar2 == 0) break;
                                        iVar2 = iVar2 + -1;
                                        bVar5 = *piVar3 == *piVar4;
                                        piVar3 = piVar3 + 1;
                                        piVar4 = piVar4 + 1;
                                      } while (bVar5);
                                      if (bVar5) {
                                        lVar1 = FUN_005e8be0(param_2,0,*in_stack_00000020);
                                      }
                                      else {
                                        lVar1 = -0x7fff0001;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_005da1c0(0,0,0,0,0,0);
  riff64_RestoreLocation(param_1,local_30,local_2c);
  uVar6 = riff64_SkipChunk(param_1,*(undefined4 *)param_3,*(undefined4 *)((int)param_3 + 4));
  *param_3 = uVar6;
  return lVar1;
}


