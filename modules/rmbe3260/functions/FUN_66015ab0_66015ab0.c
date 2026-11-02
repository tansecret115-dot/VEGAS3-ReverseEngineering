/* Module: rmbe3260.dll
   Function: FUN_66015ab0
   Address: 66015ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_66015ab0(uint *param_1,int param_2)

{
  undefined2 uVar1;
  byte *pbVar2;
  uint uVar3;
  int *this;
  int iVar4;
  undefined2 local_10;
  undefined2 local_e;
  byte local_c;
  byte bStack_b;
  uint local_a;
  undefined2 local_6;
  
  if ((((param_2 != 0) && (*(int *)(param_2 + 0x96) != 0)) && (param_1 != (uint *)0x0)) &&
     (pbVar2 = (byte *)param_1[1], pbVar2 != (byte *)0x0)) {
    if ((param_1[2] & 2) == 0) {
      if ((param_1[2] & 1) != 0) {
        this = FUN_66037500(pbVar2,*param_1);
        if (this == (int *)0x0) {
          return;
        }
        iVar4 = (**(code **)(*this + 4))();
        if ((iVar4 == 0x4d445052) && (iVar4 = (**(code **)(*this + 8))(), iVar4 == 0)) {
          FUN_66034a10(this,*(undefined2 *)(param_2 + 0x94));
          (**(code **)(*this + 0x18))(param_1[1],*param_1);
        }
        (**(code **)*this)(1);
      }
    }
    else {
      uVar3 = *param_1;
      if ((pbVar2 != (byte *)0x0) && (uVar3 != 0)) {
        local_10 = CONCAT11(*pbVar2,pbVar2[1]);
        if (local_10 == 0) {
          local_e = CONCAT11(pbVar2[2],pbVar2[3]);
          local_a = (uint)pbVar2[6] << 0x18 | (uint)pbVar2[7] << 0x10 | (uint)pbVar2[8] << 8 |
                    (uint)pbVar2[9];
          local_6 = CONCAT11(pbVar2[10],pbVar2[0xb]);
        }
      }
      uVar1 = *(undefined2 *)(param_2 + 0x94);
      *pbVar2 = local_10._1_1_;
      pbVar2[1] = (byte)local_10;
      if (local_10 == 0) {
        pbVar2[2] = local_e._1_1_;
        pbVar2[3] = (byte)local_e;
        bStack_b = (byte)((ushort)uVar1 >> 8);
        pbVar2[4] = bStack_b;
        local_c = (byte)uVar1;
        pbVar2[5] = local_c;
        pbVar2[6] = (byte)(local_a >> 0x18);
        pbVar2[7] = (byte)(local_a >> 0x10);
        pbVar2[8] = (byte)(local_a >> 8);
        pbVar2[9] = (byte)local_a;
        pbVar2[10] = local_6._1_1_;
        pbVar2[0xb] = (byte)local_6;
      }
      *param_1 = uVar3;
    }
    (**(code **)(param_2 + 0x96))(param_1,*(undefined4 *)(param_2 + 0x9a));
  }
  return;
}


