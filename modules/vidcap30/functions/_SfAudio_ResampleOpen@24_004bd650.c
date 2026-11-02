/* Module: vidcap30.exe
   Function: _SfAudio_ResampleOpen@24
   Address: 004bd650
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
_SfAudio_ResampleOpen_24(int *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  double dVar2;
  HGLOBAL pvVar3;
  int *piVar4;
  LPVOID pvVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  code *pcVar11;
  
                    /* 0xbd650  247  _SfAudio_ResampleOpen@24 */
  if (*param_1 != 0) {
    *param_1 = 0;
  }
  pcVar11 = GlobalAlloc_exref;
  pvVar3 = GlobalAlloc(0x40,0x1d90);
  piVar4 = GlobalLock(pvVar3);
  if (piVar4 == (int *)0x0) {
    return 0x8007000e;
  }
  piVar4[1] = param_5;
  dVar2 = (double)param_4 / (double)param_3;
  piVar4[2] = param_3;
  piVar4[8] = 0;
  piVar4[9] = 0;
  piVar4[3] = param_4;
  piVar4[0x756] = param_6 & 0xf00;
  uVar7 = param_6 & 0xf0;
  *piVar4 = param_2;
  piVar4[0x757] = uVar7;
  piVar4[0x758] = param_6 & 0xf;
  piVar4[0x759] = param_6 >> 0xc & 1;
  piVar4[0x74c] = param_6 >> 0xd & 1;
  *(double *)(piVar4 + 6) = dVar2;
  *(double *)(piVar4 + 10) = _DAT_00587ad0 / dVar2;
  if ((param_2 == 0x20) || (param_2 == 0x21)) {
    FUN_004bd550(uVar7,dVar2,piVar4 + 0x4c);
    if (1 < param_5) {
      param_5 = param_5 + -1;
      piVar6 = piVar4 + 0x84;
      do {
        param_5 = param_5 + -1;
        piVar9 = piVar4 + 0x4c;
        piVar10 = piVar6;
        for (iVar8 = 0x38; iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar10 = *piVar9;
          piVar9 = piVar9 + 1;
          piVar10 = piVar10 + 1;
        }
        piVar6 = piVar6 + 0x38;
        pcVar11 = GlobalAlloc_exref;
      } while (param_5 != 0);
    }
    iVar8 = DAT_005c22ec;
    if (piVar4[0x758] == 3) {
      piVar4[0x75c] = -0x4ec4ec4f;
      piVar4[0x75b] = 1;
      piVar4[0x75d] = 0x40533b13;
      if ((iVar8 == 0) && (iVar8 = FUN_004bd8a0(), iVar8 < 0)) {
        _SfAudio_ResampleClose_4(piVar4);
        return 0x8007000e;
      }
      pvVar3 = (HGLOBAL)(*pcVar11)(0x40,piVar4[1] << 2);
      pvVar5 = GlobalLock(pvVar3);
      piVar4[0x75a] = (int)pvVar5;
      if (pvVar5 == (LPVOID)0x0) {
        _SfAudio_ResampleClose_4(piVar4);
        return 0x8007000e;
      }
      iVar8 = 0;
      if (0 < piVar4[1]) {
        do {
          pvVar3 = (HGLOBAL)(*pcVar11)(0x40,200);
          pvVar5 = GlobalLock(pvVar3);
          *(LPVOID *)(piVar4[0x75a] + iVar8 * 4) = pvVar5;
          if (pvVar5 == (LPVOID)0x0) goto LAB_004bd85c;
          iVar8 = iVar8 + 1;
        } while (iVar8 < piVar4[1]);
      }
      pvVar3 = (HGLOBAL)(*pcVar11)(0x40,0x6c);
      piVar6 = GlobalLock(pvVar3);
      piVar4[0x762] = (int)(piVar6 + 1);
      if (piVar6 + 1 == (int *)0x0) {
LAB_004bd85c:
        _SfAudio_ResampleClose_4(piVar4);
        return 0x8007000e;
      }
      iVar8 = -1;
      do {
        iVar1 = iVar8 + 0x19;
        iVar8 = iVar8 + 1;
        *piVar6 = iVar1 % 0x19;
        piVar6 = piVar6 + 1;
      } while (iVar8 < 0x1a);
    }
  }
  else if (((param_6 & 0xf) == 3) || (uVar7 != 0)) {
    piVar4[0x758] = 2;
    piVar4[0x757] = 0;
    *param_1 = (int)piVar4;
    return 0;
  }
  *param_1 = (int)piVar4;
  return 0;
}


