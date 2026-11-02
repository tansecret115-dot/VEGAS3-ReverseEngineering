/* Module: mcplug.dll
   Function: FUN_004163e0
   Address: 004163e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004163e0(void)

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
    puVar1[0xc] = 0;
    *puVar1 = 0;
    puVar1[1] = 0xffffff9c;
    puVar1[2] = 0;
    puVar1[3] = 0xffffff38;
    puVar1[0xd] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0xffffff9c;
    puVar1[6] = 0;
    puVar1[7] = 0xffffff38;
    puVar1[8] = 0;
    puVar1[9] = 0xfffffed4;
    puVar1[10] = 0;
  } while (iVar2 < 2);
  return;
}


