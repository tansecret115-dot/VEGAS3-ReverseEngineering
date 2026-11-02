/* Module: mpgmux.dll
   Function: FUN_100012a0
   Address: 100012a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_100012a0(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  while (((iVar1 != 0 && (*(int *)(iVar1 + 0xc) <= param_4)) &&
         ((*(int *)(iVar1 + 0xc) < param_4 || (*(uint *)(iVar1 + 8) <= param_3))))) {
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(iVar1 + 0x10);
    if (iVar1 != 0) {
      (**(code **)(param_1 + 0x2624))(iVar1);
    }
    iVar1 = *(int *)(param_2 + 4);
  }
  return;
}


