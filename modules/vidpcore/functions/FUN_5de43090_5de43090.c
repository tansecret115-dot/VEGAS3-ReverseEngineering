/* Module: vidpcore.dll
   Function: FUN_5de43090
   Address: 5de43090
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5de43090(int param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  float fVar1;
  int iVar2;
  uint unaff_EDI;
  
  iVar2 = param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x20);
  EnterCriticalSection(lpCriticalSection);
  param_1 = 0;
  (**(code **)(*param_2 + 0xc))(param_2,iVar2 + 0x38,0x14,&param_1);
  if (unaff_EDI < 0x14) {
    if (unaff_EDI == 8) {
      fVar1 = (float)*(int *)(iVar2 + 0x3c) * (float)_DAT_5df1cf50;
      if ((float)_DAT_5df18838 <= fVar1) {
        if ((float)_DAT_5df18830 < fVar1) {
          fVar1 = (float)_DAT_5df18830;
        }
      }
      else {
        fVar1 = (float)_DAT_5df18838;
      }
      *(float *)(iVar2 + 0x40) = fVar1;
    }
    *(undefined4 *)(iVar2 + 0x48) = 0;
    *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(iVar2 + 0x40);
  }
  if (*(HWND *)(iVar2 + 0x9c) != (HWND)0x0) {
    PostMessageA(*(HWND *)(iVar2 + 0x9c),0x111,*(WPARAM *)(iVar2 + 0xa0),0);
  }
  *(undefined4 *)(iVar2 + 0x60) = 1;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


