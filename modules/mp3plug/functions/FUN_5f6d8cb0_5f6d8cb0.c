/* Module: mp3plug.dll
   Function: FUN_5f6d8cb0
   Address: 5f6d8cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6d8cb0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (0 < param_3) {
    puVar1 = param_2 + param_3;
    iVar2 = ((int)puVar1 - (int)param_2 & 0xfffffff8U) + (int)param_2;
    for (; (int)param_2 < iVar2; param_2 = param_2 + 2) {
      *param_2 = param_1;
      param_2[1] = param_1;
    }
    for (; (int)param_2 < (int)puVar1; param_2 = param_2 + 1) {
      *param_2 = param_1;
    }
  }
  return;
}


