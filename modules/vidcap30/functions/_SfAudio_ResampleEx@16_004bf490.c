/* Module: vidcap30.exe
   Function: _SfAudio_ResampleEx@16
   Address: 004bf490
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
_SfAudio_ResampleEx_16
          (tSFRESAMPLEINSTANCE *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  tSFRESAMPLEINSTANCE *ptVar1;
  SFSAMPLETYPE SVar2;
  double dVar3;
  tSFRESAMPLEINSTANCE *ptVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float10 extraout_ST0;
  
                    /* 0xbf490  242  _SfAudio_ResampleEx@16 */
  ptVar4 = param_1;
  if (*(int *)(param_1 + 0x1d64) == 0) {
    param_1 = (tSFRESAMPLEINSTANCE *)param_4;
    puVar6 = (undefined4 *)ftol();
    if (_DAT_00587ad0 < *(double *)(ptVar4 + 0x28)) {
      iVar9 = (int)param_4 - 1;
      iVar5 = ftol();
      param_4 = puVar6;
      while (iVar5 < iVar9) {
        param_4 = (undefined4 *)((int)param_4 + 1);
        iVar5 = ftol();
      }
    }
    else {
      iVar5 = (int)param_4 - 1;
      dVar3 = (double)(int)puVar6 * *(double *)(ptVar4 + 0x28) + *(double *)(ptVar4 + 0x20);
      param_4 = puVar6;
      while ((double)iVar5 < dVar3) {
        param_4 = (undefined4 *)((int)param_4 - 1);
        dVar3 = (double)(int)param_4 * *(double *)(ptVar4 + 0x28) + *(double *)(ptVar4 + 0x20);
      }
    }
  }
  else {
    iVar5 = ftol();
    if ((extraout_ST0 != (float10)iVar5) && (extraout_ST0 < (float10)_DAT_00589f10)) {
      ftol();
    }
    puVar6 = (undefined4 *)ftol();
    ptVar1 = param_1 + 0x28;
    param_1 = (tSFRESAMPLEINSTANCE *)puVar6;
    if (*(double *)ptVar1 < _DAT_00587ad0) {
      param_1 = (tSFRESAMPLEINSTANCE *)((int)puVar6 + 1);
    }
  }
  if ((*(int *)(ptVar4 + 0x18) == 0) && (*(int *)(ptVar4 + 0x1c) == 0x3ff00000)) {
    if (param_2 != param_3) {
      iVar5 = FUN_004be0d0(*(undefined4 *)ptVar4);
      uVar7 = iVar5 * *(int *)(ptVar4 + 4) * (int)param_4;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *param_2 = *param_3;
        param_3 = param_3 + 1;
        param_2 = param_2 + 1;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)param_2 = *(undefined1 *)param_3;
        param_3 = (undefined4 *)((int)param_3 + 1);
        param_2 = (undefined4 *)((int)param_2 + 1);
      }
    }
    uVar8 = *(uint *)(ptVar4 + 0x1d38);
    uVar7 = *(uint *)(ptVar4 + 0x1d40);
    *(uint *)(ptVar4 + 0x1d38) = uVar8 + (int)param_1;
    *(uint *)(ptVar4 + 0x1d3c) =
         *(int *)(ptVar4 + 0x1d3c) + ((int)param_1 >> 0x1f) + (uint)CARRY4(uVar8,(uint)param_1);
    *(uint *)(ptVar4 + 0x1d40) = uVar7 + (int)param_4;
    *(uint *)(ptVar4 + 0x1d44) =
         *(int *)(ptVar4 + 0x1d44) + ((int)param_4 >> 0x1f) + (uint)CARRY4(uVar7,(uint)param_4);
    return param_4;
  }
  switch(*(undefined4 *)(ptVar4 + 0x1d60)) {
  case 0:
  case 1:
    *(undefined4 *)(ptVar4 + 0x1d5c) = 0;
  case 2:
    param_3 = (undefined4 *)
              FUN_004be900(*(undefined4 *)ptVar4,*(undefined4 *)(ptVar4 + 4),param_2,param_4,param_3
                           ,param_1,ptVar4);
    break;
  case 3:
    SVar2 = *(SFSAMPLETYPE *)ptVar4;
    if ((SVar2 == 0x20) || (SVar2 == 0x21)) {
      param_3 = (undefined4 *)
                SfAudio_Resample_Sinc
                          (SVar2,*(int *)(ptVar4 + 4),param_2,(long)param_4,param_3,(long)param_1,
                           ptVar4);
    }
    else {
      param_3 = (undefined4 *)
                FUN_004be900(SVar2,*(undefined4 *)(ptVar4 + 4),param_2,param_4,param_3,param_1,
                             ptVar4);
    }
  }
  if ((*(double *)(ptVar4 + 0x28) < _DAT_00587ad0) && (*(int *)(ptVar4 + 0x1d64) != 0)) {
    param_1 = (tSFRESAMPLEINSTANCE *)((int)param_1 - 1);
  }
  uVar8 = *(uint *)(ptVar4 + 0x1d38);
  uVar7 = *(uint *)(ptVar4 + 0x1d40);
  *(uint *)(ptVar4 + 0x1d38) = uVar8 + (int)param_1;
  *(uint *)(ptVar4 + 0x1d3c) =
       *(int *)(ptVar4 + 0x1d3c) + ((int)param_1 >> 0x1f) + (uint)CARRY4(uVar8,(uint)param_1);
  *(undefined1 **)(ptVar4 + 0x1d40) = (undefined1 *)(uVar7 + (int)param_3);
  *(uint *)(ptVar4 + 0x1d44) =
       *(int *)(ptVar4 + 0x1d44) + ((int)param_3 >> 0x1f) + (uint)CARRY4(uVar7,(uint)param_3);
  return param_3;
}


