/* Module: vegas30k.dll
   Function: FUN_011885f0
   Address: 011885f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011885f0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = param_2;
  puVar3 = *(undefined4 **)(param_1 + 0x638);
  uVar2 = 1;
  if (puVar3 != (undefined4 *)0x0) {
    do {
      if (iVar1 < 0) {
        puVar3[9] = 1;
      }
      else {
        param_2 = 0;
        (**(code **)(*(int *)*puVar3 + 0x8c))((int *)*puVar3,0x32,&param_2);
        puVar3[9] = (uint)(param_2 == iVar1);
      }
      puVar3 = (undefined4 *)puVar3[0x19];
    } while (puVar3 != (undefined4 *)0x0);
    uVar2 = 0;
  }
  return uVar2;
}


