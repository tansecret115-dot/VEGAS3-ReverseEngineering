/* Module: mp3plug.dll
   Function: FUN_5f6d9720
   Address: 5f6d9720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_5f6d9720(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_5f6d976c();
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
    for (uVar2 = (uint)(param_2 * param_1) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (uVar2 = param_2 * param_1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  return puVar1;
}


