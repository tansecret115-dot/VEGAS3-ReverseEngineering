/* Module: mp3plug.dll
   Function: FUN_5f6f6c70
   Address: 5f6f6c70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_5f6f6c70(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = -4;
  do {
    iVar1 = *(int *)(param_3 + 0x10 + iVar3 * 4);
    if (iVar1 == 0) {
      return iVar2;
    }
    iVar2 = iVar2 + iVar1 * *(int *)(param_4 + 0x10 + iVar3 * 4);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0);
  return iVar2;
}


