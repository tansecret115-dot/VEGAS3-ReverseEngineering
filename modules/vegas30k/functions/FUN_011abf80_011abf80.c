/* Module: vegas30k.dll
   Function: FUN_011abf80
   Address: 011abf80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011abf80(int param_1,int *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iStack_4;
  
  iVar1 = param_3;
  puVar2 = (undefined4 *)param_2[0x19d];
  iStack_4 = param_1;
  if (puVar2 != (undefined4 *)0x0) {
    while( true ) {
      param_3 = 0;
      (**(code **)(*(int *)*puVar2 + 0x8c))((int *)*puVar2,0xf,&param_3);
      if (((param_3 & 4) != 0) &&
         ((**(code **)(*(int *)*puVar2 + 0x8c))((int *)*puVar2,0x32,&iStack_4), iStack_4 == iVar1))
      break;
      puVar2 = (undefined4 *)puVar2[6];
      if (puVar2 == (undefined4 *)0x0) {
        return 1;
      }
    }
    if (puVar2[1] != 0) {
      iVar1 = FUN_011885f0(param_4);
      if (iVar1 == 0) {
        (**(code **)(*param_2 + 0xd8))(param_2,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
      }
      return iVar1;
    }
  }
  return 1;
}


