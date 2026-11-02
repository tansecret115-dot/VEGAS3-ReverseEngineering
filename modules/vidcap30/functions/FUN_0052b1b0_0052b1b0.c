/* Module: vidcap30.exe
   Function: FUN_0052b1b0
   Address: 0052b1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0052b1b0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00549400(1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = setjmp3(iVar1,0);
  if (iVar2 != 0) {
    FUN_005494b0(iVar1,*(undefined4 *)(iVar1 + 0xa4));
    FUN_00549450(iVar1);
    return 0;
  }
  FUN_00549700(iVar1,param_2,param_3,param_4);
  if (((param_1 == (char *)0x0) || (*param_1 != s_1_0_2_005b8998[0])) ||
     ((s_1_0_2_005b8998[0] == '0' && (param_1[2] < '9')))) {
    FUN_00549540(iVar1,"Incompatible libpng version in application and library");
  }
  *(undefined4 *)(iVar1 + 0xa8) = 0x2000;
  uVar3 = FUN_00549470(iVar1,0x2000);
  *(undefined4 *)(iVar1 + 0xa4) = uVar3;
  FUN_0054eae0(iVar1,0,0,0);
  FUN_0052b9b0(iVar1,0,1,0,0);
  return iVar1;
}


