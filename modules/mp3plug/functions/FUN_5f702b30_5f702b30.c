/* Module: mp3plug.dll
   Function: FUN_5f702b30
   Address: 5f702b30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f702b30(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 * param_4;
  if (param_2 < param_3) {
    iVar2 = (param_3 - param_2 & 0xfffffffeU) + param_2;
    for (; param_2 < iVar2; param_2 = param_2 + 2) {
      *(undefined4 *)(param_1 + iVar1 * 4) = 0;
      *(undefined4 *)(param_1 + (iVar1 + param_4) * 4) = 0;
      iVar1 = iVar1 + param_4 + param_4;
    }
    for (; param_2 < param_3; param_2 = param_2 + 1) {
      *(undefined4 *)(param_1 + iVar1 * 4) = 0;
      iVar1 = iVar1 + param_4;
    }
  }
  return;
}


