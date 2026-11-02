/* Module: vegas30k.dll
   Function: FUN_01159a30
   Address: 01159a30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01159a30(undefined4 param_1,int param_2,char *param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 != 0) &&
     (iVar2 = FUN_011598b0(param_1,param_2,&param_2), pcVar1 = param_3, iVar2 != 0)) {
    if ((param_3 == (char *)0x0) || (iVar3 = param_4, *param_3 == '\0')) {
      iVar3 = 0;
    }
    FUN_01158d00(param_1,&DAT_01207024,iVar2 + 1 + iVar3);
    FUN_01158d50(param_1,param_2,iVar2 + 1);
    if (iVar3 != 0) {
      FUN_01158d50(param_1,pcVar1,iVar3);
    }
    FUN_01158d80(param_1);
    FUN_01155ef0(param_1,param_2);
    return;
  }
  FUN_01155fb0(param_1,"Empty keyword in tEXt chunk");
  return;
}


