/* Module: aviplug.dll
   Function: FUN_5f942000
   Address: 5f942000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f942000(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  int *piVar6;
  int iVar7;
  
  if ((param_3 != 2) && (param_3 != -1)) {
    if (param_3 == 0) {
      bVar5 = 0x50;
    }
    else {
      if (param_3 != 1) {
        return 1;
      }
      bVar5 = 0x18;
    }
    iVar4 = param_2 / 2;
    if (0 < iVar4) {
      piVar6 = (int *)(param_1 + 0x1c6);
      iVar7 = param_1 + 0xf9;
      do {
        iVar1 = *piVar6;
        param_3._2_1_ = (byte)((uint)iVar1 >> 0x10);
        bVar3 = param_3._2_1_ ^ (param_3._2_1_ ^ bVar5) & 0x10;
        bVar3 = bVar3 ^ (bVar3 ^ bVar5) & 0x40;
        param_3._3_1_ = (undefined1)((uint)iVar1 >> 0x18);
        param_3._0_2_ = (undefined2)iVar1;
        param_3._0_3_ = CONCAT12(bVar3 ^ (bVar3 ^ bVar5) & 8,(undefined2)param_3);
        *piVar6 = param_3;
        uVar2 = *(undefined4 *)(iVar7 + 12000);
        param_3._2_1_ = (byte)((uint)uVar2 >> 0x10);
        bVar3 = param_3._2_1_ ^ (param_3._2_1_ ^ bVar5) & 0x10;
        bVar3 = bVar3 ^ (bVar3 ^ bVar5) & 0x40;
        iVar4 = iVar4 + -1;
        param_3._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
        param_3._0_2_ = (undefined2)uVar2;
        param_3._0_3_ = CONCAT12(bVar3 ^ (bVar3 ^ bVar5) & 8,(undefined2)param_3);
        *(int *)(iVar7 + 12000) = param_3;
        piVar6 = piVar6 + 6000;
        iVar7 = iVar7 + 24000;
      } while (iVar4 != 0);
    }
    return 0;
  }
  return 0;
}


