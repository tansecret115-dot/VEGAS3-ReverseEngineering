/* Module: vidpcore.dll
   Function: FUN_5de32a30
   Address: 5de32a30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de32a30(int param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int *unaff_EBX;
  
  iVar1 = param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1c);
  EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)(iVar1 + 0xb0) = 0x3f000000;
  *(undefined4 *)(iVar1 + 0xb4) = 0x3f000000;
  *(undefined4 *)(iVar1 + 0xb8) = 0;
  *(undefined4 *)(iVar1 + 0xbc) = 0;
  *(undefined4 *)(iVar1 + 0xc0) = 0;
  *(undefined4 *)(iVar1 + 0xcc) = 0;
  *(undefined4 *)(iVar1 + 200) = 0;
  *(undefined4 *)(iVar1 + 0xc4) = 0;
  *(undefined4 *)(iVar1 + 0xd0) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0xd4) = 1;
  *(undefined4 *)(iVar1 + 0xd8) = 1;
  *(undefined4 *)(iVar1 + 0xdc) = 0;
  *(undefined4 *)(iVar1 + 0xe0) = 0;
  *(undefined4 *)(iVar1 + 0xe8) = 0x3d4ccccd;
  *(undefined4 *)(iVar1 + 0xe4) = 1;
  param_1 = 0;
  (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(iVar1 + 0xb0),0x3c,&param_1);
  *(undefined4 *)(iVar1 + 0xf4) = 0;
  *(undefined4 *)(iVar1 + 0xf8) = 0;
  *(undefined4 *)(iVar1 + 0xfc) = 0;
  *(undefined4 *)(iVar1 + 0x108) = 0;
  *(undefined4 *)(iVar1 + 0x104) = 0;
  *(undefined4 *)(iVar1 + 0x100) = 0;
  *(undefined4 *)(iVar1 + 0x118) = 0;
  *(undefined4 *)(iVar1 + 0x11c) = 0;
  *(undefined4 *)(iVar1 + 0xec) = 0x3f000000;
  *(undefined4 *)(iVar1 + 0xf0) = 0x3f000000;
  *(undefined4 *)(iVar1 + 0x10c) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x110) = 1;
  *(undefined4 *)(iVar1 + 0x114) = 1;
  *(undefined4 *)(iVar1 + 0x124) = 0x3d4ccccd;
  *(undefined4 *)(iVar1 + 0x120) = 1;
  (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,(undefined4 *)(iVar1 + 0xec),0x3c,&stack0xfffffff8);
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


