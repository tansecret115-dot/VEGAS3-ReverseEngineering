/* Module: vidcap30.exe
   Function: FUN_0057bd00
   Address: 0057bd00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0057bd00(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    FUN_00404b20(iVar2);
    iVar2 = iVar1;
  }
  return;
}


