/* Module: vegas30k.dll
   Function: FUN_01188550
   Address: 01188550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_01188550(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 *_Memory;
  int unaff_EDI;
  undefined4 *puVar3;
  int local_4;
  
  puVar1 = *(undefined4 **)(param_1 + 0x638);
  local_4 = param_1;
  (**(code **)(*param_2 + 0x8c))(param_2,0x32,&local_4);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    while( true ) {
      _Memory = puVar1;
      (**(code **)(*(int *)*_Memory + 0x8c))((int *)*_Memory,0x32,&stack0xfffffff8);
      if (unaff_EBP == unaff_EDI) break;
      puVar1 = (undefined4 *)_Memory[0x19];
      puVar3 = _Memory;
      if ((undefined4 *)_Memory[0x19] == (undefined4 *)0x0) {
        return 0;
      }
    }
    iVar2 = _Memory[9];
    if (puVar3 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x638) = _Memory[0x19];
    }
    else {
      puVar3[0x19] = _Memory[0x19];
    }
    (**(code **)(*(int *)*_Memory + 8))((int *)*_Memory);
    free(_Memory);
    if (iVar2 != 0) {
      FUN_011885f0(0);
    }
  }
  return 0;
}


