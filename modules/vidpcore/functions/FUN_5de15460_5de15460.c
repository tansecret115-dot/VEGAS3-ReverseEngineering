/* Module: vidpcore.dll
   Function: FUN_5de15460
   Address: 5de15460
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de15460(int param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *unaff_EBX;
  
  iVar1 = param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1c);
  EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)(iVar1 + 0xcc) = 1;
  *(undefined4 *)(iVar1 + 0xd0) = 1;
  *(undefined4 *)(iVar1 + 0xa8) = 0x3f000000;
  *(undefined4 *)(iVar1 + 0xac) = 0x3f000000;
  *(undefined4 *)(iVar1 + 0xb0) = 0;
  *(undefined4 *)(iVar1 + 0xb4) = 0;
  *(undefined4 *)(iVar1 + 0xb8) = 0;
  *(undefined4 *)(iVar1 + 0xc4) = 0;
  *(undefined4 *)(iVar1 + 0xc0) = 0;
  *(undefined4 *)(iVar1 + 0xbc) = 0;
  *(undefined4 *)(iVar1 + 200) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0xd4) = 0;
  *(undefined4 *)(iVar1 + 0xd8) = 0;
  *(undefined4 *)(iVar1 + 0xdc) = 0;
  param_1 = 0;
  (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(iVar1 + 0xa8),0x38,&param_1);
  *(undefined4 *)(iVar1 + 0xe8) = 0;
  *(undefined4 *)(iVar1 + 0xec) = 0;
  *(undefined4 *)(iVar1 + 0xf0) = 0;
  *(undefined4 *)(iVar1 + 0xfc) = 0;
  *(undefined4 *)(iVar1 + 0xf8) = 0;
  *(undefined4 *)(iVar1 + 0xf4) = 0;
  *(undefined4 *)(iVar1 + 0x10c) = 0;
  *(undefined4 *)(iVar1 + 0x110) = 0;
  *(undefined4 *)(iVar1 + 0x114) = 0;
  *(undefined4 *)(iVar1 + 0x104) = 1;
  *(undefined4 *)(iVar1 + 0x108) = 1;
  *(undefined4 *)(iVar1 + 0xe0) = 0x3f000000;
  *(undefined4 *)(iVar1 + 0xe4) = 0x3f000000;
  *(undefined4 *)(iVar1 + 0x100) = 0x3f800000;
  (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,(undefined4 *)(iVar1 + 0xe0),0x38,&stack0xfffffff4);
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


