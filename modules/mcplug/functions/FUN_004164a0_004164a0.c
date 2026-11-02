/* Module: mcplug.dll
   Function: FUN_004164a0
   Address: 004164a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004164a0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    puVar1 = &DAT_00487acc;
    if (iVar2 == 0) {
      puVar1 = &DAT_00487a94;
    }
    iVar2 = iVar2 + 1;
    puVar1[8] = 0;
    puVar1[10] = 0;
    puVar1[9] = 0xfffffedc;
  } while (iVar2 < 2);
  return;
}


