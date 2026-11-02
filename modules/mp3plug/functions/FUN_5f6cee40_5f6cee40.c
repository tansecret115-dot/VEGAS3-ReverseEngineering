/* Module: mp3plug.dll
   Function: FUN_5f6cee40
   Address: 5f6cee40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6cee40(int param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x90) != 0)) && (*(int *)(param_1 + 0x70) != 0)) {
    uVar1 = FUN_5f6d3a30(*(int *)(param_1 + 0x70));
    if (uVar1 <= param_3) {
      FUN_5f6d3a70(*(void **)(param_1 + 0x70),param_2,(byte)*(undefined4 *)(param_1 + 0x94),
                   (char)*(undefined4 *)(param_1 + 0x98),(char)*(undefined4 *)(param_1 + 0x9c));
    }
    uVar2 = FUN_5f6d3a30(*(int *)(param_1 + 0x70));
    return uVar2;
  }
  return 0;
}


