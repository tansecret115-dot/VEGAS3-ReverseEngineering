/* Module: rmme3260.dll
   Function: FUN_662193b0
   Address: 662193b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662193b0(void *this,byte *param_1)

{
  byte bVar1;
  undefined4 in_EAX;
  byte *pbVar2;
  int iVar3;
  ushort uVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  byte *local_20 [3];
  undefined4 local_14;
  void *local_10;
  int local_c;
  int local_8;
  
  uVar4 = 0;
  local_14 = CONCAT22((short)((uint)in_EAX >> 0x10),*(short *)((int)this + 0x5c));
  local_c = 0;
  local_8 = 0;
  local_10 = this;
  if (*(short *)((int)this + 0x5c) != 0) {
    do {
      if (local_8 != 0) break;
      iVar6 = (uint)uVar4 * 0x15 + *(int *)((int)local_10 + 0x5e);
      FUN_66250790(local_20,*(undefined4 **)(iVar6 + 7),
                   (uint)*(byte *)((uint)uVar4 * 0x15 + 6 + *(int *)((int)local_10 + 0x5e)));
      pbVar2 = local_20[0];
      pbVar5 = param_1;
      do {
        bVar1 = *pbVar2;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_66219436:
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_6621943b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_66219436;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_6621943b:
      if (iVar3 == 0) {
        local_8 = 1;
        local_c = iVar6;
      }
      uVar4 = uVar4 + 1;
      FUN_66250210((int *)local_20);
    } while (uVar4 < (ushort)local_14);
  }
  FUN_66250210((int *)&param_1);
  return local_c;
}


