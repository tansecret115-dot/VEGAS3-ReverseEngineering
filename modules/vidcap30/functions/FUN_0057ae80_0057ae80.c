/* Module: vidcap30.exe
   Function: FUN_0057ae80
   Address: 0057ae80
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_0057ae80(int *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  iVar1 = 4;
  bVar3 = true;
  piVar2 = &DAT_005a5b18;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar3 = *param_1 == *piVar2;
    param_1 = param_1 + 1;
    piVar2 = piVar2 + 1;
  } while (bVar3);
  return !bVar3;
}


