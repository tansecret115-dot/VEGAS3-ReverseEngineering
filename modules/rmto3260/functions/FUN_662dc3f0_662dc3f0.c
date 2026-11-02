/* Module: rmto3260.dll
   Function: FUN_662dc3f0
   Address: 662dc3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_662dc3f0(undefined4 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 extraout_EDX;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  undefined2 local_38;
  undefined2 uStack_36;
  undefined2 local_34;
  undefined2 uStack_32;
  undefined2 local_30;
  byte local_2c [8];
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  ushort local_6;
  
  iVar4 = 0;
  local_c = 0;
  local_10 = 0;
  local_1c = FUN_662f65b0(*(int *)((int)param_1 + 0x2d));
  *(undefined4 *)((int)param_1 + 0x11) = 0;
  *(undefined4 *)((int)param_1 + 0x15) = 0;
  *(undefined4 *)((int)param_1 + 0x19) = 0;
  if ((short)local_1c == 0) {
    iVar4 = -0x7ffbfdae;
  }
  local_14 = 0;
  if ((short)local_1c != 0) {
    do {
      if (iVar4 < 0) {
        return iVar4;
      }
      iVar4 = FUN_662f6580(*(int *)((int)param_1 + 0x2d),local_14,&local_c);
      if (-1 < iVar4) {
        local_10 = 0;
        FUN_662f65d0(*(int *)((int)param_1 + 0x2d),local_c,(char *)local_2c,(int *)&local_10);
        if (-1 < iVar4) {
          pbVar5 = (byte *)(param_1 + 2);
          pbVar2 = local_2c;
          do {
            bVar1 = *pbVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_662dc4a9:
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_662dc4ae;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_662dc4a9;
            pbVar2 = pbVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_662dc4ae:
          if (((iVar3 == 0) && (local_10 == *(ushort *)((int)param_1 + 0x29))) &&
             (iVar4 = FUN_662f6600(*(int *)((int)param_1 + 0x2d),local_c,2,(int *)&local_18,&local_6
                                  ), -1 < iVar4)) {
            local_38 = (undefined2)*local_18;
            uStack_36 = (undefined2)((uint)*local_18 >> 0x10);
            local_34 = (undefined2)local_18[1];
            uStack_32 = (undefined2)((uint)local_18[1] >> 0x10);
            local_30 = *(undefined2 *)(local_18 + 2);
            *(uint *)((int)param_1 + 0xd) = CONCAT22(local_34,uStack_36);
            *(undefined2 *)((int)param_1 + 0x1d) = uStack_32;
            *(undefined2 *)((int)param_1 + 0x1f) = local_30;
            if ((-1 < iVar4) &&
               (iVar4 = FUN_662f6630(*(void **)((int)param_1 + 0x2d),local_c,(int)&local_38),
               -1 < iVar4)) {
              FUN_662f6670(*(void **)((int)param_1 + 0x2d),8);
              iVar4 = FUN_662f6650(*(void **)((int)param_1 + 0x2d),(char *)0x0);
              if ((-1 < iVar4) &&
                 ((iVar4 = FUN_662f6690(*(void **)((int)param_1 + 0x2d),(int *)((int)param_1 + 0x11)
                                        ,(int *)((int)param_1 + 0x15),(uint *)((int)param_1 + 0x19),
                                        &local_24,&local_20), -1 < iVar4 &&
                  (iVar4 = FUN_662f66f0(*(undefined4 *)((int)param_1 + 0x2d),extraout_EDX,
                                        (int *)*(undefined4 *)((int)param_1 + 0x2d)), -1 < iVar4))))
              {
                iVar4 = FUN_662dc160(param_1);
              }
            }
          }
        }
      }
      local_14 = local_14 + 1;
    } while ((ushort)local_14 < (ushort)local_1c);
  }
  return iVar4;
}


