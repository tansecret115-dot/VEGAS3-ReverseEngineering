/* Module: vidpcore.dll
   Function: FUN_5de510a0
   Address: 5de510a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de510a0(int param_1,int *param_2)

{
  int iVar1;
  int *unaff_EBX;
  LPCRITICAL_SECTION unaff_ESI;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0x80),0x20,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,param_1 + 0xa0,0x20,0);
    if (-1 < iVar1) goto LAB_5de51134;
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 1;
  *(undefined4 *)(param_1 + 0xb8) = 0;
LAB_5de51134:
  LeaveCriticalSection(unaff_ESI);
  return iVar1;
}


