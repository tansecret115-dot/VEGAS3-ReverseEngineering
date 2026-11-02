/* Module: vidcap30.exe
   Function: FUN_00524bd0
   Address: 00524bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00524bd0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
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
     ((*param_1 == '0' && (param_1[2] < '9')))) {
    FUN_00549540(iVar1,"Incompatible libpng version in application and library");
  }
  *(undefined4 *)(iVar1 + 0xa8) = 0x2000;
  uVar3 = FUN_00549470(iVar1,0x2000);
  *(undefined4 *)(iVar1 + 0xa4) = uVar3;
  *(code **)(iVar1 + 0x8c) = FUN_0052aab0;
  *(code **)(iVar1 + 0x90) = FUN_0052ab10;
  *(int *)(iVar1 + 0x94) = iVar1;
  uVar3 = FUN_00548e20(iVar1 + 0x6c,"1.1.3",0x38);
  switch(uVar3) {
  case 0:
    goto switchD_00524ca3_caseD_0;
  case 0xfffffffa:
    pcVar4 = "zlib version error";
    break;
  default:
    pcVar4 = "Unknown zlib error";
    break;
  case 0xfffffffc:
  case 0xfffffffe:
    pcVar4 = "zlib memory error";
  }
  FUN_00549540(iVar1,pcVar4);
switchD_00524ca3_caseD_0:
  *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(iVar1 + 0xa4);
  *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(iVar1 + 0xa8);
  FUN_0052ad60(iVar1,0,0);
  return iVar1;
}


