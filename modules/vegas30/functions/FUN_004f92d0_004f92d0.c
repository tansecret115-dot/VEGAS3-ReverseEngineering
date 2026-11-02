/* Module: vegas30.exe
   Function: FUN_004f92d0
   Address: 004f92d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004f92d0(void)

{
  int iVar1;
  int *piVar2;
  int *unaff_ESI;
  undefined4 uVar3;
  int *unaff_EDI;
  int ***pppiVar4;
  int *piStack_1d0;
  IEnumDriverModel *pIStack_1cc;
  int *piStack_1c8;
  int **ppiStack_1c4;
  int *piStack_1c0;
  int **ppiStack_1bc;
  int ***pppiStack_1b8;
  int *piStack_1b4;
  int *piStack_1b0;
  int **ppiStack_1ac;
  int *piStack_1a8;
  int *piStack_1a4;
  int *piStack_1a0;
  undefined4 uStack_19c;
  int *piStack_198;
  IEnumDriverModel *pIStack_194;
  int *piStack_190;
  int **ppiStack_18c;
  int *piStack_174;
  int *local_16c [2];
  IEnumDriverModel *local_164;
  undefined4 local_160;
  int local_15c;
  int local_158 [2];
  undefined1 auStack_150 [336];
  
  piStack_190 = local_158;
  ppiStack_18c = DAT_00647200;
  uVar3 = 0;
  local_160 = 0;
  local_15c = 0;
  local_158[0] = 0;
  local_16c[0] = (int *)0x0;
  local_164 = (IEnumDriverModel *)0x0;
  pIStack_194 = (IEnumDriverModel *)0x4f9311;
  iVar1 = _SfMetric_OpenSubKey_12();
  if (-1 < iVar1) {
    ppiStack_18c = (int **)0x4f9323;
    Mixer_EnumDriverModels(&local_164);
    if (local_164 != (IEnumDriverModel *)0x0) {
      ppiStack_18c = local_16c;
      piStack_190 = (int *)0x1;
      pIStack_194 = local_164;
      piStack_198 = (int *)0x4f933d;
      iVar1 = (**(code **)(*(int *)local_164 + 0xc))();
      while (iVar1 == 0) {
        piStack_198 = &local_15c;
        uStack_19c = 0;
        piStack_1a0 = (int *)0x4f9354;
        (**(code **)(_DAT_00000000 + 0x14))();
        if ((local_164 == (IEnumDriverModel *)0x0) || (local_164 == (IEnumDriverModel *)0x1)) {
          piStack_1a0 = (int *)&stack0xfffffe80;
          piStack_1a4 = (int *)&DAT_0060ea28;
          ppiStack_1ac = (int **)0x4f9384;
          piStack_1a8 = unaff_EDI;
          (**(code **)(*unaff_EDI + 0xc))();
          if (ppiStack_18c != (int **)0x0) {
            ppiStack_1ac = ppiStack_18c;
            piStack_1b0 = (int *)0x4f9396;
            iVar1 = (*(code *)(*ppiStack_18c)[8])();
            if (iVar1 < 0) {
              piStack_1b0 = piStack_190;
              piStack_1b4 = (int *)0x4f93a4;
              (**(code **)(*piStack_190 + 8))();
              pIStack_194 = (IEnumDriverModel *)0x0;
              piStack_1b4 = piStack_198;
              pppiStack_1b8 = (int ***)0x4f93b2;
              (**(code **)(*piStack_198 + 8))();
              goto LAB_004f9900;
            }
            piStack_1b0 = (int *)&stack0xfffffe78;
            piStack_1b4 = piStack_190;
            pppiStack_1b8 = (int ***)0x4f93c0;
            (**(code **)(*piStack_190 + 100))();
            if (piStack_190 != (int *)0x0) {
              ppiStack_1bc = &piStack_1a8;
              pppiStack_1b8 = (int ***)0x0;
              piStack_1c0 = (int *)0x1;
              ppiStack_1c4 = (int **)piStack_190;
              piStack_1c8 = (int *)0x4f93da;
              iVar1 = (**(code **)(*piStack_190 + 0xc))();
              piVar2 = piStack_1d0;
              piStack_1d0 = (int *)pppiStack_1b8;
              while (pppiStack_1b8 = (int ***)piStack_1d0, iVar1 == 0) {
                pIStack_1cc = (IEnumDriverModel *)&stack0xfffffe7c;
                piStack_1c8 = (int *)0x40;
                (**(code **)(*piStack_1d0 + 0x1c))();
                SfPrintF(auStack_150,"%s\\Outputs\\%s",s_Audio_Hardware_0063eff0,&piStack_190);
                iVar1 = _SfMetric_OpenSubKey_12(&piStack_1c8,DAT_00647200,auStack_150);
                if (iVar1 < 0) {
LAB_004f9640:
                  (**(code **)((int)*ppiStack_1c4 + 8))(ppiStack_1c4);
                }
                else {
                  iVar1 = _SfDoesMetricExist_12(piStack_1c8,1000,4);
                  if (iVar1 != 0) {
LAB_004f9489:
                    iVar1 = _SfDoesMetricExist_12(piStack_1c8,0x3e9,4);
                    if (iVar1 == 0) {
                      piVar2 = (int *)_SfGetMetric_8(piStack_1c8,0x3e9);
                      (**(code **)((int)*ppiStack_1c4 + 0x5c))(ppiStack_1c4,2,&piStack_1c0);
                      if (piStack_1c0 != piVar2) {
                        (**(code **)((int)*ppiStack_1c4 + 8))(ppiStack_1c4);
                        _SfMetric_Close_4(pIStack_1cc);
                        goto LAB_004f964a;
                      }
                    }
                    iVar1 = _SfDoesMetricExist_12(piStack_1c8,0x3ea,4);
                    if (iVar1 == 0) {
                      piVar2 = (int *)_SfGetMetric_8(piStack_1c8,0x3ea);
                      (**(code **)((int)*ppiStack_1c4 + 0x5c))(ppiStack_1c4,3,&piStack_1c0);
                      if (piStack_1c0 != piVar2) {
                        (**(code **)((int)*ppiStack_1c4 + 8))(ppiStack_1c4);
                        _SfMetric_Close_4(pIStack_1cc);
                        goto LAB_004f964a;
                      }
                    }
                    iVar1 = _SfDoesMetricExist_12(piStack_1c8,0x3eb,4);
                    if (iVar1 == 0) {
                      piVar2 = (int *)_SfGetMetric_8(piStack_1c8,0x3eb);
                      (**(code **)((int)*ppiStack_1c4 + 0x5c))(ppiStack_1c4,4,&piStack_1c0);
                      if (piStack_1c0 != piVar2) {
                        (**(code **)((int)*ppiStack_1c4 + 8))(ppiStack_1c4);
                        _SfMetric_Close_4(pIStack_1cc);
                        goto LAB_004f964a;
                      }
                    }
                    iVar1 = _SfDoesMetricExist_12(piStack_1c8,0x3ec,4);
                    if (iVar1 == 0) {
                      uStack_19c = _SfGetMetric_8(piStack_1c8,0x3ec);
                      (**(code **)((int)*ppiStack_1c4 + 0x60))(ppiStack_1c4,0x17,&uStack_19c);
                    }
                    iVar1 = _SfDoesMetricExist_12(piStack_1c8,0x3ed,4);
                    if (iVar1 == 0) {
                      pIStack_194 = (IEnumDriverModel *)_SfGetMetric_8(piStack_1c8,0x3ed);
                      (**(code **)((int)*ppiStack_1c4 + 0x60))(ppiStack_1c4,0x40,&pIStack_194);
                    }
                    iVar1 = _SfDoesMetricExist_12(piStack_1c8,0x3ee,4);
                    if (iVar1 == 0) {
                      piStack_1a0 = (int *)_SfGetMetric_8(piStack_1c8,0x3ee);
                      (**(code **)((int)*ppiStack_1c4 + 0x60))(ppiStack_1c4,0x41,&piStack_1a0);
                    }
                    _SfMetric_Close_4(piStack_1c8);
                    goto LAB_004f9640;
                  }
                  piVar2 = (int *)_SfGetMetric_8(piStack_1c8,1000);
                  (**(code **)((int)*ppiStack_1c4 + 0x5c))(ppiStack_1c4,1,&piStack_1c0);
                  if (piStack_1c0 == piVar2) goto LAB_004f9489;
                  (**(code **)((int)*ppiStack_1c4 + 8))(ppiStack_1c4);
                  _SfMetric_Close_4(pIStack_1cc);
                }
LAB_004f964a:
                iVar1 = (**(code **)(*piStack_1b0 + 0xc))(piStack_1b0,1,&piStack_1c8,0);
                piVar2 = piStack_1d0;
                piStack_1d0 = (int *)pppiStack_1b8;
              }
              pIStack_1cc = (IEnumDriverModel *)0x4f966e;
              piStack_1d0 = piVar2;
              piStack_1c8 = piStack_1a0;
              (**(code **)(*piStack_1a0 + 8))();
              piStack_190 = (int *)0x0;
            }
            pppiStack_1b8 = &ppiStack_18c;
            ppiStack_1bc = (int **)piStack_198;
            piStack_1c0 = (int *)0x4f9681;
            (**(code **)(*piStack_198 + 0x60))();
            if (pIStack_194 != (IEnumDriverModel *)0x0) {
              ppiStack_1c4 = &piStack_1a8;
              piStack_1c0 = (int *)0x0;
              piStack_1c8 = (int *)0x1;
              pIStack_1cc = pIStack_194;
              piStack_1d0 = (int *)0x4f969b;
              iVar1 = (**(code **)(*(int *)pIStack_194 + 0xc))();
              while (iVar1 == 0) {
                pppiVar4 = &ppiStack_18c;
                piStack_1d0 = (int *)0x40;
                (**(code **)(*piStack_1c0 + 0x1c))(piStack_1c0,pppiVar4);
                SfPrintF(local_158,"%s\\Inputs\\%s",s_Audio_Hardware_0063eff0,&piStack_198);
                iVar1 = _SfMetric_OpenSubKey_12(&piStack_1d0,DAT_00647200,local_158);
                if (iVar1 < 0) {
                  (*(code *)(*ppiStack_1c4)[2])(ppiStack_1c4);
                }
                else {
                  iVar1 = _SfDoesMetricExist_12(piStack_1d0,1000,4);
                  if (iVar1 == 0) {
                    piVar2 = (int *)_SfGetMetric_8(piStack_1d0,1000);
                    (*(code *)(*ppiStack_1c4)[0x20])(ppiStack_1c4,1,&piStack_1c8);
                    if (piStack_1c8 == piVar2) goto LAB_004f9752;
                    (*(code *)(*ppiStack_1c4)[2])(ppiStack_1c4);
                  }
                  else {
LAB_004f9752:
                    iVar1 = _SfDoesMetricExist_12(piStack_1d0,0x3e9,4);
                    if (iVar1 == 0) {
                      piVar2 = (int *)_SfGetMetric_8(piStack_1d0,0x3e9);
                      (*(code *)(*ppiStack_1c4)[0x20])(ppiStack_1c4,2,&piStack_1c8);
                      if (piStack_1c8 == piVar2) goto LAB_004f9796;
                    }
                    else {
LAB_004f9796:
                      iVar1 = _SfDoesMetricExist_12(piStack_1d0,0x3ea,4);
                      if (iVar1 == 0) {
                        piVar2 = (int *)_SfGetMetric_8(piStack_1d0,0x3ea);
                        (*(code *)(*ppiStack_1c4)[0x20])(ppiStack_1c4,3,&piStack_1c8);
                        if (piStack_1c8 != piVar2) {
                          (*(code *)(*ppiStack_1c4)[2])(ppiStack_1c4);
                          goto LAB_004f98b1;
                        }
                      }
                      iVar1 = _SfDoesMetricExist_12(piStack_1d0,0x3eb,4);
                      if (iVar1 == 0) {
                        piVar2 = (int *)_SfGetMetric_8(piStack_1d0,0x3eb);
                        (*(code *)(*ppiStack_1c4)[0x20])(ppiStack_1c4,4,&piStack_1c8);
                        if (piStack_1c8 != piVar2) goto LAB_004f98a2;
                      }
                      iVar1 = _SfDoesMetricExist_12(piStack_1d0,0x3ec,4);
                      if (iVar1 == 0) {
                        piStack_1a4 = (int *)_SfGetMetric_8(piStack_1d0,0x3ec);
                        (*(code *)(*ppiStack_1c4)[0x21])(ppiStack_1c4,0x17,&piStack_1a4);
                      }
                      iVar1 = _SfDoesMetricExist_12(piStack_1d0,0x3ee,4);
                      if (iVar1 == 0) {
                        piStack_1a8 = (int *)_SfGetMetric_8(piStack_1d0,0x3ee);
                        (*(code *)(*ppiStack_1c4)[0x21])(ppiStack_1c4,0x41,&piStack_1a8);
                      }
                    }
LAB_004f98a2:
                    (*(code *)(*ppiStack_1c4)[2])(ppiStack_1c4);
                  }
LAB_004f98b1:
                  _SfMetric_Close_4(pppiVar4);
                }
                iVar1 = (**(code **)(*piStack_1b4 + 0xc))(piStack_1b4,1,&piStack_1c8,0);
              }
              piStack_1d0 = piStack_1a4;
              (**(code **)(*piStack_1a4 + 8))();
              pIStack_194 = (IEnumDriverModel *)0x0;
            }
            piStack_1c0 = piStack_1a0;
            ppiStack_1c4 = (int **)0x4f98e8;
            (**(code **)(*piStack_1a0 + 0x24))();
            ppiStack_1c4 = (int **)piStack_1a4;
            piStack_1c8 = (int *)0x4f98f2;
            (**(code **)(*piStack_1a4 + 8))();
            ppiStack_18c = (int **)0x0;
          }
          ppiStack_1ac = (int **)piStack_190;
          piStack_1b0 = (int *)0x4f9900;
          (**(code **)(*piStack_190 + 8))();
        }
        else {
          piStack_1a4 = (int *)0x4f936b;
          piStack_1a0 = unaff_EDI;
          (**(code **)(*unaff_EDI + 8))();
        }
LAB_004f9900:
        piStack_1a8 = (int *)&stack0xfffffe78;
        piStack_1a4 = (int *)0x0;
        ppiStack_1ac = (int **)0x1;
        piStack_1b4 = (int *)0x4f9916;
        iVar1 = (**(code **)(*unaff_ESI + 0xc))();
      }
      uStack_19c = 0x4f9928;
      (**(code **)(*piStack_174 + 8))();
      uVar3 = 1;
      local_164 = (IEnumDriverModel *)0x0;
    }
  }
  if (local_158[0] != 0) {
    ppiStack_18c = (int **)0x4f9947;
    _SfMetric_Close_4();
  }
  local_158[0] = 0;
  if (local_16c[0] != (int *)0x0) {
    ppiStack_18c = (int **)0x4f995d;
    (**(code **)(*local_16c[0] + 8))();
  }
  local_16c[0] = (int *)0x0;
  if (local_164 != (IEnumDriverModel *)0x0) {
    ppiStack_18c = (int **)0x4f996f;
    (**(code **)(*(int *)local_164 + 8))();
  }
  return uVar3;
}


