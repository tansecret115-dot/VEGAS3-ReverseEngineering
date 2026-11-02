/* Module: vegas30k.dll
   Function: FUN_011990d0
   Address: 011990d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011990d0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 1;
  puVar1 = *(undefined4 **)(param_1 + 0x640);
  *(undefined4 *)(param_1 + 0x198) = param_2;
  while ((puVar1 != (undefined4 *)0x0 &&
         (iVar2 = (**(code **)(*(int *)*puVar1 + 0x19c))(param_1,param_2), iVar2 == 0))) {
    puVar1 = (undefined4 *)puVar1[0xd];
  }
  return iVar2;
}


