/* Module: vegas30.exe
   Function: FUN_004296a0
   Address: 004296a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004296a0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_0064b57c == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *DAT_0064b57c;
  }
  if ((param_2 < 0) || (iVar1 + -1 < param_2)) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(DAT_0064b57c[2] + param_2 * 4);
  }
  if (puVar2 != (undefined4 *)0x0) {
    _mbscpy((uchar *)(param_1 + 0x3120),(uchar *)(puVar2 + 3));
    _mbscpy((uchar *)(param_1 + 0x3170),(uchar *)(puVar2 + 0x2b));
    _mbscpy((uchar *)(param_1 + 0x31c0),(uchar *)(puVar2 + 0x3f));
    *(undefined4 *)(param_1 + 0x3210) = *puVar2;
    *(undefined4 *)(param_1 + 0x3214) = puVar2[1];
    *(undefined4 *)(param_1 + 0x3218) = puVar2[2];
    return;
  }
  *(undefined1 *)(param_1 + 0x3120) = 0;
  *(undefined1 *)(param_1 + 0x3170) = 0;
  *(undefined1 *)(param_1 + 0x31c0) = 0;
  *(undefined4 *)(param_1 + 0x3210) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3214) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3218) = 0xffffffff;
  return;
}


