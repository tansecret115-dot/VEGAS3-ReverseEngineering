/* Module: rmbe3260.dll
   Function: FUN_6604b200
   Address: 6604b200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * __thiscall FUN_6604b200(void *this,uint param_1,undefined *param_2,short *param_3)

{
  byte bVar1;
  undefined *puVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int *piVar7;
  bool bVar8;
  
  *param_3 = 0;
  if ((*(int *)((int)this + 0x208) == 0) || (*(int *)(*(int *)((int)this + 0x208) + 0xc) == 0)) {
    *(undefined4 *)((int)this + 0x20c) = 0x80040007;
    *param_3 = 0;
  }
  else if (*(code **)((int)this + 0x23b) != (code *)0x0) {
    puVar2 = (undefined *)
             (**(code **)((int)this + 0x23b))
                       (*(undefined4 *)((int)this + 0x227),param_1,param_2,param_3);
    if (*param_3 != 0) {
      return puVar2;
    }
    if ((short)param_2 != 0xe) {
      return puVar2;
    }
    iVar5 = 0;
    *param_3 = 0;
    param_2 = (undefined *)0x0;
    piVar7 = &DAT_6606e664;
    do {
      if (param_2 != (undefined *)0x0) {
        return param_2;
      }
      pbVar3 = (byte *)piVar7[-1];
      pbVar6 = (byte *)((int)this + 0x218);
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_6604b2aa:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_6604b2af;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_6604b2aa;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_6604b2af:
      if ((iVar4 == 0) && ((int)(param_1 & 0xffff) < *piVar7)) {
        param_2 = &DAT_6606e668 + ((param_1 & 0xffff) + iVar5) * 4;
        *param_3 = 4;
      }
      piVar7 = piVar7 + 0x13;
      iVar5 = iVar5 + 0x13;
      if (0x6606e82b < (int)piVar7) {
        return param_2;
      }
    } while( true );
  }
  return (undefined *)0x0;
}


