/* Module: vegas30k.dll
   Function: FUN_01184290
   Address: 01184290
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01184290(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 1;
  puVar1 = *(undefined4 **)(param_1 + 0x640);
  while ((puVar1 != (undefined4 *)0x0 &&
         (iVar2 = (**(code **)(*(int *)*puVar1 + 0x18c))(param_1,param_2,param_3,param_4),
         -1 < iVar2))) {
    puVar1 = (undefined4 *)puVar1[0xd];
  }
  return iVar2;
}


