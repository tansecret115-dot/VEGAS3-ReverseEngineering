/* Module: mpgaout.dll
   Function: FUN_1000641c
   Address: 1000641c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000641c(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (param_6[1] == 1) {
    *(undefined4 *)(*param_6 + 0x1c) = 0;
    *(undefined4 *)(*param_6 + 0x20) = 0;
    param_6[5] = param_6[6];
    iVar1 = FUN_10004614(param_1,param_2,param_3,(int)param_6);
    if (*param_5 < iVar1) {
      *(undefined4 *)(*param_6 + 0x1c) = 1;
      piVar3 = (int *)(&DAT_1001e2e0 + *(int *)(*param_6 + 4) * 0x10);
      iVar1 = 4;
      do {
        piVar3 = piVar3 + -1;
        iVar1 = iVar1 + -1;
        param_6[5] = *piVar3;
        iVar2 = FUN_10004614(param_1,param_2,param_3,(int)param_6);
        if (iVar2 <= *param_5) break;
      } while (0 < iVar1);
      *(int *)(*param_6 + 0x20) = iVar1;
    }
  }
  FUN_10004bb8(param_1,param_2,param_3,param_4,param_5,(int)param_6);
  return;
}


