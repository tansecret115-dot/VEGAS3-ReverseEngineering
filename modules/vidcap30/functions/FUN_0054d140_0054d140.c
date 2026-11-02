/* Module: vidcap30.exe
   Function: FUN_0054d140
   Address: 0054d140
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054d140(undefined4 param_1,int param_2,char *param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 != 0) &&
     (iVar2 = FUN_0054cfc0(param_1,param_2,&param_2), pcVar1 = param_3, iVar2 != 0)) {
    if ((param_3 == (char *)0x0) || (iVar3 = param_4, *param_3 == '\0')) {
      iVar3 = 0;
    }
    FUN_0054c410(param_1,&DAT_005b8a14,iVar2 + 1 + iVar3);
    FUN_0054c460(param_1,param_2,iVar2 + 1);
    if (iVar3 != 0) {
      FUN_0054c460(param_1,pcVar1,iVar3);
    }
    FUN_0054c490(param_1);
    FUN_005494b0(param_1,param_2);
    return;
  }
  FUN_00549570(param_1,"Empty keyword in tEXt chunk");
  return;
}


