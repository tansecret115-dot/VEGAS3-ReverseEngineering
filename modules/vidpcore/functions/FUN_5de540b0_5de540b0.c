/* Module: vidpcore.dll
   Function: FUN_5de540b0
   Address: 5de540b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de540b0(int param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *unaff_EBX;
  uint unaff_ESI;
  uint uVar2;
  
  iVar1 = param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x20);
  EnterCriticalSection(lpCriticalSection);
  uVar2 = iVar1 + 0x80;
  param_1 = 0;
  (**(code **)(*param_2 + 0xc))(param_2,uVar2,0x20,&param_1);
  if (unaff_ESI < 0x20) {
    *(undefined4 *)(iVar1 + 0x98) = 0;
    *(undefined4 *)(iVar1 + 0x9c) = 0;
  }
  (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,iVar1 + 0xa0,0x20,&stack0xfffffff4);
  if (uVar2 < 0x20) {
    *(undefined4 *)(iVar1 + 0xb8) = 0;
    *(undefined4 *)(iVar1 + 0xbc) = 0;
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


