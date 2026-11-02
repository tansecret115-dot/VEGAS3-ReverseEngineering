/* Module: mp3plug.dll
   Function: FUN_5f6e7c00
   Address: 5f6e7c00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6e7c00(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 3;
  do {
    FUN_5f6e62d0(param_2,*(uint *)(param_1 + iVar1 * 4),1);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return;
}


