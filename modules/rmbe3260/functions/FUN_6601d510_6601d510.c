/* Module: rmbe3260.dll
   Function: FUN_6601d510
   Address: 6601d510
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6601d510(void *this,void *param_1)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 local_50 [5];
  int local_3c [3];
  int local_30 [3];
  byte *local_24 [3];
  char *local_18 [3];
  int *local_c;
  int local_8;
  
  FUN_6605b650(local_24);
  local_8 = 0;
  if (param_1 == (void *)0x0) {
    piVar3 = (undefined4 *)0x0;
    iVar4 = -0x7ff8ffa9;
  }
  else {
    while (piVar3 = FUN_6604fb50(0), piVar3 != (int *)0x0) {
      local_c = piVar3;
      FUN_6605b650(local_18);
      iVar4 = FUN_6605bc10(local_18,0x104);
      if (iVar4 != 0) {
        (**(code **)(*piVar3 + 8))(&DAT_6606dbd8,iVar4);
      }
      FUN_6605bc90(local_18,-1);
      FUN_660522e0(local_50);
      FUN_66052ae0(local_50,local_18[0]);
      iVar4 = FUN_6605bf70(local_18,'\\');
      if (-1 < iVar4) {
        piVar5 = FUN_6605be40(local_18,local_30,iVar4 + 1);
        FUN_6605b900(local_18,piVar5);
        FUN_6605b770(local_30);
      }
      uVar6 = FUN_6605bf70(local_18,'.');
      if (-1 < (int)uVar6) {
        piVar5 = FUN_6605bf20(local_18,local_3c,uVar6);
        FUN_6605b900(local_18,piVar5);
        FUN_6605b770(local_3c);
      }
      FUN_6605bba0(local_18,&DAT_6606dbd4);
      FUN_6605b900(local_24,(int *)((int)this + 0xd8));
      if ((0 < *(int *)(local_24[0] + -8)) && (local_24[0][*(int *)(local_24[0] + -8) + -1] != 0x5c)
         ) {
        FUN_6605bba0(local_24,&DAT_6606c264);
      }
      FUN_6605bbe0(local_24,local_18);
      (**(code **)*piVar3)(1);
      local_c = (undefined4 *)0x0;
      bVar2 = FUN_6604e620(local_24[0]);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        pbVar8 = *(byte **)((int)this + 0xf0);
        pbVar7 = local_24[0];
        do {
          bVar1 = *pbVar7;
          bVar2 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_6601d685:
            iVar4 = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
            goto LAB_6601d68a;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar2 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_6601d685;
          pbVar7 = pbVar7 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_6601d68a:
        if (iVar4 != 0) {
          pbVar8 = *(byte **)((int)this + 0xfc);
          pbVar7 = local_24[0];
          do {
            bVar1 = *pbVar7;
            bVar2 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_6601d6be:
              iVar4 = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
              goto LAB_6601d6c3;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar2 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_6601d6be;
            pbVar7 = pbVar7 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_6601d6c3:
          if (iVar4 != 0) {
            pbVar8 = *(byte **)((int)this + 0x108);
            pbVar7 = local_24[0];
            do {
              bVar1 = *pbVar7;
              bVar2 = bVar1 < *pbVar8;
              if (bVar1 != *pbVar8) {
LAB_6601d6f7:
                iVar4 = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
                goto LAB_6601d6fc;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar2 = bVar1 < pbVar8[1];
              if (bVar1 != pbVar8[1]) goto LAB_6601d6f7;
              pbVar7 = pbVar7 + 2;
              pbVar8 = pbVar8 + 2;
            } while (bVar1 != 0);
            iVar4 = 0;
LAB_6601d6fc:
            if (iVar4 != 0) {
              pbVar8 = *(byte **)((int)this + 0x114);
              pbVar7 = local_24[0];
              do {
                bVar1 = *pbVar7;
                bVar2 = bVar1 < *pbVar8;
                if (bVar1 != *pbVar8) {
LAB_6601d72c:
                  iVar4 = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
                  goto LAB_6601d731;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar7[1];
                bVar2 = bVar1 < pbVar8[1];
                if (bVar1 != pbVar8[1]) goto LAB_6601d72c;
                pbVar7 = pbVar7 + 2;
                pbVar8 = pbVar8 + 2;
              } while (bVar1 != 0);
              iVar4 = 0;
LAB_6601d731:
              if (iVar4 != 0) {
                pbVar8 = *(byte **)((int)this + 0x120);
                pbVar7 = local_24[0];
                do {
                  bVar1 = *pbVar7;
                  bVar2 = bVar1 < *pbVar8;
                  if (bVar1 != *pbVar8) {
LAB_6601d761:
                    iVar4 = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
                    goto LAB_6601d766;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar7[1];
                  bVar2 = bVar1 < pbVar8[1];
                  if (bVar1 != pbVar8[1]) goto LAB_6601d761;
                  pbVar7 = pbVar7 + 2;
                  pbVar8 = pbVar8 + 2;
                } while (bVar1 != 0);
                iVar4 = 0;
LAB_6601d766:
                if (iVar4 != 0) {
                  FUN_66052300(local_50);
                  FUN_6605b770((int *)local_18);
                  goto LAB_6601d798;
                }
              }
            }
          }
        }
      }
      FUN_66052300(local_50);
      FUN_6605b770((int *)local_18);
    }
    local_8 = -0x7ff8fff2;
    local_c = (undefined4 *)0x0;
LAB_6601d798:
    bVar2 = FUN_6604e680((char *)local_24[0]);
    piVar3 = local_c;
    iVar4 = local_8;
    if (CONCAT31(extraout_var_00,bVar2) == 0) {
      local_8 = -0x7ffbfda6;
      iVar4 = local_8;
    }
  }
  if (piVar3 != (undefined4 *)0x0) {
    (**(code **)*piVar3)(1);
  }
  if (-1 < iVar4) {
    FUN_6605b900(param_1,(int *)local_24);
  }
  FUN_6605b770((int *)local_24);
  return iVar4;
}


