/* Module: g2plug.dll
   Function: SfG2GetFramesPerSec
   Address: 5f80a300
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfG2GetFramesPerSec(struct _GUID *,double *) */

long SfG2GetFramesPerSec(_GUID *param_1,double *param_2)

{
  double dVar1;
  long lVar2;
  HGLOBAL pvVar3;
  uint uVar4;
  int *piVar5;
  int *local_680;
  int local_67c;
  uint local_678;
  SFG2_PARAMS local_674 [312];
  ulong local_53c;
  int local_534;
  int local_52c;
  
                    /* 0xa300  18  ?SfG2GetFramesPerSec@@YGJPAU_GUID@@PAN@Z */
  local_680 = (int *)0x0;
  lVar2 = SfG2GetCodecInfo(*param_1,(uchar **)&local_680,&local_678);
  if (lVar2 < 0) {
    lVar2 = G2LoadRegistryTemplate(param_1,local_674,(SFG2TEMPLATE_DESCRIPTION *)0x0);
    if (-1 < lVar2) {
      lVar2 = SfRealG2_GetTargetData(local_53c,local_534,local_52c,(uchar **)&local_680,&local_678);
      if (-1 < lVar2) goto LAB_5f80a38e;
    }
    lVar2 = 1;
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((int)param_2 + 4) = 0;
  }
  else {
LAB_5f80a38e:
    piVar5 = local_680;
    if (local_680[1] != 100) {
      pvVar3 = GlobalHandle(local_680);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(piVar5);
      GlobalFree(pvVar3);
      return -0x7ff8ffa9;
    }
    if (*local_680 != 0x10) {
      pvVar3 = GlobalHandle(local_680);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(piVar5);
      GlobalFree(pvVar3);
      return -0x7ff8ffa9;
    }
    uVar4 = 0x10;
    if (local_678 < 0x10) {
LAB_5f80a40d:
      lVar2 = -0x7ff8ffa9;
    }
    else {
      local_67c = 0;
      piVar5 = local_680 + 4;
      dVar1 = _DAT_5f86b0d0;
      if (-1 < lVar2) {
        for (; local_67c < local_680[2]; local_67c = local_67c + 1) {
          uVar4 = uVar4 + *piVar5;
          if (local_678 < uVar4) goto LAB_5f80a40d;
          if (dVar1 < (double)(float)piVar5[0xb]) {
            dVar1 = (double)(float)piVar5[0xb];
          }
          piVar5 = (int *)((int)piVar5 + *piVar5);
        }
      }
      *param_2 = dVar1;
    }
  }
  if (local_680 != (int *)0x0) {
    pvVar3 = GlobalHandle(local_680);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(local_680);
    GlobalFree(pvVar3);
  }
  return lVar2;
}


