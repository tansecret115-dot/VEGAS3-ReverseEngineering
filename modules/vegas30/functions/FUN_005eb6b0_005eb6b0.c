/* Module: vegas30.exe
   Function: FUN_005eb6b0
   Address: 005eb6b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005eb6b0(ushort *param_1,int param_2,int param_3,undefined4 param_4,int *param_5)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  
  puVar3 = param_1;
  if (((param_1 != (ushort *)0x0) && (param_3 != 0)) && (param_5 != (int *)0x0)) {
    if (param_2 != 0) {
      param_1 = (ushort *)0x0;
      do {
        uVar1 = *puVar3;
        uVar2 = FUN_005eb740(puVar3 + 1,param_3,uVar1);
        param_3 = param_3 + (uVar2 & 0xffff);
        puVar3 = (ushort *)((int)puVar3 + uVar1 + 2);
        param_2 = param_2 + (-2 - (uint)uVar1);
        param_1 = (ushort *)((int)param_1 + (uVar2 & 0xffff));
      } while (param_2 != 0);
      *param_5 = (int)param_1;
      return 0;
    }
    *param_5 = 0;
    return 0;
  }
  return 0x80070057;
}


