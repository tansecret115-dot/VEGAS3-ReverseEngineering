/* Module: mp3rw.dll
   Function: FUN_0044cbb0
   Address: 0044cbb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_0044cbb0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  
  piVar1 = FUN_00475a10(1);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar2 = setjmp3(piVar1,0);
  if (iVar2 != 0) {
    FUN_00475ac0((int)piVar1,(void *)piVar1[0x29]);
    FUN_00475a60(piVar1);
    return (int *)0x0;
  }
  FUN_00475d10((int)piVar1,param_2,param_3,param_4);
  if (((param_1 == (char *)0x0) || (*param_1 != s_1_0_2_004a6df8[0])) ||
     ((s_1_0_2_004a6df8[0] == '0' && (param_1[2] < '9')))) {
    FUN_00475b50(piVar1,"Incompatible libpng version in application and library");
  }
  piVar1[0x2a] = 0x2000;
  pvVar3 = FUN_00475a80(piVar1,0x2000);
  piVar1[0x29] = (int)pvVar3;
  FUN_0047afa0((int)piVar1,0,0,0);
  FUN_0044d3b0(piVar1,0,1,(double *)0x0,(double *)0x0);
  return piVar1;
}


