/* Module: vidpcore.dll
   Function: FUN_5de4f760
   Address: 5de4f760
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5de4f760(int param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  float fVar2;
  int iVar3;
  int *unaff_EBX;
  uint unaff_ESI;
  int *piVar4;
  
  iVar3 = param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x20);
  EnterCriticalSection(lpCriticalSection);
  piVar1 = (int *)(iVar3 + 100);
  param_1 = 0;
  piVar4 = piVar1;
  (**(code **)(*param_2 + 0xc))(param_2,piVar1,0x14,&param_1);
  if (unaff_ESI < 0x14) {
    if (unaff_ESI < 8) {
      fVar2 = (float)*piVar1 * (float)_DAT_5df1de20;
      if ((float)_DAT_5df18838 <= fVar2) {
        if ((float)_DAT_5df18830 < fVar2) {
LAB_5de4f7f3:
          fVar2 = (float)_DAT_5df18830;
        }
      }
      else {
        fVar2 = (float)_DAT_5df18838;
      }
    }
    else {
      fVar2 = (float)*piVar1 * (float)_DAT_5df1de18;
      if ((float)_DAT_5df18838 <= fVar2) {
        if ((float)_DAT_5df18830 < fVar2) goto LAB_5de4f7f3;
      }
      else {
        fVar2 = (float)_DAT_5df18838;
      }
    }
    *(float *)(iVar3 + 0x68) = fVar2;
    *(float *)(iVar3 + 0x6c) = fVar2;
    *(undefined4 *)(iVar3 + 0x70) = 0;
    *(undefined4 *)(iVar3 + 0x74) = 0x3f000000;
  }
  (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,(int *)(iVar3 + 0x78),0x14,&stack0xfffffff4);
  if ((int *)0x13 < piVar4) goto LAB_5de4f8a2;
  fVar2 = (float)*(int *)(iVar3 + 0x78);
  if (piVar4 < (int *)0x8) {
    fVar2 = fVar2 * (float)_DAT_5df1de20;
    if ((float)_DAT_5df18838 <= fVar2) {
      if ((float)_DAT_5df18830 < fVar2) {
LAB_5de4f88a:
        fVar2 = (float)_DAT_5df18830;
      }
    }
    else {
      fVar2 = (float)_DAT_5df18838;
    }
  }
  else {
    fVar2 = fVar2 * (float)_DAT_5df1de18;
    if ((float)_DAT_5df18838 <= fVar2) {
      if ((float)_DAT_5df18830 < fVar2) goto LAB_5de4f88a;
    }
    else {
      fVar2 = (float)_DAT_5df18838;
    }
  }
  *(float *)(iVar3 + 0x7c) = fVar2;
  *(float *)(iVar3 + 0x80) = fVar2;
  *(undefined4 *)(iVar3 + 0x84) = 0;
  *(undefined4 *)(iVar3 + 0x88) = 0x3f000000;
LAB_5de4f8a2:
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


