/* Module: vidpcore.dll
   Function: FUN_5de4c390
   Address: 5de4c390
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de4c390(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  LPCRITICAL_SECTION unaff_ESI;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0xa0),0x30,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_3 + 0xc))(param_3,param_1 + 0xd0,0x30,0);
    if (-1 < iVar1) goto LAB_5de4c45f;
  }
  *(undefined4 *)(param_1 + 0xa0) = 0x9999999a;
  *(undefined4 *)(param_1 + 0xa8) = 0x9999999a;
  *(undefined4 *)(param_1 + 0xb0) = 0x9999999a;
  *(undefined4 *)(param_1 + 0xb8) = 0x9999999a;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0x40159999;
  *(undefined4 *)(param_1 + 0xac) = 0x40159999;
  *(undefined4 *)(param_1 + 0xb4) = 0x3fa99999;
  *(undefined4 *)(param_1 + 0xbc) = 0x3fa99999;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0x9999999a;
  *(undefined4 *)(param_1 + 0xd8) = 0x9999999a;
  *(undefined4 *)(param_1 + 0xe0) = 0x9999999a;
  *(undefined4 *)(param_1 + 0xe8) = 0x9999999a;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0x40159999;
  *(undefined4 *)(param_1 + 0xdc) = 0x40159999;
  *(undefined4 *)(param_1 + 0xe4) = 0x3fa99999;
  *(undefined4 *)(param_1 + 0xec) = 0x3fa99999;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
LAB_5de4c45f:
  LeaveCriticalSection(unaff_ESI);
  return iVar1;
}


