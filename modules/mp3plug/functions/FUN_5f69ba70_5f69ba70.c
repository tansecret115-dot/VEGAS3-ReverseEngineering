/* Module: mp3plug.dll
   Function: FUN_5f69ba70
   Address: 5f69ba70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f69ba70(int *param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  if (*(char *)(iVar2 + 3) != '\x03') {
    return 0x8004e01c;
  }
  bVar1 = *(byte *)(iVar2 + 5);
  param_1[4] = (uint)bVar1;
  param_1[2] = param_1[5] + iVar2;
  if ((bVar1 & 0x40) != 0) {
    *param_1 = *param_1 +
               CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + 10),*(undefined1 *)(iVar2 + 0xb)),
                                 *(undefined1 *)(iVar2 + 0xc)),*(undefined1 *)(iVar2 + 0xd)) + 10;
    return 0;
  }
  *param_1 = *param_1 + 10;
  return 0;
}


