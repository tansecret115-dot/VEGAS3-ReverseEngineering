/* Module: mp3plug.dll
   Function: FUN_5f706390
   Address: 5f706390
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5f706390(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)FUN_5f6d9760(0x808);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = puVar2;
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      iVar1 = DAT_5f75a9f0;
      puVar3 = puVar3 + 2;
    } while ((int)puVar3 < (int)(puVar2 + 0x200));
    puVar2[0x200] = 0;
    if (iVar1 == 0) {
      FUN_5f7070b0();
      DAT_5f75a9f0 = 1;
    }
    return puVar2;
  }
  return (undefined4 *)0x0;
}


