/* Module: vegas30k.dll
   Function: FUN_01188650
   Address: 01188650
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_01188650(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  piVar2 = param_2;
  uVar3 = 1;
  *param_2 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x600);
  if ((iVar1 != 2) && (iVar1 != 3)) {
    puVar4 = *(undefined4 **)(param_1 + 0x638);
    if (puVar4 != (undefined4 *)0x0) {
      while( true ) {
        param_2 = (int *)0x0;
        (**(code **)(*(int *)*puVar4 + 0x8c))((int *)*puVar4,0x32,&param_2);
        if (puVar4[9] != 0) break;
        puVar4 = (undefined4 *)puVar4[0x19];
        if (puVar4 == (undefined4 *)0x0) {
          return 1;
        }
      }
      uVar3 = 0;
      *piVar2 = (int)param_2;
    }
    return uVar3;
  }
  *param_2 = (iVar1 != 0x3f) - 2;
  return 0;
}


