/* Module: vegas30.exe
   Function: FUN_004f8c70
   Address: 004f8c70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004f8c70(void)

{
  IEnumDriverModel *pIVar1;
  int iVar2;
  undefined4 uVar3;
  IEnumDriverModel **ppIVar4;
  IEnumDriverModel **ppIVar5;
  IEnumDriverModel **ppIVar6;
  int *piVar7;
  int *piVar8;
  IEnumDriverModel **ppIVar9;
  int *piVar10;
  IEnumDriverModel *pIStack_1f8;
  IEnumDriverModel *pIStack_1f4;
  IEnumDriverModel *pIStack_1f0;
  IEnumDriverModel *pIStack_1ec;
  IEnumDriverModel *pIStack_1e8;
  IEnumDriverModel **ppIStack_1e4;
  IEnumDriverModel *pIStack_1e0;
  IEnumDriverModel *pIStack_1dc;
  IEnumDriverModel *pIStack_1d8;
  IEnumDriverModel *pIStack_1d4;
  IEnumDriverModel *pIStack_1d0;
  IEnumDriverModel *pIStack_1cc;
  IEnumDriverModel *pIStack_1c8;
  IEnumDriverModel **ppIStack_1c4;
  IEnumDriverModel *pIStack_1c0;
  IEnumDriverModel *pIStack_1bc;
  IEnumDriverModel *pIStack_1b8;
  IEnumDriverModel *pIStack_1b4;
  IEnumDriverModel *pIStack_1b0;
  IEnumDriverModel *pIStack_1ac;
  int *piStack_1a8;
  IEnumDriverModel *pIStack_1a4;
  IEnumDriverModel *pIStack_1a0;
  IEnumDriverModel *pIStack_19c;
  IEnumDriverModel *pIStack_198;
  int *piVar11;
  IEnumDriverModel *local_184;
  undefined4 local_180;
  undefined4 local_17c;
  IEnumDriverModel *local_178 [2];
  undefined4 local_170;
  undefined4 local_16c;
  int iStack_164;
  IEnumDriverModel *local_160;
  IEnumDriverModel aIStack_15c [4];
  IEnumDriverModel aIStack_158 [8];
  undefined1 auStack_150 [336];
  
  pIStack_19c = (IEnumDriverModel *)&local_160;
  pIStack_198 = DAT_00647200;
  uVar3 = 0;
  local_170 = 0;
  local_16c = 0;
  local_180 = 0;
  local_17c = 0;
  local_184 = (IEnumDriverModel *)0x0;
  local_160 = (IEnumDriverModel *)0x0;
  local_178[0] = (IEnumDriverModel *)0x0;
  pIStack_1a0 = (IEnumDriverModel *)0x4f8cb1;
  iVar2 = _SfMetric_OpenSubKey_12();
  if (-1 < iVar2) {
    pIStack_198 = (IEnumDriverModel *)0x4f8cc3;
    Mixer_EnumDriverModels(local_178);
    if (local_178[0] != (IEnumDriverModel *)0x0) {
      pIStack_198 = (IEnumDriverModel *)&local_184;
      piVar11 = (int *)0x0;
      pIStack_19c = (IEnumDriverModel *)0x1;
      pIStack_1a0 = local_178[0];
      pIStack_1a4 = (IEnumDriverModel *)0x4f8cdd;
      iVar2 = (**(code **)(*(int *)local_178[0] + 0xc))();
      piStack_1a8 = piVar11;
      while (iVar2 == 0) {
        pIStack_1a4 = aIStack_15c;
        pIStack_1ac = (IEnumDriverModel *)0x4f8cf4;
        piVar11 = piStack_1a8;
        (**(code **)(*piStack_1a8 + 0x14))();
        if ((iStack_164 == 0) || (iStack_164 == 1)) {
          pIStack_1ac = (IEnumDriverModel *)&stack0xfffffe74;
          pIStack_1b0 = (IEnumDriverModel *)&DAT_0060ea28;
          pIStack_1b4 = pIStack_19c;
          pIStack_1b8 = (IEnumDriverModel *)0x4f8d24;
          (**(code **)(*(IEnumDriverModel **)pIStack_19c + 0xc))();
          if (pIStack_198 != (IEnumDriverModel *)0x0) {
            pIStack_1b8 = pIStack_198;
            pIStack_1bc = (IEnumDriverModel *)0x4f8d36;
            iVar2 = (**(code **)(*(IEnumDriverModel **)pIStack_198 + 0x20))();
            if (iVar2 < 0) {
              pIStack_1bc = pIStack_19c;
              pIStack_1c0 = (IEnumDriverModel *)0x4f8d44;
              (**(code **)(*(IEnumDriverModel **)pIStack_19c + 8))();
              pIStack_1a0 = (IEnumDriverModel *)0x0;
              pIStack_1c0 = pIStack_1b0;
              ppIStack_1c4 = (IEnumDriverModel **)0x4f8d52;
              (**(code **)(*(int *)pIStack_1b0 + 8))();
              pIStack_1bc = (IEnumDriverModel *)piVar11;
              goto LAB_004f90f0;
            }
            pIStack_1bc = (IEnumDriverModel *)&pIStack_198;
            pIStack_1c0 = pIStack_19c;
            ppIStack_1c4 = (IEnumDriverModel **)0x4f8d60;
            (**(code **)(*(IEnumDriverModel **)pIStack_19c + 100))();
            if (pIStack_1a0 != (IEnumDriverModel *)0x0) {
              pIStack_1c8 = (IEnumDriverModel *)&pIStack_1b0;
              ppIStack_1c4 = (IEnumDriverModel **)0x0;
              pIStack_1cc = (IEnumDriverModel *)0x1;
              pIStack_1d0 = pIStack_1a0;
              pIStack_1d4 = (IEnumDriverModel *)0x4f8d7a;
              iVar2 = (**(code **)(*(int *)pIStack_1a0 + 0xc))();
              pIVar1 = pIStack_1dc;
              pIStack_1dc = pIStack_1c0;
              while (pIStack_1c0 = pIStack_1dc, iVar2 == 0) {
                pIStack_1d8 = (IEnumDriverModel *)&local_184;
                pIStack_1d4 = (IEnumDriverModel *)0x40;
                pIStack_1e0 = (IEnumDriverModel *)0x4f8d93;
                (**(code **)(*(IEnumDriverModel **)pIStack_1dc + 0x1c))();
                pIStack_1e0 = (IEnumDriverModel *)&stack0xfffffe70;
                pIStack_1ec = (IEnumDriverModel *)auStack_150;
                ppIStack_1e4 = (IEnumDriverModel **)s_Audio_Hardware_0063eff0;
                pIStack_1e8 = (IEnumDriverModel *)0x619c20;
                pIStack_1f0 = (IEnumDriverModel *)0x4f8daf;
                SfPrintF();
                pIStack_1e0 = (IEnumDriverModel *)auStack_150;
                pIStack_1e8 = (IEnumDriverModel *)&pIStack_1d4;
                ppIStack_1e4 = (IEnumDriverModel **)DAT_00647200;
                pIStack_1ec = (IEnumDriverModel *)0x4f8dcb;
                iVar2 = _SfMetric_OpenSubKey_12();
                if (iVar2 < 0) {
                  pIStack_1e0 = pIStack_1cc;
                  ppIStack_1e4 = (IEnumDriverModel **)0x4f8dd9;
                  (**(code **)(*(IEnumDriverModel **)pIStack_1cc + 8))();
                }
                else {
                  pIStack_1e0 = (IEnumDriverModel *)&pIStack_1a4;
                  ppIStack_1e4 = (IEnumDriverModel **)0x1;
                  pIStack_1e8 = pIStack_1cc;
                  pIStack_1ec = (IEnumDriverModel *)0x4f8deb;
                  (**(code **)(*(IEnumDriverModel **)pIStack_1cc + 0x5c))();
                  pIStack_1ec = pIStack_1b0;
                  pIStack_1f0 = (IEnumDriverModel *)0x3e8;
                  pIStack_1f4 = pIStack_1e0;
                  pIStack_1f8 = (IEnumDriverModel *)0x4f8dff;
                  _SfSetMetric_12();
                  pIStack_1ec = (IEnumDriverModel *)&pIStack_1c0;
                  pIStack_1f0 = (IEnumDriverModel *)0x2;
                  pIStack_1f4 = pIStack_1d8;
                  pIStack_1f8 = (IEnumDriverModel *)0x4f8e10;
                  (**(code **)(*(IEnumDriverModel **)pIStack_1d8 + 0x5c))();
                  pIStack_1f8 = pIStack_1cc;
                  _SfSetMetric_12(pIStack_1ec,0x3e9);
                  pIStack_1f8 = (IEnumDriverModel *)&pIStack_1c0;
                  piVar10 = (int *)0x3;
                  (**(code **)((int)*ppIStack_1e4 + 0x5c))(ppIStack_1e4);
                  _SfSetMetric_12(pIStack_1f8,0x3ea,pIStack_1cc);
                  ppIVar9 = &pIStack_1c0;
                  piVar8 = (int *)0x4;
                  (**(code **)(*(int *)pIStack_1f0 + 0x5c))(pIStack_1f0,4,ppIVar9);
                  _SfSetMetric_12(ppIVar9,0x3eb,pIStack_1cc);
                  ppIVar4 = &pIStack_1d0;
                  piVar7 = (int *)0x17;
                  (**(code **)(*piVar10 + 0x5c))(piVar10,0x17,ppIVar4);
                  _SfSetMetric_12(ppIVar4,0x3ec,pIStack_1dc);
                  ppIVar4 = &pIStack_1d0;
                  piVar10 = (int *)0x40;
                  (**(code **)(*piVar8 + 0x5c))(piVar8,0x40,ppIVar4);
                  _SfSetMetric_12(ppIVar4,0x3ed,pIStack_1dc);
                  ppIVar4 = &pIStack_1f8;
                  (**(code **)(*piVar7 + 0x5c))(piVar7,0x41,ppIVar4);
                  _SfSetMetric_12(ppIVar4,0x3ee,ppIVar9);
                  _SfMetric_Close_4(ppIVar4);
                  (**(code **)(*piVar10 + 8))(piVar10);
                }
                pIStack_1e8 = (IEnumDriverModel *)&pIStack_1d0;
                ppIStack_1e4 = (IEnumDriverModel **)0x0;
                pIStack_1ec = (IEnumDriverModel *)0x1;
                pIStack_1f0 = pIStack_1c0;
                pIStack_1f4 = (IEnumDriverModel *)0x4f8f03;
                iVar2 = (**(code **)(*(IEnumDriverModel **)pIStack_1c0 + 0xc))();
                pIVar1 = pIStack_1dc;
                pIStack_1dc = pIStack_1c0;
              }
              pIStack_1d8 = (IEnumDriverModel *)0x4f8f15;
              pIStack_1dc = pIVar1;
              pIStack_1d4 = pIStack_1b0;
              (**(code **)(*(int *)pIStack_1b0 + 8))();
              pIStack_1a0 = (IEnumDriverModel *)0x0;
            }
            ppIStack_1c4 = &pIStack_19c;
            pIStack_1c8 = pIStack_1a4;
            pIStack_1cc = (IEnumDriverModel *)0x4f8f28;
            (**(code **)(*(int *)pIStack_1a4 + 0x60))();
            if (pIStack_1a4 != (IEnumDriverModel *)0x0) {
              pIStack_1d0 = (IEnumDriverModel *)&pIStack_1b4;
              pIStack_1cc = (IEnumDriverModel *)0x0;
              pIStack_1d4 = (IEnumDriverModel *)0x1;
              pIStack_1d8 = pIStack_1a4;
              pIStack_1dc = (IEnumDriverModel *)0x4f8f42;
              iVar2 = (**(code **)(*(int *)pIStack_1a4 + 0xc))();
              pIVar1 = (IEnumDriverModel *)ppIStack_1e4;
              ppIStack_1e4 = ppIStack_1c4;
              while (ppIStack_1c4 = ppIStack_1e4, iVar2 == 0) {
                pIStack_1e0 = (IEnumDriverModel *)&stack0xfffffe74;
                pIStack_1dc = (IEnumDriverModel *)0x40;
                pIStack_1e8 = (IEnumDriverModel *)0x4f8f5b;
                (**(code **)(*ppIStack_1e4 + 0x1c))();
                pIStack_1e8 = (IEnumDriverModel *)&pIStack_198;
                pIStack_1f4 = aIStack_158;
                pIStack_1ec = (IEnumDriverModel *)s_Audio_Hardware_0063eff0;
                pIStack_1f0 = (IEnumDriverModel *)0x619c10;
                pIStack_1f8 = (IEnumDriverModel *)0x4f8f77;
                SfPrintF();
                pIStack_1e8 = aIStack_158;
                pIStack_1f0 = (IEnumDriverModel *)&pIStack_1dc;
                pIStack_1ec = DAT_00647200;
                pIStack_1f4 = (IEnumDriverModel *)0x4f8f93;
                iVar2 = _SfMetric_OpenSubKey_12();
                if (iVar2 < 0) {
                  pIStack_1e8 = pIStack_1d0;
                  pIStack_1ec = (IEnumDriverModel *)0x4f8fa1;
                  (**(code **)(*(IEnumDriverModel **)pIStack_1d0 + 8))();
                }
                else {
                  pIStack_1e8 = (IEnumDriverModel *)&pIStack_1ac;
                  pIStack_1ec = (IEnumDriverModel *)0x1;
                  pIStack_1f0 = pIStack_1d0;
                  pIStack_1f4 = (IEnumDriverModel *)0x4f8fb6;
                  (**(code **)(*(IEnumDriverModel **)pIStack_1d0 + 0x80))();
                  pIStack_1f4 = pIStack_1b8;
                  pIStack_1f8 = (IEnumDriverModel *)0x3e8;
                  _SfSetMetric_12(pIStack_1e8);
                  pIStack_1f4 = (IEnumDriverModel *)&pIStack_1c8;
                  pIStack_1f8 = (IEnumDriverModel *)0x2;
                  (**(code **)(*(int *)pIStack_1dc + 0x80))(pIStack_1dc);
                  _SfSetMetric_12(pIStack_1f4,0x3e9,pIStack_1d4);
                  ppIVar9 = &pIStack_1c8;
                  (**(code **)(*(IEnumDriverModel **)pIStack_1e8 + 0x80))(pIStack_1e8,3);
                  _SfSetMetric_12(ppIVar9,0x3ea,pIStack_1d4);
                  ppIVar4 = &pIStack_1c8;
                  (**(code **)(*(IEnumDriverModel **)pIStack_1f4 + 0x80))(pIStack_1f4,4);
                  _SfSetMetric_12(ppIVar4,0x3eb,pIStack_1d4);
                  ppIVar6 = &pIStack_1d8;
                  (**(code **)(*ppIVar9 + 0x80))(ppIVar9,0x17);
                  _SfSetMetric_12(ppIVar6,0x3ec,ppIStack_1e4);
                  ppIVar5 = &pIStack_1f4;
                  (**(code **)(*ppIVar4 + 0x80))(ppIVar4,0x41,ppIVar5);
                  _SfSetMetric_12(ppIVar5,0x3ee,ppIVar9);
                  (**(code **)(*ppIVar6 + 8))(ppIVar6);
                  pIStack_1ec = pIStack_1e0;
                  pIStack_1f0 = (IEnumDriverModel *)0x4f90a6;
                  _SfMetric_Close_4();
                }
                pIStack_1f0 = (IEnumDriverModel *)&pIStack_1d4;
                pIStack_1ec = (IEnumDriverModel *)0x0;
                pIStack_1f4 = (IEnumDriverModel *)0x1;
                pIStack_1f8 = (IEnumDriverModel *)ppIStack_1c4;
                iVar2 = (**(code **)(*ppIStack_1c4 + 0xc))();
                pIVar1 = (IEnumDriverModel *)ppIStack_1e4;
                ppIStack_1e4 = ppIStack_1c4;
              }
              pIStack_1e0 = (IEnumDriverModel *)0x4f90ca;
              ppIStack_1e4 = (IEnumDriverModel **)pIVar1;
              pIStack_1dc = pIStack_1b4;
              (**(code **)(*(IEnumDriverModel **)pIStack_1b4 + 8))();
              pIStack_1a4 = (IEnumDriverModel *)0x0;
            }
            pIStack_1cc = pIStack_1ac;
            pIStack_1d0 = (IEnumDriverModel *)0x4f90d8;
            (**(code **)(*(IEnumDriverModel **)pIStack_1ac + 0x24))();
            pIStack_1d0 = pIStack_1b0;
            pIStack_1d4 = (IEnumDriverModel *)0x4f90e2;
            (**(code **)(*(int *)pIStack_1b0 + 8))();
            pIStack_198 = (IEnumDriverModel *)0x0;
          }
          pIStack_1b8 = (IEnumDriverModel *)piStack_1a8;
          pIStack_1bc = (IEnumDriverModel *)0x4f90f0;
          (**(code **)(*piStack_1a8 + 8))();
          pIStack_1bc = (IEnumDriverModel *)piVar11;
        }
        else {
          pIStack_1ac = pIStack_19c;
          pIStack_1b0 = (IEnumDriverModel *)0x4f8d0b;
          (**(code **)(*(IEnumDriverModel **)pIStack_19c + 8))();
          pIStack_1bc = (IEnumDriverModel *)piVar11;
        }
LAB_004f90f0:
        pIStack_1b4 = (IEnumDriverModel *)&pIStack_1a0;
        pIStack_1b0 = (IEnumDriverModel *)0x0;
        pIStack_1a0 = (IEnumDriverModel *)0x0;
        pIStack_1b8 = (IEnumDriverModel *)0x1;
        pIStack_1c0 = (IEnumDriverModel *)0x4f9106;
        piVar11 = (int *)pIStack_1bc;
        iVar2 = (**(code **)(*(int *)pIStack_1bc + 0xc))();
        piStack_1a8 = piVar11;
      }
      pIStack_1a4 = (IEnumDriverModel *)0x0;
      piStack_1a8 = (int *)0x4f9118;
      (**(code **)(_DAT_00000000 + 8))();
      uVar3 = 1;
      local_178[0] = (IEnumDriverModel *)0x0;
    }
  }
  if (local_160 != (IEnumDriverModel *)0x0) {
    pIStack_198 = (IEnumDriverModel *)0x4f9137;
    _SfMetric_Close_4();
  }
  local_160 = (IEnumDriverModel *)0x0;
  if (local_178[0] != (IEnumDriverModel *)0x0) {
    pIStack_198 = (IEnumDriverModel *)0x4f9149;
    (**(code **)(*(int *)local_178[0] + 8))();
  }
  local_178[0] = (IEnumDriverModel *)0x0;
  if (local_184 != (IEnumDriverModel *)0x0) {
    pIStack_198 = (IEnumDriverModel *)0x4f915b;
    (**(code **)(*(int *)local_184 + 8))();
  }
  return uVar3;
}


