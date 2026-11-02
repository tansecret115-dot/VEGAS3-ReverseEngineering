/* Module: vidpcore.dll
   Function: FUN_5de43290
   Address: 5de43290
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5de43290(int param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  float fVar1;
  int iVar2;
  int *unaff_EBX;
  uint unaff_ESI;
  uint uVar3;
  
  iVar2 = param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x20);
  EnterCriticalSection(lpCriticalSection);
  uVar3 = iVar2 + 100;
  param_1 = 0;
  (**(code **)(*param_2 + 0xc))(param_2,uVar3,0x14,&param_1);
  if (unaff_ESI < 0x14) {
    if (unaff_ESI == 8) {
      fVar1 = (float)*(int *)(iVar2 + 0x68) * (float)_DAT_5df1cf50;
      if ((float)_DAT_5df18838 <= fVar1) {
        if ((float)_DAT_5df18830 < fVar1) {
          fVar1 = (float)_DAT_5df18830;
        }
      }
      else {
        fVar1 = (float)_DAT_5df18838;
      }
      *(float *)(iVar2 + 0x6c) = fVar1;
    }
    *(undefined4 *)(iVar2 + 0x74) = 0;
    *(undefined4 *)(iVar2 + 0x70) = *(undefined4 *)(iVar2 + 0x6c);
  }
  (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,iVar2 + 0x78,0x14,&stack0xfffffff4);
  if (uVar3 < 0x14) {
    if (uVar3 == 8) {
      fVar1 = (float)*(int *)(iVar2 + 0x7c) * (float)_DAT_5df1cf50;
      if ((float)_DAT_5df18838 <= fVar1) {
        if ((float)_DAT_5df18830 < fVar1) {
          fVar1 = (float)_DAT_5df18830;
        }
      }
      else {
        fVar1 = (float)_DAT_5df18838;
      }
      *(float *)(iVar2 + 0x80) = fVar1;
    }
    *(undefined4 *)(iVar2 + 0x88) = 0;
    *(undefined4 *)(iVar2 + 0x84) = *(undefined4 *)(iVar2 + 0x80);
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


