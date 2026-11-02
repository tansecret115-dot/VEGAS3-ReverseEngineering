/* Module: vegas30.exe
   Function: FUN_005e7290
   Address: 005e7290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005e7290(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if ((DAT_0064a58c == *(int *)(param_1 + 4)) &&
     (iVar1 = lstrcmpA((LPCSTR)(param_1 + 8),&DAT_0064a590), iVar1 == 0)) {
    return 0;
  }
  *(int *)(param_1 + 4) = DAT_0064a58c;
  _mbscpy((uchar *)(param_1 + 8),&DAT_0064a590);
  uVar2 = 1;
  *(undefined4 *)(param_1 + 0x128) = DAT_0064a924;
  if (1 < *(uint *)(param_1 + 0x114)) {
    puVar3 = (undefined4 *)(param_1 + 300);
    do {
      *puVar3 = 0x80000000;
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x114));
  }
  *(undefined4 *)(param_1 + 0x528) = DAT_0064a924;
  return 0;
}


