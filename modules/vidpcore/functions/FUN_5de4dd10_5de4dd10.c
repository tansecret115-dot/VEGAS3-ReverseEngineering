/* Module: vidpcore.dll
   Function: FUN_5de4dd10
   Address: 5de4dd10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de4dd10(int param_1,int *param_2)

{
  int iVar1;
  int *unaff_EBX;
  LPCRITICAL_SECTION unaff_ESI;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0xb0),0x38,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,param_1 + 0xe8,0x38,0);
    if (-1 < iVar1) goto LAB_5de4ddfc;
  }
  *(undefined4 *)(param_1 + 0xb8) = 0x3dc0c0c1;
  *(undefined4 *)(param_1 + 0xb4) = 0x3e8e8e8f;
  *(undefined4 *)(param_1 + 0xb0) = 0x3f71f1f2;
  *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0x3dc0c0c1;
  *(undefined4 *)(param_1 + 0xec) = 0x3e8e8e8f;
  *(undefined4 *)(param_1 + 0xe8) = 0x3f71f1f2;
  *(undefined4 *)(param_1 + 0xf4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x108) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
LAB_5de4ddfc:
  LeaveCriticalSection(unaff_ESI);
  return iVar1;
}


