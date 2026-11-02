/* Module: rmto3260.dll
   Function: FUN_662dc2a0
   Address: 662dc2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662dc2a0(void *this,byte *param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_64 [22];
  undefined2 local_4e;
  undefined4 local_44;
  undefined2 local_3a;
  byte local_27;
  undefined4 local_26 [7];
  int local_8;
  
  local_8 = 0;
  pbVar1 = FUN_662c7500(local_64,param_1,param_2);
  if (pbVar1 == (byte *)0x0) {
    local_8 = -0x7ffbff7f;
  }
  if (-1 < local_8) {
    *(undefined2 *)((int)this + 0x29) = local_4e;
    *(undefined4 *)((int)this + 0x21) = local_44;
    *(undefined2 *)((int)this + 0x27) = local_3a;
    puVar3 = local_26;
    puVar4 = (undefined4 *)((int)this + 8);
    for (uVar2 = (uint)(local_27 >> 2); uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = local_27 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *(undefined1 *)((int)this + local_27 + 8) = 0;
  }
  return local_8;
}


