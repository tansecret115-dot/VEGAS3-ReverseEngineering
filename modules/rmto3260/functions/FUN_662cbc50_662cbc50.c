/* Module: rmto3260.dll
   Function: FUN_662cbc50
   Address: 662cbc50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_662cbc50(int param_1)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  uint local_14;
  uint local_10;
  undefined2 local_c;
  int local_8;
  
  pbVar3 = (byte *)0x0;
  local_8 = 0;
  piVar1 = FUN_662f0880(0);
  if (piVar1 == (int *)0x0) {
    local_8 = -0x7ff8fff2;
  }
  if ((-1 < local_8) &&
     (local_8 = (**(code **)(*piVar1 + 0x10))(*(undefined4 *)(param_1 + 0x20),0x8002,0),
     -1 < local_8)) {
    local_8 = (**(code **)(*piVar1 + 0x20))(0,0);
  }
  if (-1 < local_8) {
    pbVar3 = operator_new(10);
    if (pbVar3 == (byte *)0x0) {
      local_8 = -0x7ff8fff2;
    }
    if (-1 < local_8) {
      iVar2 = (**(code **)(*piVar1 + 0x28))(pbVar3,10);
      if (iVar2 != 10) {
        local_8 = -0x7ffbff7f;
      }
      if ((-1 < local_8) && (local_8 = (**(code **)(*piVar1 + 0x20))(0,0), -1 < local_8)) {
        if (pbVar3 != (byte *)0x0) {
          local_14 = (uint)*pbVar3 << 0x18 | (uint)pbVar3[1] << 0x10 | (uint)pbVar3[2] << 8 |
                     (uint)pbVar3[3];
          local_10 = (uint)pbVar3[4] << 0x18 | (uint)pbVar3[5] << 0x10 | (uint)pbVar3[6] << 8 |
                     (uint)pbVar3[7];
          local_c = CONCAT11(pbVar3[8],pbVar3[9]);
        }
        if (local_14 == 0x2e524d46) {
          local_14 = 0x2e524d5a;
        }
        else {
          local_8 = -0x7ffbff7f;
        }
      }
    }
  }
  if (-1 < local_8) {
    *pbVar3 = (byte)(local_14 >> 0x18);
    pbVar3[1] = (byte)(local_14 >> 0x10);
    pbVar3[2] = (byte)(local_14 >> 8);
    pbVar3[3] = (byte)local_14;
    pbVar3[4] = (byte)(local_10 >> 0x18);
    pbVar3[5] = (byte)(local_10 >> 0x10);
    pbVar3[6] = (byte)(local_10 >> 8);
    pbVar3[7] = (byte)local_10;
    pbVar3[8] = local_c._1_1_;
    pbVar3[9] = (byte)local_c;
    iVar2 = (**(code **)(*piVar1 + 0x30))(pbVar3,10);
    if (iVar2 != 10) {
      local_8 = -0x7ffbff7f;
    }
  }
  if (pbVar3 != (byte *)0x0) {
    operator_delete(pbVar3);
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)*piVar1)(1);
  }
  return local_8;
}


