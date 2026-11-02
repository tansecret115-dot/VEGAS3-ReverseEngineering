/* Module: vidcap30.exe
   Function: FUN_0057b790
   Address: 0057b790
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0057b790(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0057b720();
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_0057b770(iVar1);
    if (iVar2 == param_2) break;
    if (iVar1 == 0) {
      iVar1 = *param_1;
    }
    else {
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  return iVar1;
}


