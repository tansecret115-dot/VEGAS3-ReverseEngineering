/* Module: sftrans1.dll
   Function: FUN_0040e780
   Address: 0040e780
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040e780(int param_1,int *param_2)

{
  int iVar1;
  int *unaff_EBX;
  LPCRITICAL_SECTION unaff_ESI;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0x90),0x2c,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,param_1 + 0xbc,0x2c,0);
    if (-1 < iVar1) goto LAB_0040e83d;
  }
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb8) = 0x42480000;
  *(undefined4 *)(param_1 + 0x94) = 1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe4) = 0x42480000;
  *(undefined4 *)(param_1 + 0xc0) = 1;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
LAB_0040e83d:
  LeaveCriticalSection(unaff_ESI);
  return iVar1;
}


