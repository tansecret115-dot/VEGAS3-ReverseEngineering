/* Module: vidpcore.dll
   Function: FUN_5de177e0
   Address: 5de177e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de177e0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  LPCRITICAL_SECTION unaff_ESI;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0xa0),0x30,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_3 + 0xc))(param_3,param_1 + 0xd0,0x30,0);
    if (-1 < iVar1) goto LAB_5de178ba;
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0x28f5c28f;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0x3fe00000;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0xc4) = 0x40008f5c;
  *(undefined4 *)(param_1 + 200) = 4;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0x28f5c28f;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0x3fe00000;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0xf4) = 0x40008f5c;
  *(undefined4 *)(param_1 + 0xf8) = 4;
LAB_5de178ba:
  LeaveCriticalSection(unaff_ESI);
  return iVar1;
}


