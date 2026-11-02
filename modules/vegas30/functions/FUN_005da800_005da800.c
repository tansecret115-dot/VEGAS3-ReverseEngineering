/* Module: vegas30.exe
   Function: FUN_005da800
   Address: 005da800
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005da800(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = riff64_PrepareChunk(param_1,param_3,param_4,param_5,param_6,&local_8);
  if (iVar1 < 0) {
    return iVar1;
  }
  iVar1 = 4;
  bVar4 = true;
  piVar2 = &param_3;
  piVar3 = &DAT_0062a5a0;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *piVar2 == *piVar3;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    iVar1 = FUN_005bd9a0(param_2,0);
  }
  else {
    iVar1 = 4;
    bVar4 = true;
    piVar2 = &param_3;
    piVar3 = &DAT_0062a590;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *piVar2 == *piVar3;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (bVar4);
    if (bVar4) {
      iVar1 = FUN_005bd7b0(param_2,0);
    }
    else {
      iVar1 = 4;
      bVar4 = true;
      piVar2 = &param_3;
      piVar3 = &DAT_0062a690;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = *piVar2 == *piVar3;
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (bVar4);
      if (bVar4) {
        iVar1 = FUN_005bddf0(param_2,0);
      }
      else {
        iVar1 = 4;
        bVar4 = true;
        piVar2 = &param_3;
        piVar3 = &DAT_0062a6a0;
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar4 = *piVar2 == *piVar3;
          piVar2 = piVar2 + 1;
          piVar3 = piVar3 + 1;
        } while (bVar4);
        if (bVar4) {
          iVar1 = FUN_005bdf00(param_2,0);
        }
        else {
          iVar1 = 4;
          bVar4 = true;
          piVar2 = &param_3;
          piVar3 = &DAT_0062a720;
          do {
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            bVar4 = *piVar2 == *piVar3;
            piVar2 = piVar2 + 1;
            piVar3 = piVar3 + 1;
          } while (bVar4);
          if (bVar4) {
            iVar1 = FUN_00522af0(param_2,0);
          }
          else {
            iVar1 = 4;
            bVar4 = true;
            piVar2 = &param_3;
            piVar3 = &DAT_0062a6f0;
            do {
              if (iVar1 == 0) break;
              iVar1 = iVar1 + -1;
              bVar4 = *piVar2 == *piVar3;
              piVar2 = piVar2 + 1;
              piVar3 = piVar3 + 1;
            } while (bVar4);
            if (bVar4) {
              iVar1 = tSFVIDEOFILTERCACHE::Persist((IStream *)*param_7,param_2);
            }
            else {
              iVar1 = 4;
              bVar4 = true;
              piVar2 = &param_3;
              piVar3 = &DAT_0062a7c0;
              do {
                if (iVar1 == 0) break;
                iVar1 = iVar1 + -1;
                bVar4 = *piVar2 == *piVar3;
                piVar2 = piVar2 + 1;
                piVar3 = piVar3 + 1;
              } while (bVar4);
              if (bVar4) {
                iVar1 = FUN_005bd2c0(param_2,0);
              }
              else {
                iVar1 = 4;
                bVar4 = true;
                piVar2 = &param_3;
                piVar3 = &DAT_0062a7a0;
                do {
                  if (iVar1 == 0) break;
                  iVar1 = iVar1 + -1;
                  bVar4 = *piVar2 == *piVar3;
                  piVar2 = piVar2 + 1;
                  piVar3 = piVar3 + 1;
                } while (bVar4);
                if (bVar4) {
                  iVar1 = FUN_005bd0a0(param_2,0,param_7[1]);
                }
                else {
                  iVar1 = 4;
                  bVar4 = true;
                  piVar2 = &param_3;
                  piVar3 = &DAT_0062a780;
                  do {
                    if (iVar1 == 0) break;
                    iVar1 = iVar1 + -1;
                    bVar4 = *piVar2 == *piVar3;
                    piVar2 = piVar2 + 1;
                    piVar3 = piVar3 + 1;
                  } while (bVar4);
                  if (bVar4) {
                    iVar1 = FUN_005bd210(param_2,0);
                  }
                  else {
                    iVar1 = 4;
                    bVar4 = true;
                    piVar2 = &param_3;
                    piVar3 = &DAT_0062a740;
                    do {
                      if (iVar1 == 0) break;
                      iVar1 = iVar1 + -1;
                      bVar4 = *piVar2 == *piVar3;
                      piVar2 = piVar2 + 1;
                      piVar3 = piVar3 + 1;
                    } while (bVar4);
                    if (bVar4) {
                      iVar1 = FUN_005bdc20(param_2,0);
                    }
                    else {
                      iVar1 = 4;
                      bVar4 = true;
                      piVar2 = &param_3;
                      piVar3 = &DAT_0062a760;
                      do {
                        if (iVar1 == 0) break;
                        iVar1 = iVar1 + -1;
                        bVar4 = *piVar2 == *piVar3;
                        piVar2 = piVar2 + 1;
                        piVar3 = piVar3 + 1;
                      } while (bVar4);
                      if (bVar4) {
                        iVar1 = FUN_005bdb20(param_2,0);
                      }
                      else {
                        iVar1 = 4;
                        bVar4 = true;
                        piVar2 = &param_3;
                        piVar3 = &DAT_0062a560;
                        do {
                          if (iVar1 == 0) break;
                          iVar1 = iVar1 + -1;
                          bVar4 = *piVar2 == *piVar3;
                          piVar2 = piVar2 + 1;
                          piVar3 = piVar3 + 1;
                        } while (bVar4);
                        if (bVar4) {
                          iVar1 = FUN_005bcf00(param_2,param_7[1],0);
                        }
                        else {
                          iVar1 = 4;
                          bVar4 = true;
                          piVar2 = &param_3;
                          piVar3 = &DAT_0062a620;
                          do {
                            if (iVar1 == 0) break;
                            iVar1 = iVar1 + -1;
                            bVar4 = *piVar2 == *piVar3;
                            piVar2 = piVar2 + 1;
                            piVar3 = piVar3 + 1;
                          } while (bVar4);
                          if (bVar4) {
                            iVar1 = _summarylisttag::Persist((IStream *)*param_7,param_2);
                          }
                          else {
                            iVar1 = 4;
                            bVar4 = true;
                            piVar2 = &param_3;
                            piVar3 = &DAT_0062a600;
                            do {
                              if (iVar1 == 0) break;
                              iVar1 = iVar1 + -1;
                              bVar4 = *piVar2 == *piVar3;
                              piVar2 = piVar2 + 1;
                              piVar3 = piVar3 + 1;
                            } while (bVar4);
                            if (bVar4) {
                              iVar1 = _sfmarker::Persist((IStream *)*param_7,param_2);
                            }
                            else {
                              iVar1 = 4;
                              bVar4 = true;
                              piVar2 = &param_3;
                              piVar3 = &DAT_0062a800;
                              do {
                                if (iVar1 == 0) break;
                                iVar1 = iVar1 + -1;
                                bVar4 = *piVar2 == *piVar3;
                                piVar2 = piVar2 + 1;
                                piVar3 = piVar3 + 1;
                              } while (bVar4);
                              if (bVar4) {
                                iVar1 = FUN_005c27c0(param_2,0);
                              }
                              else {
                                iVar1 = 4;
                                bVar4 = true;
                                piVar2 = &param_3;
                                piVar3 = &DAT_0062a7e0;
                                do {
                                  if (iVar1 == 0) break;
                                  iVar1 = iVar1 + -1;
                                  bVar4 = *piVar2 == *piVar3;
                                  piVar2 = piVar2 + 1;
                                  piVar3 = piVar3 + 1;
                                } while (bVar4);
                                if (bVar4) {
                                  iVar1 = FUN_005c2610(param_2,0);
                                }
                                else {
                                  iVar1 = 4;
                                  bVar4 = true;
                                  piVar2 = &param_3;
                                  piVar3 = &DAT_0062a530;
                                  do {
                                    if (iVar1 == 0) break;
                                    iVar1 = iVar1 + -1;
                                    bVar4 = *piVar2 == *piVar3;
                                    piVar2 = piVar2 + 1;
                                    piVar3 = piVar3 + 1;
                                  } while (bVar4);
                                  if (bVar4) {
                                    return -0x7fff0001;
                                  }
                                  iVar1 = 4;
                                  bVar4 = true;
                                  piVar2 = &param_3;
                                  piVar3 = &DAT_0062a660;
                                  do {
                                    if (iVar1 == 0) break;
                                    iVar1 = iVar1 + -1;
                                    bVar4 = *piVar2 == *piVar3;
                                    piVar2 = piVar2 + 1;
                                    piVar3 = piVar3 + 1;
                                  } while (bVar4);
                                  if (bVar4) {
                                    iVar1 = _tmixerprops::Persist((IStream *)*param_7,param_2);
                                  }
                                  else {
                                    iVar1 = 4;
                                    bVar4 = true;
                                    piVar2 = &param_3;
                                    piVar3 = &DAT_0062a510;
                                    do {
                                      if (iVar1 == 0) break;
                                      iVar1 = iVar1 + -1;
                                      bVar4 = *piVar2 == *piVar3;
                                      piVar2 = piVar2 + 1;
                                      piVar3 = piVar3 + 1;
                                    } while (bVar4);
                                    if (bVar4) {
                                      iVar1 = FUN_005bbaf0(param_2,0);
                                    }
                                    else {
                                      iVar1 = 4;
                                      bVar4 = true;
                                      piVar2 = &param_3;
                                      piVar3 = &DAT_0062a640;
                                      do {
                                        if (iVar1 == 0) break;
                                        iVar1 = iVar1 + -1;
                                        bVar4 = *piVar2 == *piVar3;
                                        piVar2 = piVar2 + 1;
                                        piVar3 = piVar3 + 1;
                                      } while (bVar4);
                                      if (bVar4) {
                                        iVar1 = FUN_005e7320(param_2,0,0);
                                      }
                                      else {
                                        iVar1 = 4;
                                        bVar4 = true;
                                        piVar2 = &param_3;
                                        piVar3 = &DAT_0062a650;
                                        do {
                                          if (iVar1 == 0) break;
                                          iVar1 = iVar1 + -1;
                                          bVar4 = *piVar2 == *piVar3;
                                          piVar2 = piVar2 + 1;
                                          piVar3 = piVar3 + 1;
                                        } while (bVar4);
                                        if (!bVar4) {
                                          return -0x7fff0001;
                                        }
                                        iVar1 = FUN_005e8430(param_2,0,0);
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
  if (-1 < iVar1) {
    iVar1 = riff64_CompleteChunk(param_1,local_8,local_4);
    return iVar1;
  }
  return iVar1;
}


