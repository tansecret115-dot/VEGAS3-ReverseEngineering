/* Module: mp3plug.dll
   Function: FUN_5f6e7b50
   Address: 5f6e7b50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6e7b50(int param_1,int param_2,uint param_3,int *param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_5f6e62d0(param_4,param_3,9);
    if (param_2 == 3) {
      iVar1 = 5;
    }
    else {
      iVar1 = 3;
    }
    FUN_5f6e62d0(param_4,0,iVar1);
    return;
  }
  if ((param_1 == 1) || (param_1 == 2)) {
    FUN_5f6e62d0(param_4,param_3,8);
    if (param_2 == 3) {
      iVar1 = 1;
    }
    else {
      iVar1 = 2;
    }
    FUN_5f6e62d0(param_4,0,iVar1);
  }
  return;
}


