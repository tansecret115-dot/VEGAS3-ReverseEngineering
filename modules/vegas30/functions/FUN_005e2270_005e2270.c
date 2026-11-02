/* Module: vegas30.exe
   Function: FUN_005e2270
   Address: 005e2270
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005e2270(byte *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  iVar2 = 0x564;
  bVar3 = false;
  iVar1 = 0;
  bVar4 = true;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar3 = *param_1 < *param_2;
    bVar4 = *param_1 == *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (bVar4);
  if (!bVar4) {
    iVar1 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
  }
  return iVar1;
}


