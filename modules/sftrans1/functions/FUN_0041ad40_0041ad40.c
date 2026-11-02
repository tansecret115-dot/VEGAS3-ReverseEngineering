/* Module: sftrans1.dll
   Function: FUN_0041ad40
   Address: 0041ad40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041ad40(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  LPCRITICAL_SECTION unaff_ESI;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0xb0),0x38,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_3 + 0xc))(param_3,param_1 + 0xe8,0x38,0);
    if (-1 < iVar1) goto LAB_0041ae45;
  }
  *(undefined4 *)(param_1 + 0xb0) = 0xc28f5c29;
  *(undefined4 *)(param_1 + 0xb8) = 0x9999999a;
  *(undefined4 *)(param_1 + 0xc0) = 0x33333333;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x3fcc28f5;
  *(undefined4 *)(param_1 + 0xbc) = 0x40099999;
  *(undefined4 *)(param_1 + 0xc4) = 0x3fd33333;
  *(undefined4 *)(param_1 + 0xdc) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0xd4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0xcc) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0xe4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0xe8) = 0xc28f5c29;
  *(undefined4 *)(param_1 + 0xf0) = 0x9999999a;
  *(undefined4 *)(param_1 + 0xf8) = 0x33333333;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0x3fcc28f5;
  *(undefined4 *)(param_1 + 0xf4) = 0x40099999;
  *(undefined4 *)(param_1 + 0xfc) = 0x3fd33333;
  *(undefined4 *)(param_1 + 0x114) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x10c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x104) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x11c) = 0x3ff00000;
LAB_0041ae45:
  LeaveCriticalSection(unaff_ESI);
  return iVar1;
}


