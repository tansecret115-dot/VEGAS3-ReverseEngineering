/* Module: vegas30k.dll
   Function: FUN_010632e0
   Address: 010632e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_010632e0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  
  switch(param_1) {
  case 0:
  case 0x11:
    if (-1 < param_4) {
      puVar4 = (undefined2 *)(param_2 + param_4 * 4);
      iVar2 = param_4 + 1;
      puVar1 = (undefined2 *)(param_2 + param_4 * 2);
      do {
        *puVar4 = *puVar1;
        puVar4[1] = *puVar1;
        puVar4 = puVar4 + -2;
        iVar2 = iVar2 + -1;
        puVar1 = puVar1 + -1;
      } while (iVar2 != 0);
      return (undefined1 *)0x0;
    }
    break;
  default:
    return &DAT_80070057;
  case 0x13:
  case 0x20:
    if (-1 < param_4) {
      puVar6 = (undefined4 *)(param_2 + param_4 * 8);
      iVar2 = param_4 + 1;
      puVar3 = (undefined4 *)(param_2 + param_4 * 4);
      do {
        *puVar6 = *puVar3;
        puVar6[1] = *puVar3;
        puVar6 = puVar6 + -2;
        iVar2 = iVar2 + -1;
        puVar3 = puVar3 + -1;
      } while (iVar2 != 0);
    }
    break;
  case 0x31:
    if (-1 < param_4) {
      puVar5 = (undefined1 *)(param_2 + param_4 * 2);
      do {
        iVar2 = param_4 + -1;
        *puVar5 = *(undefined1 *)(param_4 + param_2);
        puVar5[1] = *(undefined1 *)(param_4 + param_2);
        puVar5 = puVar5 + -2;
        param_4 = iVar2;
      } while (-1 < iVar2);
      return (undefined1 *)0x0;
    }
  }
  return (undefined1 *)0x0;
}


