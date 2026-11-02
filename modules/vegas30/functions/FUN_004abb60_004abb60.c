/* Module: vegas30.exe
   Function: FUN_004abb60
   Address: 004abb60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004abb60(undefined4 param_1,uint *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 != (uint *)0x0) {
    iVar2 = param_3;
    if (param_3 == 0) {
      iVar2 = FUN_004aac00(param_1);
    }
    uVar1 = *param_2;
    if (param_4 == 0) {
      if ((uVar1 & 0x200000) == 0) {
        FUN_004abbe0(param_1,param_2,iVar2);
        *param_2 = *param_2 | 0x200000;
      }
    }
    else if ((uVar1 & 0x200000) != 0) {
      *param_2 = uVar1 & 0xffdfffff;
      FUN_004abc80(param_1,param_2,0,0,0,iVar2);
    }
    if (iVar2 != param_3) {
      FUN_004aac70(param_1,iVar2);
    }
  }
  return;
}


