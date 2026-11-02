/* Module: erv23260.dll
   Function: FUN_638157c0
   Address: 638157c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_638157c0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = param_1;
  iVar2 = param_8 * param_4 + param_3 + param_2;
  if (0 < param_6) {
    param_1 = (undefined4 *)param_6;
    do {
      if (0 < param_5 >> 2) {
        puVar1 = puVar3;
        iVar4 = param_5 >> 2;
        do {
          *puVar1 = *(undefined4 *)((iVar2 - (int)puVar3) + (int)puVar1);
          puVar1 = puVar1 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      puVar3 = puVar3 + (param_7 >> 2);
      param_1 = (undefined4 *)((int)param_1 + -1);
      iVar2 = iVar2 + (param_8 >> 2) * 4;
    } while (param_1 != (undefined4 *)0x0);
  }
  return;
}


