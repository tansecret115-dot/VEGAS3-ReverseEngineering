/* Module: vidpcore.dll
   Function: FUN_5de4fa10
   Address: 5de4fa10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5de4fa10(int param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  float fVar2;
  int iVar3;
  uint unaff_EDI;
  
  iVar3 = param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1c);
  EnterCriticalSection(lpCriticalSection);
  param_1 = 0;
  (**(code **)(*param_2 + 0xc))(param_2,(int *)(iVar3 + 0x34),0x14,&param_1);
  if (0x13 < unaff_EDI) goto LAB_5de4fac0;
  fVar2 = (float)*(int *)(iVar3 + 0x34);
  if (unaff_EDI < 8) {
    fVar2 = fVar2 * (float)_DAT_5df1de20;
    if ((float)_DAT_5df18838 <= fVar2) {
      if ((float)_DAT_5df18830 < fVar2) {
LAB_5de4faa4:
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
      if ((float)_DAT_5df18830 < fVar2) goto LAB_5de4faa4;
    }
    else {
      fVar2 = (float)_DAT_5df18838;
    }
  }
  *(float *)(iVar3 + 0x38) = fVar2;
  *(float *)(iVar3 + 0x3c) = fVar2;
  *(undefined4 *)(iVar3 + 0x40) = 0;
  *(undefined4 *)(iVar3 + 0x44) = 0x3f000000;
LAB_5de4fac0:
  *(undefined4 *)(iVar3 + 0x5c) = 1;
  if (*(HWND *)(iVar3 + 0x98) != (HWND)0x0) {
    PostMessageA(*(HWND *)(iVar3 + 0x98),0x111,*(WPARAM *)(iVar3 + 0x9c),0);
  }
  piVar1 = *(int **)(iVar3 + 0x94);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


