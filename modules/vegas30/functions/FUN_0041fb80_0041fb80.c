/* Module: vegas30.exe
   Function: FUN_0041fb80
   Address: 0041fb80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041fb80(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  
  if (((**(int **)(param_2 + 8) != 0) &&
      (pbVar1 = *(byte **)(**(int **)(param_2 + 8) + 0x20c), pbVar1 != (byte *)0x0)) &&
     ((*pbVar1 & 5) == 0)) {
    switch(*(undefined4 *)(param_1 + 0x8c)) {
    case 2:
      if (DAT_0064a52c != 0) {
        return 1;
      }
      if (((*(byte *)(*(int *)(pbVar1 + 4) + 0xc) & 4) != 0) &&
         (iVar2 = FUN_005d1550(*(undefined4 *)(param_1 + 0x94)), iVar2 != 0)) {
        return 1;
      }
      break;
    case 3:
    case 4:
      return 1;
    case 5:
      return 1;
    }
  }
  return 0;
}


