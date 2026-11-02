/* Module: rnco3260.dll
   Function: FUN_637176f0
   Address: 637176f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_637176f0(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,int param_6,
            undefined4 param_7,int param_8,int param_9,undefined4 param_10,undefined *param_11)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_8 >> 1;
  for (iVar1 = param_3; iVar1 != 0; iVar1 = iVar1 + -1) {
    (*(code *)param_11)(param_1,param_2,param_6,param_7);
    param_1 = param_1 + param_4;
    do {
      param_6 = param_6 + param_9;
      iVar2 = iVar2 - param_3;
    } while (-1 < iVar2);
    iVar2 = iVar2 + param_8;
  }
  return;
}


