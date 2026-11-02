/* Module: vidpcore.dll
   Function: FUN_5de3e840
   Address: 5de3e840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de3e840(int param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *unaff_EBX;
  uint unaff_ESI;
  uint uVar2;
  
  iVar1 = param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x20);
  EnterCriticalSection(lpCriticalSection);
  uVar2 = iVar1 + 0x70;
  param_1 = 0;
  (**(code **)(*param_2 + 0xc))(param_2,uVar2,0x18,&param_1);
  if (unaff_ESI < 0x18) {
    *(undefined4 *)(iVar1 + 0x80) = 0;
    *(undefined4 *)(iVar1 + 0x84) = 0x3fe00000;
  }
  (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,iVar1 + 0x88,0x18,&stack0xfffffff4);
  if (uVar2 < 0x18) {
    *(undefined4 *)(iVar1 + 0x98) = 0;
    *(undefined4 *)(iVar1 + 0x9c) = 0x3fe00000;
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


