/* Module: vidpcore.dll
   Function: FUN_5de2f900
   Address: 5de2f900
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de2f900(int param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *unaff_EBX;
  uint unaff_ESI;
  uint uVar2;
  
  iVar1 = param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1c);
  EnterCriticalSection(lpCriticalSection);
  uVar2 = iVar1 + 0x80;
  param_1 = 0;
  (**(code **)(*param_2 + 0xc))(param_2,uVar2,0x24,&param_1);
  if (unaff_ESI < 0x24) {
    *(undefined4 *)(iVar1 + 0xa0) = 0;
  }
  (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,iVar1 + 0xa4,0x24,&stack0xfffffff4);
  if (uVar2 < 0x24) {
    *(undefined4 *)(iVar1 + 0xc4) = 0;
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


