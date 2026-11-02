/* Module: vegas30.exe
   Function: FUN_005dde40
   Address: 005dde40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005dde40(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = FUN_005db110(param_5,0);
  if (-1 < iVar1) {
    if ((param_4 < 0) || ((1 < param_4 && (param_4 != 2)))) {
      return -0x7ff8ffa9;
    }
    iVar1 = riff64_WriteFileID(param_1,DAT_0062a4e0,DAT_0062a4e4,DAT_0062a4e8,DAT_0062a4ec,0,0);
    if (-1 < iVar1) {
      iVar1 = FUN_005dac40(param_1,param_2,DAT_0062a510,DAT_0062a514,DAT_0062a518,DAT_0062a51c,
                           param_3);
      if (-1 < iVar1) {
        iVar1 = FUN_005db110(param_5,7);
        if (-1 < iVar1) {
          iVar1 = FUN_005db4d0(param_1,param_2,*(undefined4 *)(param_3 + 0xc40),DAT_0062a6e0,
                               DAT_0062a6e4,DAT_0062a6e8,DAT_0062a6ec);
          if (-1 < iVar1) {
            iVar1 = FUN_005db110(param_5,0xf);
            if (-1 < iVar1) {
              iVar1 = FUN_005ddcb0(param_1,param_2,param_5,param_3 + 0x1e4);
              if (-1 < iVar1) {
                iVar1 = FUN_005db110(param_5,0x17);
                if (-1 < iVar1) {
                  iVar1 = FUN_005dca80(param_1,param_2,param_3);
                  if (-1 < iVar1) {
                    iVar1 = FUN_005db110(param_5,0x1e);
                    if (-1 < iVar1) {
                      iVar1 = FUN_005dc750(param_1,param_2,param_3);
                      if (-1 < iVar1) {
                        iVar1 = FUN_005db110(param_5,0x26);
                        if (-1 < iVar1) {
                          iVar1 = FUN_005dc820(param_1,param_2,param_3 + 0x1bc);
                          if (-1 < iVar1) {
                            iVar1 = FUN_005db110(param_5,0x2e);
                            if (-1 < iVar1) {
                              uVar3 = DAT_0062a5c0;
                              uVar4 = DAT_0062a5c4;
                              uVar5 = DAT_0062a5c8;
                              uVar6 = DAT_0062a5cc;
                              uVar2 = FUN_005b8970(param_3);
                              iVar1 = FUN_005dc8e0(param_1,param_2,uVar2,uVar3,uVar4,uVar5,uVar6);
                              if (-1 < iVar1) {
                                iVar1 = FUN_005db110(param_5,0x35);
                                if (-1 < iVar1) {
                                  uVar3 = DAT_0062a5d0;
                                  uVar4 = DAT_0062a5d4;
                                  uVar5 = DAT_0062a5d8;
                                  uVar6 = DAT_0062a5dc;
                                  uVar2 = FUN_005b8980(param_3);
                                  iVar1 = FUN_005dc8e0(param_1,param_2,uVar2,uVar3,uVar4,uVar5,uVar6
                                                      );
                                  if (-1 < iVar1) {
                                    iVar1 = FUN_005db110(param_5,0x3d);
                                    if (-1 < iVar1) {
                                      uVar3 = DAT_0062a5e0;
                                      uVar4 = DAT_0062a5e4;
                                      uVar5 = DAT_0062a5e8;
                                      uVar6 = DAT_0062a5ec;
                                      uVar2 = FUN_005b8990(param_3);
                                      iVar1 = FUN_005dc8e0(param_1,param_2,uVar2,uVar3,uVar4,uVar5,
                                                           uVar6);
                                      if (-1 < iVar1) {
                                        iVar1 = FUN_005db110(param_5,0x45);
                                        if (-1 < iVar1) {
                                          uVar3 = DAT_0062a5f0;
                                          uVar4 = DAT_0062a5f4;
                                          uVar5 = DAT_0062a5f8;
                                          uVar6 = DAT_0062a5fc;
                                          uVar2 = FUN_005b89b0(param_3);
                                          iVar1 = FUN_005dc8e0(param_1,param_2,uVar2,uVar3,uVar4,
                                                               uVar5,uVar6);
                                          if (-1 < iVar1) {
                                            iVar1 = FUN_005db110(param_5,0x4c);
                                            if (-1 < iVar1) {
                                              iVar1 = FUN_005e5740(param_1,param_2,param_3);
                                              if (-1 < iVar1) {
                                                iVar1 = FUN_005db110(param_5,0x54);
                                                if (-1 < iVar1) {
                                                  uVar3 = DAT_0062a7f0;
                                                  uVar4 = DAT_0062a7f4;
                                                  uVar5 = DAT_0062a7f8;
                                                  uVar6 = DAT_0062a7fc;
                                                  uVar2 = FUN_005b89a0(param_3);
                                                  iVar1 = FUN_005dc9b0(param_1,param_2,uVar2,uVar3,
                                                                       uVar4,uVar5,uVar6);
                                                  if (-1 < iVar1) {
                                                    iVar1 = FUN_005db110(param_5,0x5c);
                                                    if (-1 < iVar1) {
                                                      iVar1 = riff64_CompleteChunk(param_1,0,0);
                                                      if (-1 < iVar1) {
                                                        iVar1 = FUN_005db110(param_5,100);
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
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}


