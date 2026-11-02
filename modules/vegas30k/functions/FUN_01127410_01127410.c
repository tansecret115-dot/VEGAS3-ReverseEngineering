/* Module: vegas30k.dll
   Function: FUN_01127410
   Address: 01127410
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01127410(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_01155e40(1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = setjmp3(iVar1,0);
  if (iVar2 != 0) {
    FUN_01155ef0(iVar1,*(undefined4 *)(iVar1 + 0xa4));
    FUN_01155e90(iVar1);
    return 0;
  }
  FUN_01156140(iVar1,param_2,param_3,param_4);
  if (((param_1 == (char *)0x0) || (*param_1 != s_1_0_2_01206fa8[0])) ||
     ((s_1_0_2_01206fa8[0] == '0' && (param_1[2] < '9')))) {
    FUN_01155f80(iVar1,"Incompatible libpng version in application and library");
  }
  *(undefined4 *)(iVar1 + 0xa8) = 0x2000;
  uVar3 = FUN_01155eb0(iVar1,0x2000);
  *(undefined4 *)(iVar1 + 0xa4) = uVar3;
  FUN_0115b3d0(iVar1,0,0,0);
  FUN_01127c10(iVar1,0,1,0,0);
  return iVar1;
}


