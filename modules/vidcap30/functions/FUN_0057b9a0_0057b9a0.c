/* Module: vidcap30.exe
   Function: FUN_0057b9a0
   Address: 0057b9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0057b9a0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)FUN_0057b730();
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 1;
    }
    uVar2 = FUN_0057b770(puVar1);
    iVar3 = FUN_0057b8e0(uVar2);
    if (iVar3 == 0) break;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = *(undefined4 **)(param_1 + 4);
    }
    else {
      puVar1 = (undefined4 *)*puVar1;
    }
  }
  return 0;
}


