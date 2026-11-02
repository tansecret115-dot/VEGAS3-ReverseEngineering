/* Module: rmto3260.dll
   Function: FUN_662d8d80
   Address: 662d8d80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662d8d80(void *this,byte *param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined1 local_64 [22];
  undefined2 local_4e;
  short sStack_3c;
  short local_3a;
  byte local_2c;
  undefined4 local_2b;
  byte local_27;
  uint local_26 [7];
  int local_8;
  
  local_8 = 0;
  pbVar1 = FUN_662c7500(local_64,param_1,param_2);
  if (pbVar1 == (byte *)0x0) {
    local_8 = -0x7ffbff7f;
  }
  if (-1 < local_8) {
    *(short *)((int)this + 0x46) = local_3a;
    *(short *)((int)this + 0x48) = local_3a * sStack_3c;
    *(undefined2 *)((int)this + 0x70) = local_4e;
    *(short *)((int)this + 0x6a) = sStack_3c;
    *(uint *)((int)this + 0xae) = local_26[1] & 0xff;
    puVar3 = &local_2b;
    puVar5 = (undefined4 *)((int)this + 0x25);
    for (uVar2 = (uint)(local_2c >> 2); uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar2 = local_2c & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *(undefined1 *)((int)this + local_2c + 0x25) = 0;
    puVar4 = local_26;
    puVar6 = (uint *)((int)this + 0x20);
    for (uVar2 = (uint)(local_27 >> 2); uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar2 = local_27 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(char *)puVar6 = (char)*puVar4;
      puVar4 = (uint *)((int)puVar4 + 1);
      puVar6 = (uint *)((int)puVar6 + 1);
    }
    *(undefined1 *)((int)this + local_27 + 0x20) = 0;
  }
  return local_8;
}


