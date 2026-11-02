/* Module: sftrans1.dll
   Function: FUN_00410b40
   Address: 00410b40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00410b40(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  LPCRITICAL_SECTION unaff_ESI;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0xc0),0x40,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_3 + 0xc))(param_3,param_1 + 0x100,0x40,0);
    if (-1 < iVar1) goto LAB_00410c3d;
  }
  *(undefined4 *)(param_1 + 0xc0) = 1;
  *(undefined4 *)(param_1 + 0xc4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf8) = 2;
  *(undefined4 *)(param_1 + 200) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xd0) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xd8) = 0x40800000;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0xec) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x100) = 1;
  *(undefined4 *)(param_1 + 0x104) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x138) = 2;
  *(undefined4 *)(param_1 + 0x108) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x10c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x110) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x114) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x118) = 0x40800000;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0x3ff00000;
  *(undefined4 *)(param_1 + 300) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0x3ff00000;
LAB_00410c3d:
  LeaveCriticalSection(unaff_ESI);
  return iVar1;
}


