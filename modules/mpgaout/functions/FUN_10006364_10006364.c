/* Module: mpgaout.dll
   Function: FUN_10006364
   Address: 10006364
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10006364(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (param_5[1] == 1) {
    *(undefined4 *)(*param_5 + 0x1c) = 0;
    *(undefined4 *)(*param_5 + 0x20) = 0;
    param_5[5] = param_5[6];
    iVar1 = FUN_100044a8(param_1,param_2,(int)param_5);
    if (*param_4 < iVar1) {
      iVar1 = 4;
      *(undefined4 *)(*param_5 + 0x1c) = 1;
      piVar3 = (int *)(&DAT_1001e2e0 + *(int *)(*param_5 + 4) * 0x10);
      do {
        piVar3 = piVar3 + -1;
        iVar1 = iVar1 + -1;
        param_5[5] = *piVar3;
        iVar2 = FUN_100044a8(param_1,param_2,(int)param_5);
        if (iVar2 <= *param_4) break;
      } while (0 < iVar1);
      *(int *)(*param_5 + 0x20) = iVar1;
    }
  }
  FUN_10004888(param_1,param_2,param_3,param_4,(int)param_5);
  return;
}


