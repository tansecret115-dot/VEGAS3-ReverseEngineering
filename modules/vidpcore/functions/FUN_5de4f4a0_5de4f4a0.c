/* Module: vidpcore.dll
   Function: FUN_5de4f4a0
   Address: 5de4f4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5de4f4a0(int param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  float fVar1;
  int iVar2;
  uint unaff_EDI;
  
  iVar2 = param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x20);
  EnterCriticalSection(lpCriticalSection);
  param_1 = 0;
  (**(code **)(*param_2 + 0xc))(param_2,(int *)(iVar2 + 0x38),0x14,&param_1);
  if (0x13 < unaff_EDI) goto LAB_5de4f550;
  fVar1 = (float)*(int *)(iVar2 + 0x38);
  if (unaff_EDI < 8) {
    fVar1 = fVar1 * (float)_DAT_5df1de20;
    if ((float)_DAT_5df18838 <= fVar1) {
      if ((float)_DAT_5df18830 < fVar1) {
LAB_5de4f534:
        fVar1 = (float)_DAT_5df18830;
      }
    }
    else {
      fVar1 = (float)_DAT_5df18838;
    }
  }
  else {
    fVar1 = fVar1 * (float)_DAT_5df1de18;
    if ((float)_DAT_5df18838 <= fVar1) {
      if ((float)_DAT_5df18830 < fVar1) goto LAB_5de4f534;
    }
    else {
      fVar1 = (float)_DAT_5df18838;
    }
  }
  *(float *)(iVar2 + 0x3c) = fVar1;
  *(float *)(iVar2 + 0x40) = fVar1;
  *(undefined4 *)(iVar2 + 0x44) = 0;
  *(undefined4 *)(iVar2 + 0x48) = 0x3f000000;
LAB_5de4f550:
  if (*(HWND *)(iVar2 + 0x9c) != (HWND)0x0) {
    PostMessageA(*(HWND *)(iVar2 + 0x9c),0x111,*(WPARAM *)(iVar2 + 0xa0),0);
  }
  *(undefined4 *)(iVar2 + 0x60) = 1;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


