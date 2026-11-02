/* Module: sftrans1.dll
   Function: FUN_0040a120
   Address: 0040a120
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040a120(int param_1,int *param_2)

{
  int iVar1;
  int *unaff_EBX;
  LPCRITICAL_SECTION unaff_ESI;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined2 *)(param_1 + 0x80),0x24,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,param_1 + 0xa4,0x24,0);
    if (-1 < iVar1) goto LAB_0040a1d3;
  }
  *(undefined2 *)(param_1 + 0x80) = 0;
  *(undefined2 *)(param_1 + 0x82) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xa0) = 0x3f000000;
  *(undefined2 *)(param_1 + 0xa4) = 0;
  *(undefined2 *)(param_1 + 0xa6) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc0) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xc4) = 0x3f000000;
LAB_0040a1d3:
  LeaveCriticalSection(unaff_ESI);
  return iVar1;
}


