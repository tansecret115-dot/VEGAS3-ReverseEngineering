/* Module: vegas30k.dll
   Function: FUN_0119c1b0
   Address: 0119c1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0119c1b0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (((*(byte *)(param_1 + 8) & 4) != 0) ||
     (iVar1 = (**(code **)(*param_1 + 200))(param_1,0,0), -1 < iVar1)) {
    iVar1 = param_1[0x187];
    param_1[0x187] = iVar1 + 1;
    if (iVar1 + 1 == param_1[0x186]) {
      puVar2 = (undefined4 *)param_1[400];
      param_1[0x19a] = 1;
      iVar1 = 1;
      if (puVar2 != (undefined4 *)0x0) {
        do {
          iVar1 = (**(code **)(*(int *)*puVar2 + 0x154))(param_1);
          if (iVar1 != 0) {
            param_1[0x187] = param_1[0x187] + -1;
            return iVar1;
          }
          puVar2 = (undefined4 *)puVar2[0xd];
        } while (puVar2 != (undefined4 *)0x0);
        return 0;
      }
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}


