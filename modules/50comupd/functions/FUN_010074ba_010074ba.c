/* Module: 50comupd.exe
   Function: FUN_010074ba
   Address: 010074ba
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010074ba(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  
  if (*(int *)(param_1 + 0x2ed8) != 3) {
    puVar3 = *(undefined2 **)(param_1 + 0x2b04);
    if (puVar3 + 2 <= *(undefined2 **)(param_1 + 0x2b08)) {
      uVar4 = *puVar3;
      uVar1 = *(undefined1 *)((int)puVar3 + 3);
      uVar2 = *(undefined1 *)(puVar3 + 1);
      *(undefined1 *)(param_1 + 0x2eb4) = 0x10;
      *(undefined2 **)(param_1 + 0x2b04) = puVar3 + 2;
      *(uint *)(param_1 + 0x2eb0) = CONCAT31(CONCAT21(uVar4,uVar1),uVar2);
    }
  }
  return;
}


