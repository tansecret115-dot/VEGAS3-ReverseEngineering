/* Module: vegas30.exe
   Function: FUN_0057ca40
   Address: 0057ca40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0057ca40(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_9c [39];
  
  iVar1 = FUN_0057ca80(param_2,local_9c);
  if (iVar1 == 0) {
    puVar2 = local_9c;
    puVar3 = (undefined4 *)(param_1 + 0xb0);
    for (iVar1 = 0x27; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}


