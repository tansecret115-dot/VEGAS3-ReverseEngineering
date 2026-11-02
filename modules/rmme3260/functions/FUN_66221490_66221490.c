/* Module: rmme3260.dll
   Function: FUN_66221490
   Address: 66221490
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_66221490(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char local_1fa4 [8072];
  undefined4 uStackY_1c;
  
  FUN_66269330();
  if (DAT_6627f0c8 == (void *)0x0) {
    return -0x7ffbff7f;
  }
  iVar3 = 0;
  uStackY_1c = 0x662214c8;
  iVar1 = vsprintf(local_1fa4,param_1,&stack0x00000008);
  if (iVar1 < 0) {
    iVar3 = -0x7ffbff7e;
  }
  if (iVar3 == 0) {
    iVar2 = FUN_66257300(DAT_6627f0c8,(int)local_1fa4,iVar1);
    if (iVar2 != iVar1) {
      iVar3 = -0x7ffbff7e;
    }
  }
  return iVar3;
}


