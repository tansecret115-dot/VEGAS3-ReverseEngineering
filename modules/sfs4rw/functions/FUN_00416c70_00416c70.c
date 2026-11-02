/* Module: sfs4rw.dll
   Function: FUN_00416c70
   Address: 00416c70
   Source: Ghidra pseudocode (Stage 10 batch) */


LSTATUS FUN_00416c70(void *param_1,int param_2,int param_3,int param_4)

{
  LSTATUS LVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uchar local_50 [16];
  CHAR local_40 [64];
  
  if (param_1 == (void *)0x0) {
    return -0x7ff8ffa9;
  }
  if (param_4 == 0) {
    pcVar4 = "AppGrade";
    pcVar3 = "AppStyle";
  }
  else {
    pcVar4 = "AppGradeDemo";
    pcVar3 = "AppStyleDemo";
  }
  FUN_00416d10(local_50,param_2);
  LVar1 = FUN_00415940(param_1,pcVar4,local_50);
  if (-1 < LVar1) {
    if ((param_3 == 0) && (iVar2 = FUN_00415920(param_1,pcVar3,local_40,0x40), iVar2 < 0)) {
      return LVar1;
    }
    FUN_00416d10(local_50,param_3);
    LVar1 = FUN_00415940(param_1,"AppStyle",local_50);
  }
  return LVar1;
}


