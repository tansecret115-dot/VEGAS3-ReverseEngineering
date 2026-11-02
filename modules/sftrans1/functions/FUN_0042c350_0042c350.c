/* Module: sftrans1.dll
   Function: FUN_0042c350
   Address: 0042c350
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042c350(int param_1,int *param_2)

{
  int iVar1;
  int *unaff_EBX;
  LPCRITICAL_SECTION unaff_ESI;
  LPCRITICAL_SECTION lpCriticalSection;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0x7a0),0x3b4,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,param_1 + 0xb54,0x3b4,0);
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1c);
    if (-1 < iVar1) goto LAB_0042c457;
  }
  *(undefined4 *)(param_1 + 0x7a0) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x7a4) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xb34) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x7a8) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xb38) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb40) = 0;
  *(undefined4 *)(param_1 + 0xb3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb44) = 0;
  *(undefined4 *)(param_1 + 0xb50) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb48) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb4c) = 0x3f800000;
  FUN_0042c470();
  FUN_0042bb00();
  *(undefined4 *)(param_1 + 0xb54) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xb58) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xee8) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xb5c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xeec) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xef4) = 0;
  *(undefined4 *)(param_1 + 0xef0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xef8) = 0;
  *(undefined4 *)(param_1 + 0xf04) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xefc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf00) = 0x3f800000;
  FUN_0042c470();
  FUN_0042bb00();
  lpCriticalSection = unaff_ESI;
LAB_0042c457:
  LeaveCriticalSection(lpCriticalSection);
  return iVar1;
}


