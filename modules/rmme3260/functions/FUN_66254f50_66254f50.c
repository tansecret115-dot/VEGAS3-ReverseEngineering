/* Module: rmme3260.dll
   Function: FUN_66254f50
   Address: 66254f50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66254f50(int param_1,uint param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = FUN_662551e0(param_1,param_2,param_3,param_4);
  uVar1 = (uVar1 & 0xffff) + *(int *)(param_1 + 8);
  if (*(uint *)(param_1 + 0x10) <= uVar1) {
    do {
      uVar1 = uVar1 - *(ushort *)(param_1 + 0x14);
    } while (*(uint *)(param_1 + 0x10) <= uVar1);
  }
  *(uint *)(param_1 + 8) = uVar1;
  return;
}


