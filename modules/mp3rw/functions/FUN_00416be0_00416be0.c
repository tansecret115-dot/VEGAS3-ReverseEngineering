/* Module: mp3rw.dll
   Function: FUN_00416be0
   Address: 00416be0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00416be0(void *param_1,int *param_2,int *param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  CHAR local_40 [64];
  
  if ((param_1 != (void *)0x0) && (param_2 != (int *)0x0)) {
    if (param_4 == 0) {
      pcVar1 = "AppGrade";
      pcVar4 = "AppStyle";
    }
    else {
      pcVar1 = "AppGradeDemo";
      pcVar4 = "AppStyleDemo";
    }
    iVar2 = FUN_004159a0(param_1,pcVar1,local_40,0x40);
    if (-1 < iVar2) {
      iVar3 = FUN_0042c550(local_40,(undefined4 *)0x0);
      *param_2 = iVar3;
      iVar3 = FUN_004159a0(param_1,pcVar4,local_40,0x40);
      if (-1 < iVar3) {
        if (param_3 != (int *)0x0) {
          iVar3 = FUN_0042c550(local_40,(undefined4 *)0x0);
          *param_3 = iVar3;
          return iVar2;
        }
        return -0x7ff8ffa9;
      }
      if (param_3 != (int *)0x0) {
        *param_3 = 0;
      }
    }
    return iVar2;
  }
  return -0x7ff8ffa9;
}


