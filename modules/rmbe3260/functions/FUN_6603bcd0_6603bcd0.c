/* Module: rmbe3260.dll
   Function: FUN_6603bcd0
   Address: 6603bcd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_6603bcd0(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char local_1fa4 [8072];
  undefined4 uStackY_1c;
  
  FUN_66060bf0();
  if (DAT_660753d8 == (void *)0x0) {
    return -0x7ffbff7f;
  }
  iVar3 = 0;
  uStackY_1c = 0x6603bd08;
  iVar1 = vsprintf(local_1fa4,param_1,&stack0x00000008);
  if (iVar1 < 0) {
    iVar3 = -0x7ffbff7e;
  }
  if (iVar3 == 0) {
    iVar2 = FUN_6604fb20(DAT_660753d8,(int)local_1fa4,iVar1);
    if (iVar2 != iVar1) {
      iVar3 = -0x7ffbff7e;
    }
  }
  return iVar3;
}


