/* Module: wmfdist2.exe
   Function: FUN_01007d23
   Address: 01007d23
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01007d23(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  uVar1 = param_3 + param_2;
  puVar2 = (undefined1 *)param_1[0xac1];
  uVar3 = param_2;
  while( true ) {
    if ((int)uVar1 <= (int)uVar3) {
      param_1[0xac1] = (int)puVar2;
      param_3 = 0x101;
      if ((int)uVar1 < 0x102) {
        param_3 = uVar1;
      }
      for (; param_2 < param_3; param_2 = param_2 + 1) {
        *(undefined1 *)(param_2 + param_1[1] + *param_1) = *(undefined1 *)(param_2 + *param_1);
      }
      param_1[0xbb0] = param_1[2] & uVar3;
      return uVar3 - uVar1;
    }
    if ((undefined1 *)param_1[0xac2] <= puVar2) break;
    *(undefined1 *)(uVar3 + *param_1) = *puVar2;
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  return -1;
}


