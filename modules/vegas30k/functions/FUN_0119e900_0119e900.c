/* Module: vegas30k.dll
   Function: FUN_0119e900
   Address: 0119e900
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0119e900(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_8 [2];
  
  iVar4 = 0;
  puVar5 = *(undefined4 **)(param_1 + 0x640);
  *(undefined4 *)(param_1 + 0x24) = param_3;
  if (*(int *)(param_1 + 0x614) == 0) {
    if (puVar5 != (undefined4 *)0x0) {
      do {
        local_8[0] = *(int *)(param_1 + 0x4fc);
        uVar1 = *(undefined2 *)(param_1 + 0x4f8);
        uVar2 = *(ushort *)(param_1 + 0x506);
        *(ushort *)((int)puVar5 + 0x22) = uVar2;
        *(undefined2 *)(puVar5 + 5) = uVar1;
        uVar3 = (uint)(uVar2 >> 3) * puVar5[3];
        *(short *)(puVar5 + 8) = (short)uVar3;
        *(short *)((int)puVar5 + 0x16) = (short)puVar5[3];
        puVar5[6] = local_8[0];
        puVar5[7] = (uVar3 & 0xffff) * local_8[0];
        *(undefined2 *)(puVar5 + 9) = 0;
        iVar4 = (**(code **)(*(int *)*puVar5 + 0x128))
                          (param_1,puVar5 + 5,&LAB_01196f70,puVar5,puVar5[4],param_3);
        if (iVar4 < 0) {
          return iVar4;
        }
        puVar5 = (undefined4 *)puVar5[0xd];
        *(undefined4 *)(param_1 + 0x638) = 1;
      } while (puVar5 != (undefined4 *)0x0);
      if (iVar4 < 0) {
        return iVar4;
      }
    }
    if (*(int *)(param_1 + 0x4b8) != 0) {
      (**(code **)(**(int **)(param_1 + 0x2c) + 0x84))(*(int **)(param_1 + 0x2c),6,local_8);
      (**(code **)(**(int **)(param_1 + 0x4b8) + 0x6c))
                (*(int **)(param_1 + 0x4b8),0,&stack0xffffffec);
    }
    FUN_01197210();
    FUN_01197d30();
    if (iVar4 < 0) {
      return iVar4;
    }
  }
  *(int *)(param_1 + 0x614) = *(int *)(param_1 + 0x614) + 1;
  return iVar4;
}


