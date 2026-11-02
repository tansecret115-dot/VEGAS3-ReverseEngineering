/* Module: aviplug.dll
   Function: FUN_5f967280
   Address: 5f967280
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f967280(undefined4 *param_1,int param_2)

{
  LPVOID pvVar1;
  int iVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return -0x7fffbffd;
  }
  iVar2 = 0;
  pvVar1 = VirtualAlloc((LPVOID)0x0,0x4740,0x3000,4);
  if (pvVar1 == (LPVOID)0x0) {
    FUN_5f967300((LPVOID)0x0);
    *param_1 = 0;
    return -0x7ff8fff2;
  }
  if (param_2 == 0) {
LAB_5f9672c3:
    FUN_5f967240((int)pvVar1);
    if (-1 < iVar2) goto LAB_5f9672d3;
  }
  else {
    iVar2 = FUN_5f967330((uint)pvVar1);
    if (-1 < iVar2) goto LAB_5f9672c3;
  }
  FUN_5f967300(pvVar1);
LAB_5f9672d3:
  *param_1 = pvVar1;
  return iVar2;
}


