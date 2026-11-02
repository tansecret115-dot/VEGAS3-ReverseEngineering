/* Module: vidcap30.exe
   Function: _SfDibBiLevelDither@36
   Address: 004ce500
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfDibBiLevelDither_36
              (uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
              int param_8,int param_9)

{
  int *pMem;
  int iVar1;
  HGLOBAL pvVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int local_10;
  int local_c;
  int *local_8 [2];
  
                    /* 0xce500  295  _SfDibBiLevelDither@36 */
  iVar1 = _SfDibPrepareCopy_52
                    (&param_6,&local_10,&param_8,&param_5,param_1,param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,param_9);
  if (-1 < iVar1) {
    param_1 = 0;
    pvVar2 = GlobalAlloc(2,param_6 * 4);
    piVar3 = GlobalLock(pvVar2);
    if (piVar3 == (int *)0x0) {
      return -0x7ff8fff2;
    }
    local_8[0] = piVar3;
    pvVar2 = GlobalAlloc(2,param_6 * 4);
    piVar4 = GlobalLock(pvVar2);
    pMem = local_8[0];
    local_8[1] = piVar4;
    if (piVar4 == (int *)0x0) {
      pvVar2 = GlobalHandle(piVar3);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(piVar3);
      GlobalFree(pvVar2);
      return -0x7ff8fff2;
    }
    if (param_9 == 4) {
      iVar1 = 0;
      if (0 < param_6) {
        do {
          piVar3[iVar1] =
               ((uint)*(byte *)(param_8 + 2 + iVar1 * 4) + (uint)*(byte *)(param_8 + 1 + iVar1 * 4)
               + (uint)*(byte *)(param_8 + iVar1 * 4)) / 3;
          iVar1 = iVar1 + 1;
        } while (iVar1 < param_6);
      }
      param_8 = param_8 + param_7;
    }
    param_4 = 0;
    if (0 < local_10 + -1) {
      do {
        if (param_9 == 4) {
          iVar1 = 0;
          if (0 < param_6) {
            do {
              piVar4[iVar1] =
                   ((uint)*(byte *)(param_8 + 2 + iVar1 * 4) +
                    (uint)*(byte *)(param_8 + 1 + iVar1 * 4) + (uint)*(byte *)(param_8 + iVar1 * 4))
                   / 3;
              iVar1 = iVar1 + 1;
            } while (iVar1 < param_6);
          }
          param_2 = 1;
          if (1 < param_6 + -1) {
            local_c = -4 - (int)piVar4;
            piVar9 = piVar4 + 2;
            piVar11 = piVar3;
            do {
              piVar11 = piVar11 + 1;
              puVar5 = (undefined4 *)((int)piVar9 + param_5 + local_c);
              iVar1 = *piVar11;
              if (iVar1 < 0x7f) {
                *puVar5 = 0;
              }
              else {
                iVar1 = iVar1 + -0xff;
                *puVar5 = 0xffffffff;
              }
              piVar10 = piVar9 + 1;
              iVar6 = (int)(iVar1 * 7 + (iVar1 * 7 >> 0x1f & 0xfU)) >> 4;
              *(int *)((int)piVar3 + (-4 - (int)piVar4) + (int)piVar10) =
                   *(int *)((int)piVar3 + (-4 - (int)piVar4) + (int)piVar10) + iVar6;
              iVar7 = (int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 0xfU)) >> 4;
              piVar9[-2] = piVar9[-2] + iVar7;
              iVar8 = (int)(iVar1 * 5 + (iVar1 * 5 >> 0x1f & 0xfU)) >> 4;
              piVar9[-1] = piVar9[-1] + iVar8;
              *piVar9 = *piVar9 + (((iVar1 - iVar6) - iVar7) - iVar8);
              param_2 = param_2 + 1;
              piVar9 = piVar10;
            } while (param_2 < param_6 + -1);
          }
        }
        piVar3 = local_8[param_1 ^ 1];
        piVar4 = local_8[param_1];
        param_8 = param_8 + param_7;
        param_5 = param_5 + param_3;
        param_4 = param_4 + 1;
        param_1 = param_1 ^ 1;
      } while (param_4 < local_10 + -1);
    }
    pvVar2 = GlobalHandle(local_8[0]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem);
    GlobalFree(pvVar2);
    piVar3 = local_8[1];
    pvVar2 = GlobalHandle(local_8[1]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(piVar3);
    GlobalFree(pvVar2);
    iVar1 = 0;
  }
  return iVar1;
}


