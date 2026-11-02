/* Module: vidcap30.exe
   Function: FUN_0057b6e0
   Address: 0057b6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0057b6e0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    FUN_00404b20(iVar2);
    iVar2 = iVar1;
  }
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


