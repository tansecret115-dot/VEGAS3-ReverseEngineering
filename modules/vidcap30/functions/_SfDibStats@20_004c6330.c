/* Module: vidcap30.exe
   Function: _SfDibStats@20
   Address: 004c6330
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfDibStats_20(int param_1,undefined4 param_2,undefined4 param_3,int param_4,float *param_5)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  HGLOBAL pvVar4;
  int *pMem;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined1 local_14 [4];
  int *local_10;
  int local_c;
  int *local_8;
  int local_4;
  
                    /* 0xc6330  343  _SfDibStats@20 */
  uVar2 = _SfGetPixelType_4(param_1);
  iVar3 = _SfGetPixelBitsPerChannel_8(uVar2,local_14);
  if (iVar3 != 0) {
    iVar7 = 1 << (local_14[2] & 0x1f);
    iVar8 = 1 << (local_14[1] & 0x1f);
    iVar3 = 1 << (local_14[0] & 0x1f);
    local_c = 1 << (local_14[3] & 0x1f);
    pvVar4 = GlobalAlloc(0x40,(local_c + iVar3 + iVar8 + iVar7) * 4);
    pMem = GlobalLock(pvVar4);
    piVar6 = pMem + iVar7;
    local_10 = piVar6 + iVar8;
    local_8 = local_10 + iVar3;
    local_4 = _SfDibHistogram_40(param_1,param_2,param_3,param_4,pMem,piVar6,local_10,local_8,0,0);
    if (-1 < local_4) {
      param_1 = 0;
      param_4 = 0;
      param_5[1] = 0.0;
      *param_5 = 0.0;
      param_5[2] = 0.0;
      piVar5 = pMem;
      if (0 < iVar7) {
        do {
          if (*piVar5 != 0) {
            fVar1 = (float)param_4 / (float)(iVar7 + -1);
            param_5[1] = fVar1;
            if (param_1 == 0) {
              *param_5 = fVar1;
            }
            param_1 = param_1 + *piVar5;
            param_5[2] = (float)*piVar5 * fVar1 + param_5[2];
          }
          piVar5 = piVar5 + 1;
          param_4 = param_4 + 1;
        } while (param_4 < iVar7);
        if (0 < param_1) {
          param_5[2] = param_5[2] / (float)param_1;
        }
      }
      iVar7 = 0;
      param_5[4] = 0.0;
      param_5[3] = 0.0;
      param_5[5] = 0.0;
      param_4 = 0;
      if (0 < iVar8) {
        do {
          if (*piVar6 != 0) {
            fVar1 = (float)param_4 / (float)(iVar8 + -1);
            param_5[4] = fVar1;
            if (iVar7 == 0) {
              param_5[3] = fVar1;
            }
            iVar7 = iVar7 + *piVar6;
            param_5[5] = (float)*piVar6 * fVar1 + param_5[5];
          }
          param_4 = param_4 + 1;
          piVar6 = piVar6 + 1;
        } while (param_4 < iVar8);
        if (0 < iVar7) {
          param_5[5] = param_5[5] / (float)iVar7;
        }
      }
      iVar7 = 0;
      param_5[7] = 0.0;
      param_5[6] = 0.0;
      param_5[8] = 0.0;
      param_4 = 0;
      piVar6 = local_10;
      if (0 < iVar3) {
        do {
          if (*piVar6 != 0) {
            fVar1 = (float)param_4 / (float)(iVar3 + -1);
            param_5[7] = fVar1;
            if (iVar7 == 0) {
              param_5[6] = fVar1;
            }
            iVar7 = iVar7 + *piVar6;
            param_5[8] = (float)*piVar6 * fVar1 + param_5[8];
          }
          param_4 = param_4 + 1;
          piVar6 = piVar6 + 1;
        } while (param_4 < iVar3);
        if (0 < iVar7) {
          param_5[8] = param_5[8] / (float)iVar7;
        }
      }
      iVar3 = 0;
      param_5[10] = 0.0;
      param_5[9] = 0.0;
      param_5[0xb] = 0.0;
      param_4 = 0;
      piVar6 = local_8;
      if (0 < local_c) {
        do {
          if (*piVar6 != 0) {
            fVar1 = (float)param_4 / (float)(local_c + -1);
            param_5[10] = fVar1;
            if (iVar3 == 0) {
              param_5[9] = fVar1;
            }
            iVar3 = iVar3 + *piVar6;
            param_5[0xb] = (float)*piVar6 * fVar1 + param_5[0xb];
          }
          param_4 = param_4 + 1;
          piVar6 = piVar6 + 1;
        } while (param_4 < local_c);
        if (0 < iVar3) {
          param_5[0xb] = param_5[0xb] / (float)iVar3;
        }
      }
    }
    pvVar4 = GlobalHandle(pMem);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(pMem);
    GlobalFree(pvVar4);
    return local_4;
  }
  return -0x7ff8ffa9;
}


