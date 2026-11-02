/* Module: vegas30.exe
   Function: FUN_00593150
   Address: 00593150
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00593150(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  double dVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  HGLOBAL pvVar6;
  LPVOID pvVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  uint in_stack_0000001c;
  int in_stack_00000020;
  uint in_stack_00000024;
  ulonglong local_8;
  
  piVar4 = param_2;
  piVar3 = param_1;
  if ((param_1[1] != 0) && (param_1[3] != 0)) {
    if (param_2[1] != param_1[0xb]) {
      local_8 = (ulonglong)(uint)param_2[1];
      dVar2 = (double)local_8;
      local_8 = (ulonglong)(uint)param_1[0xb];
      _SfAudio_ResampleOpenEx_24(&param_1,0x20,2,dVar2 / (double)local_8,0x202);
      iVar5 = ftol();
      pvVar6 = GlobalAlloc(0x42,(uint)*(ushort *)(piVar4 + 3) * iVar5);
      pvVar7 = GlobalLock(pvVar6);
      if (pvVar7 == (LPVOID)0x0) {
        DAT_00649ce4 = 0;
        return -2;
      }
      iVar5 = _SfAudio_ResampleEx_16(param_1,pvVar7,piVar3[1],piVar3[2]);
      piVar3[2] = iVar5;
      pvVar6 = GlobalHandle((LPCVOID)piVar3[1]);
      GlobalUnlock(pvVar6);
      pvVar6 = GlobalHandle((LPCVOID)piVar3[1]);
      GlobalFree(pvVar6);
      piVar3[1] = (int)pvVar7;
      _SfAudio_ResampleResetEx_24(param_1,0x20,0,0,0,1);
      iVar5 = ftol();
      pvVar6 = GlobalAlloc(0x42,(uint)*(ushort *)(param_2 + 3) * iVar5);
      pvVar7 = GlobalLock(pvVar6);
      if (pvVar7 == (LPVOID)0x0) {
        DAT_00649ce4 = 0;
        return -2;
      }
      iVar5 = _SfAudio_ResampleEx_16(param_1,pvVar7,piVar3[3],piVar3[4]);
      piVar3[4] = iVar5;
      pvVar6 = GlobalHandle((LPCVOID)piVar3[3]);
      GlobalUnlock(pvVar6);
      pvVar6 = GlobalHandle((LPCVOID)piVar3[3]);
      GlobalFree(pvVar6);
      piVar4 = param_2;
      piVar3[3] = (int)pvVar7;
      iVar5 = ftol();
      *piVar3 = iVar5;
      ftol();
      iVar5 = ftol();
      piVar3[5] = iVar5;
      piVar3[10] = *piVar4;
      piVar3[0xb] = piVar4[1];
      piVar3[0xc] = piVar4[2];
      piVar3[0xd] = piVar4[3];
      *(short *)(piVar3 + 0xe) = (short)piVar4[4];
      _SfAudio_ResampleClose_4(param_1);
    }
    uVar9 = in_stack_00000024;
    if (*(int *)(DAT_0065a06c + 0xd4) != 0) {
      iVar5 = *(int *)(DAT_0065a06c + 0xbc);
      uVar11 = *(uint *)(DAT_0065a06c + 0xb8);
      if ((iVar5 <= in_stack_00000020) &&
         ((iVar5 < in_stack_00000020 || (uVar11 <= in_stack_0000001c)))) {
        uVar1 = *(uint *)(DAT_0065a06c + 200);
        iVar8 = *(int *)(DAT_0065a06c + 0xcc);
        iVar5 = iVar8 + iVar5 + (uint)CARRY4(uVar1,uVar11);
        if ((in_stack_00000020 <= iVar5) &&
           ((in_stack_00000020 < iVar5 || (in_stack_0000001c <= uVar1 + uVar11)))) {
          iVar5 = piVar3[5] >> 0x1f;
          if (iVar8 <= iVar5) {
            if (iVar8 < iVar5) {
              return -2;
            }
            if (uVar1 < (uint)piVar3[5]) {
              return -2;
            }
          }
        }
      }
    }
    if (DAT_00649ce4 != 0) {
      iVar5 = 0;
      param_1 = (int *)param_3;
      _SfAudio_FillSilence_12(param_2,param_3,in_stack_00000024);
      while( true ) {
        iVar8 = piVar3[5];
        bVar12 = iVar8 <= (int)in_stack_0000001c % *piVar3;
        iVar10 = (int)in_stack_0000001c % iVar8;
        uVar11 = uVar9;
        if (iVar8 - iVar10 <= (int)uVar9) {
          uVar11 = iVar8 - iVar10;
        }
        if (bVar12) {
          iVar8 = piVar3[2];
        }
        else {
          iVar8 = piVar3[4];
        }
        if (iVar10 < iVar8) {
          if (bVar12) {
            iVar8 = piVar3[2];
          }
          else {
            iVar8 = piVar3[4];
          }
          uVar9 = uVar11;
          if (iVar8 - iVar10 <= (int)uVar11) {
            if (bVar12) {
              iVar8 = piVar3[2];
            }
            else {
              iVar8 = piVar3[4];
            }
            uVar9 = iVar8 - iVar10;
          }
          if (bVar12) {
            iVar8 = piVar3[1];
          }
          else {
            iVar8 = piVar3[3];
          }
          _SfAudio_Copy_24(param_2,param_1,piVar3 + 10,
                           (uint)*(ushort *)(piVar3 + 0xd) * iVar10 + iVar8,uVar9,0x3f800000);
        }
        if ((((int)uVar11 < (int)in_stack_00000024) && (piVar3[6] != 0)) &&
           (piVar3[5] - iVar10 <= (int)uVar11)) {
          uVar11 = uVar11 + 1;
        }
        iVar5 = iVar5 + uVar11;
        bVar12 = CARRY4(in_stack_0000001c,uVar11);
        in_stack_0000001c = in_stack_0000001c + uVar11;
        in_stack_00000020 = in_stack_00000020 + ((int)uVar11 >> 0x1f) + (uint)bVar12;
        uVar9 = in_stack_00000024 - uVar11;
        if (uVar9 == 0) break;
        param_1 = (int *)((int)param_1 + *(ushort *)(param_2 + 3) * uVar11);
        in_stack_00000024 = uVar9;
      }
      return iVar5;
    }
  }
  return -2;
}


